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
    return;
#define no          \
    cout << "NO\n"; \
    return;
/**/
const ll mod = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

const int N = 2e5 + 5;
vector<array<int, 2>> T[N];
ll dis[N];

/*
input -->
    int n;
    cin >> n;

    ll starting_node = 0;

    loop(i, 0, n - 1)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;

        starting_node = u;

        int w;
        cin >> w;

        T[u].push_back({v, w});
        T[v].push_back({u, w});

    }

    ll dist = diameter(starting_node);
*/

ll diameter(int s) // starting_node --> any node can be given to start
{
    vector<ll> dis;
    for (int i = 0; i < 2; i++) // double sweep --> running bfs twice --> 1st --> mark distances and find max distance node
    {                           //--> 2nd time start from that node to find the sum of max distance
        queue<int> q;
        dis.assign(N, -1);
        q.push(s);
        dis[s] = 0;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();

            if (dis[u] > dis[s])
                s = u; // mark1

            // for(auto [v, w]: T[u])
            for (int j = 0; j < T[u].size(); j++)
            {
                ll v = T[u][j][0], w = T[u][j][1];

                if (dis[v] >= 0) // already visited
                    continue;

                q.push(v);
                dis[v] = dis[u] + w;
            }
        }
    }

    return dis[s]; // because of mark1 --> we are going to get the max distance at dis[s]
}

void solve()
{
    int n;
    cin >> n;

    ll total_dis = 0, starting_node;

    loop(i, 0, n - 1)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;

        starting_node = u;

        int w;
        cin >> w;

        T[u].push_back({v, w});
        T[v].push_back({u, w});

        total_dis += w;
    }

    ll dist = diameter(starting_node);
    cout << total_dis * 2LL - dist << endl;
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

