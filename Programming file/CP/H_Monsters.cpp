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

char adj[1005][1005];
int vis[1005][1005];
int level[1005][1005];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char direct[] = {'L', 'R', 'U', 'D'};

int n, m;
int ax, ay;
string ans;
bool flag = false;

vector<pair<int, int>> vp;
queue<pair<pair<int, int>, int>> q;

bool notValid(int x, int y, int timer)
{
    return ((x >= n || x < 0 || y >= m || y < 0 || adj[x][y] == '#' || timer >= level[x][y]) ? true : false);
}

bool notValid2(int x, int y)
{
    return ((x >= n || x < 0 || y >= m || y < 0 || adj[x][y] == '#') ? true : false);
}

void bfs()
{
    while (!q.empty())
    {
        int X = q.front().first.first;
        int Y = q.front().first.second;
        int timer = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int x = X + dx[i];
            int y = Y + dy[i];

            if (notValid(x, y, timer + 1))
            {
                continue;
            }

            level[x][y] = timer + 1;
            q.push({{x, y}, timer + 1});
        }
    }
}

void bfs2()
{
    while (!q.empty())
    {
        int X = q.front().first.first;
        int Y = q.front().first.second;
        int timer = q.front().second;

        if (X == 0 || X == n - 1 || Y == 0 || Y == m - 1)
        {
            flag = true;
            int lvl = level[X][Y];
            vp.push_back({X, Y});

            lvl--;
            while (lvl >= 0)
            {
                for (int j = 3; j >= 0; j--)
                {
                    int px = X - dx[j];
                    int py = Y - dy[j];
                    if (notValid2(px, py))
                    {
                        continue;
                    }
                    if (level[px][py] == lvl)
                    {
                        vp.push_back({px, py});
                        X = px;
                        Y = py;
                        break;
                    }
                }
                lvl--;
            }
            return;
        }

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int x = X + dx[i];
            int y = Y + dy[i];

            if (notValid(x, y, timer + 1))
            {
                continue;
            }

            level[x][y] = timer + 1;
            q.push({{x, y}, timer + 1});

            if (x == 0 || x == n - 1 || y == 0 || y == m - 1)
            {
                flag = true;
                int lvl = level[x][y];
                vp.push_back({x, y});

                lvl--;
                while (lvl >= 0)
                {
                    for (int j = 3; j >= 0; j--)
                    {
                        int px = x - dx[j];
                        int py = y - dy[j];
                        if (notValid2(px, py))
                        {
                            continue;
                        }
                        if (level[px][py] == lvl)
                        {
                            vp.push_back({px, py});
                            x = px;
                            y = py;
                            break;
                        }
                    }
                    lvl--;
                    timer--;
                }
                return;
            }
        }
    }
}

void restorePath()
{
    int n = vp.size();
    for (int i = 1; i < n; i++)
    {
        if (vp[i].first == vp[i - 1].first)
        {
            if (vp[i].second < vp[i - 1].second)
            {
                ans += 'R';
            }
            else
            {
                ans += 'L';
            }
        }
        else
        {
            if (vp[i].first < vp[i - 1].first)
            {
                ans += 'D';
            }
            else
            {
                ans += 'U';
            }
        }
    }
    reverse(all(ans));
}

void solve()
{
    loop(i, 0, 1005)
    {
        loop(j, 0, 1005)
        {
            vis[i][j] = 0;
            level[i][j] = INT_MAX;
        }
    }

    cin >> n >> m;

    loop(i, 0, n)
    {
        loop(j, 0, m)
        {
            cin >> adj[i][j];

            if (adj[i][j] == 'A')
            {
                ax = i;
                ay = j;
            }
            else if (adj[i][j] == 'M')
            {
                level[i][j] = 0;
                q.push({{i, j}, 0});
            }
        }
    }

    bfs();

    level[ax][ay] = 0;
    q.push({{ax, ay}, 0});

    bfs2();

    if (!flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;

        restorePath();
        cout << ans.size() << endl;
        cout << ans << endl;
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
