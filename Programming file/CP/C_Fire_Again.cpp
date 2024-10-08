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
const ll mod = 1e9 + 7, inf = 1e9;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

#define short int int

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

const int M = 2010;
int g[M][M];
bool vis[M][M];
int level[M][M];

int n, m;

bool isValid(int x, int y)
{
    if (x < n && x >= 0 && y < m && y >= 0 && !vis[x][y])
        return true;
    return false;
}

void bfs(int u, int v)
{
    queue<pair<int, int>> q;
    q.push({u, v});

    vis[u][v] = true;
    level[u][v] = 0;

    while (!q.empty())
    {
        int x = q.front().first, y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i], yy = y + dy[i];
            if (isValid(xx, yy))
            {
                q.push({xx, yy});
                vis[xx][yy] = true;
                level[xx][yy] = min(level[x][y] + 1, level[xx][yy]);
            }
        }
    }
}

void solve()
{
    cin >> n >> m;

    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            level[x][y] = inf;
        }
    }

    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;

        bfs(u, v);
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < m; y++)
            {
                vis[x][y] = 0;
            }
        }
    }

    int maxi = 0;
    pair<int, int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (level[i][j] > maxi)
            {
                maxi = level[i][j];
                ans = {i, j};
            }
        }
    }

    cout << ans.first + 1 << ' ' << ans.second + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
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
