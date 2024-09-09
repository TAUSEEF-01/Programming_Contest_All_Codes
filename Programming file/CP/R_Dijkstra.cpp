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

const int M = 1e5 + 10;

ll n, m;
vector<pair<ll, ll>> g[M];

void shortest_path(ll s, vl &dis, vl &parent)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, s});
    dis[s] = 0;
    parent[s] = s;

    while (!q.empty())
    {
        ll d = q.top().first;
        ll n = q.top().second;
        q.pop();

        for (auto &v : g[n])
        {
            ll nn = v.first;
            ll dd = v.second;
            // cout << dd << ' ' << dis[n] + dd << ' ' <<  dis[nn] << endl;

            if (dis[n] + dd < dis[nn])
            {
                dis[nn] = dis[n] + dd;
                parent[nn] = n;
                q.push({dd, nn});

                // dbg(nn);
                // cout << n << ' ';
                // cout << parent[nn] << ' ';
            }
        }
    }
}

void solve()
{
    cin >> n >> m;

    loop(i, 0, m)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    vl parent(n + 1, 0);
    vl dis(n + 1, inf);

    shortest_path(1, dis, parent);

    if (parent[n] == 0)
    {
        cout << -1 << endl;
        return;
    }

    vl ans;
    for (auto v = n; v != 1; v = parent[v])
    {
        ans.push_back(v);
        // cout << v << ' ';
    }
    ans.push_back(1);

    reverse(all(ans));
    output(ans);
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
