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
#define loop(i, k, n) for (ll i = k; i < n; i++)
#define Loop(i, k, n) for (ll i = k; i <= n; i++)
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vs = vector<string>;
using vb = vector<bool>;
using pii = pair<int, int>;

/**/
#define input(a)      \
    for (auto &x : a) \
        cin >> x;

#define output(a)         \
    for (auto &x : a)     \
        cout << x << ' '; \
    cout << endl;

/**/
#define yes \
    cout << "YES\n"

#define no \
    cout << "NO\n"

/**/
const ll mod = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

vector<pair<int, int>> ans[105];

void precalc()
{
    for (int n = 1; n <= 100; n++)
    {
        for (int i = 1; i <= 10000; i++)
        {
            string a = to_string(i);
            int sz = a.size();

            if(n * sz > 10000)
            continue;

            for (int j = 1; j <= 10000; j++)
            {
                if (n * i > j && n * sz <= 10000)
                {
                    string temp;
                    int k = (n * i - j) / sz;
                    while (k--)
                    {
                        temp += a;
                    }
                    k = (n * i - j) % sz;
                    // for (int p = 0; p < k; p++)
                    // {
                    //     temp.push_back(a[p]);
                    // }

                    // if (temp.size() <= 10000)
                    // {
                    //     int num = stoi(temp);
                    //     if (num == i * n - j)
                    //     {
                    //         ans[n].push_back({i, j});
                    //     }
                    // }
                }
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    cout << ans[n].size() << endl;
    for(auto &x: ans[n])
    {
        cout << x.first << ' ' << x.second << endl; 
    }
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

    precalc();

    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
