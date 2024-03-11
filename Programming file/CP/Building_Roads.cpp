// accepted
// https://cses.fi/problemset/task/1666

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

const int sz = 1e5 + 10;
vi adj[sz];
vector<bool> vis(sz, false);

int n, m;

void dfs(int u)
{
    vis[u] = true;
    for (auto &v : adj[u])
    {
        if (vis[v])
            continue;
        dfs(v);
    }
}

void solve()
{
    cin >> n >> m;

    int cnt = -1;
    vi nodes;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            cnt++;
            nodes.pb(i);
            dfs(i);
        }
    }

    cout << cnt << endl;
    if (cnt > 0)
    {
        int p = nodes.size();
        for (int i = 0; i < p - 1; i++)
        {
            cout << nodes[i] << ' ' << nodes[i + 1] << endl;
        }
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

    int t = 1;
    // cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
