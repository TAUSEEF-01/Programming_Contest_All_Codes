// accepted

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

void solve1()
{
    int n;
    cin >> n;

    ll dp[n][n];
    dp[n - 1][n - 1] = 1;

    vs a(n);
    input(a);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] == '*')
            {
                dp[i][j] = 0;
                continue;
            }

            if (i == n - 1)
            {
                if (j != n - 1)
                    dp[i][j] = dp[i][j + 1];
            }
            else if (j == n - 1 && i != n - 1)
            {
                dp[i][j] = dp[i + 1][j];
            }
            else
            {
                dp[i][j] = (dp[i][j + 1] + dp[i + 1][j]) % mod;
            }
        }
    }

    cout << dp[0][0] << endl;
}

void solve2()
{
    int n;
    cin >> n;

    ll dp[n][n];
    dp[n - 1][n - 1] = 1;

    vs a(n);
    input(a);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] == '*')
            {
                dp[i][j] = 0;
                continue;
            }

            if (i == n - 1 && j == n - 1)
                continue;

            ll s1 = i < n - 1 ? dp[i + 1][j] : 0;
            ll s2 = j < n - 1 ? dp[i][j + 1] : 0;

            dp[i][j] = (s1 + s2) % mod;
        }
    }

    cout << dp[0][0] << endl;
}

void solve3()
{
    int n;
    cin >> n;

    vs a(n);
    input(a);

    vl prevRow(n);

    if (a[n - 1][n - 1] == '*')
        prevRow[n - 1] = 0;
    else
        prevRow[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[n - 1][i] == '*')
            prevRow[i] = 0;
        else
            prevRow[i] = prevRow[i + 1];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        vl currRow(n);
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] == '*')
            {
                currRow[j] = 0;
                continue;
            }

            ll s1 = prevRow[j];
            ll s2 = j < n - 1 ? currRow[j + 1] : 0;

            currRow[j] = (s1 + s2) % mod;
        }

        prevRow = currRow;
    }

    cout << prevRow[0] << endl;
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
    // cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";

        // solve1();
        // solve2();
        solve3(); // dp space optimized
    }

    return 0;
}
