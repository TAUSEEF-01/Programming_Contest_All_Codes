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
vector<int> nodes;

void bfs(int source)
{
    queue<int> a;
    a.push(source);
    vis[source] = true;

    while (!a.empty())
    {
        int u = a.front();
        a.pop();

        nodes.push_back(u);

        for (auto &v : g[u])
        {
            if (!vis[v])
            {
                a.push(v);
                vis[v] = true;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    loop(i, 0, n - 1)
    {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vi check(n), order(n + 1);
    loop(i, 0, n)
    {
        cin >> check[i];
        order[check[i]] = i;
    }

    auto cmp = [&](int a, int b)
    {
        return order[a] < order[b];
    };

    Loop(i, 1, n)
    {
        sort(all(g[i]), cmp);
    }

    bfs(1);

    if (nodes == check)
        cout << "Yes\n";
    else
        cout << "No\n";
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
