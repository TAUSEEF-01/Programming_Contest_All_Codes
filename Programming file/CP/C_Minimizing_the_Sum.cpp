#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define reall(a) a.rbegin(), a.rend()
#define vsort(a) sort(all(a))
#define revsort(a) sort(reall(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);

void solve()
{
    ll n, k;
    cin >> n >> k;

    vl a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << a[0] << endl;
        return;
    }

    for (int i = 0; i < k; i++)
    {
        ll diff = 0;
        pair<int, int> vp;
        vp = {-INT_MAX, -INT_MAX};

        for (int j = 0; j < n; j++)
        {
            ll x = -INT_MAX, y = -INT_MAX;
            if (j == 0)
            {
                if (a[j] < a[j + 1])
                {
                    diff = a[j + 1] - a[j];
                    vp = {j, j + 1};
                }
                continue;
            }
            else if (j == n - 1)
            {
                if (a[j] < a[j - 1])
                {
                    if (diff < (a[j - 1] - a[j]))
                    {
                        diff = a[j - 1] - a[j];
                        vp = {j, j - 1};
                    }
                }
                continue;
            }

            if (a[j] < a[j - 1])
            {
                x = a[j - 1] - a[j];
            }
            if (a[j] < a[j + 1])
            {
                y = a[j + 1] - a[j];
            }

            if (x != -INT_MAX)
            {
                if (y != -INT_MAX)
                {
                    if (x >= y)
                    {
                        if (diff < x)
                        {
                            vp = {j, j - 1};
                            diff = x;
                        }
                    }
                    else
                    {
                        if (diff < y)
                        {
                            vp = {j, j + 1};
                            diff = y;
                        }
                    }
                }
                else
                {
                    if (diff < x)
                    {
                        vp = {j, j - 1};
                        diff = x;
                    }
                }
            }
            else if (y != -INT_MAX)
            {
                if (x != -INT_MAX)
                {
                    if (x >= y)
                    {
                        if (diff < x)
                        {
                            vp = {j, j - 1};
                            diff = x;
                        }
                    }
                    else
                    {
                        if (diff < y)
                        {
                            vp = {j, j + 1};
                            diff = y;
                        }
                    }
                }
                else
                {
                    if (diff < y)
                    {
                        vp = {j, j + 1};
                        diff = y;
                    }
                }
            }
        }

        // cout << vp.second << ' ' << vp.first << endl;
        // cout << a[vp.second] << ' ' << a[vp.first] << endl;

        if (vp.first != -INT_MAX && vp.second != -INT_MAX)
        {
            a[vp.second] = a[vp.first];
        }
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << a[i] << ' ';
        sum += a[i];
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

/*
2 1 2 5 100 5 100
2 1 2 5 100 5 5
2 1 2 5 5 5 5
*/



// #include <bits/stdc++.h>
// using namespace std;

// using i64 = long long;

// constexpr i64 inf = 1E18;

// void solve() {
//     int n, k;
//     std::cin >> n >> k;
    
//     std::vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> a[i];
//     }
    
//     std::vector<vector<i64>> dp(n + 1, std::vector<i64>(k + 1, inf));
//     dp[0][0] = 0;
//     for (int i = 0; i < n; i++) {
//         int min = a[i];
//         for (int j = 0; i + j < n && j <= k; j++) {
//             min = std::min(min, a[i + j]); // min number in that sub array --> increasing array one by one 
//             for (int x = 0; x + j <= k; x++) {
                
//                 // cout << i << ' ' << j << ' ' << x << endl;
//                 // cout << "i = " << i << " j = " << j << " x = " << x << endl;
//                 // cout << "dp[" << i + j + 1 << "][" << x + j << "] =" << ' ' << "min(" << dp[i + j + 1][x + j] << ", " << dp[i][x] + 1LL * min * (j + 1) << ")" << " = ";
//                 dp[i + j + 1][x + j] = std::min(dp[i + j + 1][x + j], dp[i][x] + 1LL * min * (j + 1));
//                 // cout << dp[i + j + 1][x + j] << endl;
//             }
//             // cout << "x ends!" << endl;
//         }
//         // cout << "j ends!" << endl;
//     }
//     i64 ans = *std::min_element(dp[n].begin(), dp[n].end());
//     std::cout << ans << "\n";
// }

// int main() {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
    
//     int t;
//     std::cin >> t;
    
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }






