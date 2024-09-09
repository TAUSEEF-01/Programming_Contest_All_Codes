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

const int M = 1e5 + 5;
vi g[M];
vi vis(M, false);
vi cats(M, 0);
vi ans(M, 0);
int n, m;
int cnt = 0;

void bfs(int source)
{
    queue<int> q;
    q.push(source);

    vis[source] = 1;
    ans[source] = cats[source];

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int &v : g[u])
        {
            if (!vis[v])
            {
                q.push(v);
                vis[v] = 1;

                if (ans[u] == 0)
                {
                    ans[v] = cats[v];
                }
                else
                {
                    if (cats[v] != 0 || ans[u] > m)
                        ans[v] = ans[u] + 1;
                    else
                        ans[v] = 0;
                }
            }
        }
    }
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    bfs(1);
    for (int i = 2; i <= n; i++)
    {
        if (g[i].size() == 1)
        {
            if (ans[i] <= m)
                cnt++;
        }
    }

    cout << cnt << endl;
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
