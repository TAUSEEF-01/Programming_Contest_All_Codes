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

const int M = 2e5 + 10;
vector<int> g[M];
bool vis[M];
int level[M];

void bfs(int s)
{
    queue<int> a;
    a.push(s);
    vis[s] = true;

    while (!a.empty())
    {
        int u = a.front();
        a.pop();

        for (auto v : g[u])
        {
            if (!vis[v])
            {
                a.push(v);
                vis[v] = true;
                level[v] = level[u] + 1;
            }
        }
    }
}

void reset(int n)
{
    for (int i = 0; i <= n; i++)
    {
        vis[i] = false;
        g[i].clear();
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        g[u].pb(v);
        g[v].pb(u);
    }

    bfs(1);
    
    set<int> odd, even;
    for (int i = 1; i <= n; i++)
    {
        if (level[i] % 2)
            odd.insert(i);
        else
            even.insert(i);
    }

    if (odd.size() < even.size())
    {
        cout << odd.size() << endl;
        output(odd);
    }
    else
    {
        cout << even.size() << endl;
        output(even);
    }

    reset(n);
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
