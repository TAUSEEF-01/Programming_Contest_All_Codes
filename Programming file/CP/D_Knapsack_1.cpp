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
/**/
#define yes          \
    cout << "YES\n"; \
    #define no       \
            cout     \
        << "NO\n";   \
/**/
const ll mod = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

ll n, weight;
vector<pair<ll, ll>> vp;

ll dp[105][100005];

// ll knapsack(int ind, ll w)
// {
//     if (ind == n - 1)
//     {
//         if (vp[ind].first <= w)
//             return vp[ind].second;
//         else
//             return 0;
//     }
//     if (dp[ind][w] != -1)
//     {
//         return dp[ind][w];
//     }

//     ll x = 0, y = 0;
//     if (vp[ind].first <= w)
//         x = knapsack(ind + 1, w - vp[ind].first) + vp[ind].second;

//     y = knapsack(ind + 1, w);

//     return dp[ind][w] = max(x, y);
// }

ll knapsack(int ind, ll w)
{
    if (w == 0)
        return 0;

    if (ind > n - 1)
        return 0;

    if (dp[ind][w] != -1)
        return dp[ind][w];

    ll x = knapsack(ind + 1, w);
    if (w - vp[ind].first >= 0)
        x = max(x, knapsack(ind + 1, w - vp[ind].first) + vp[ind].second);

    return dp[ind][w] = x;
}

void solve()
{
    memset(dp, -1, sizeof(dp));

    cin >> n >> weight;

    for (int i = 0; i < n; i++)
    {
        ll w, v;
        cin >> w >> v;

        vp.push_back({w, v});
    }

    ll ans = knapsack(0, weight);
    cout << ans << endl;
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
        solve();
    }

    return 0;
}
