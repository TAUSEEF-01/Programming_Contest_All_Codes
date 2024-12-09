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

const int dfs_limit = 1e5 + 10;
vector<int> g[dfs_limit], gp[dfs_limit];
vector<bool> vis(dfs_limit, false), vis2(dfs_limit, false);

void dfsSt(int u, stack<int> &st)
{
    vis[u] = true;
    for (int &v : g[u])
    {
        if (vis[v])
        {
            continue;
        }
        dfsSt(v, st);
    }
    st.push(u);
}

int cnt;

void dfs(int u)
{
    vis2[u] = true;
    cnt++;
    for (int &v : gp[u])
    {
        if (vis2[v])
        {
            continue;
        }
        dfs(v);
    }

    if (cnt > 1)
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
}

void solve()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;

        g[u].push_back(v);
        gp[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfsSt(i, st);
    }

    // dbg(st.size());

    ll ans = 0;
    while (!st.empty())
    {
        int x = st.top();
        // dbg(x);
        st.pop();

        if (!vis2[x])
        {
            cnt = 0;

            dfs(x);
            // dbg(cnt);
        }
    }

    cout << endl;
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
