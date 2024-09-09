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

int vis[10][10];
int level[10][10];

int dx[] = {2, 2, -2, -2, 1, -1, 1, -1};
int dy[] = {1, -1, 1, -1, 2, 2, -2, -2};

string s1, s2;
int ans = 0;
int ax, ay, bx, by;

bool notValid(int x, int y)
{
    if (x > 8 || x <= 0 || y > 8 || y <= 0 || vis[x][y] == 1)
    {
        return true;
    }
    return false;
}

void bfs(int X, int Y)
{
    queue<pair<int, int>> q;
    q.push({X, Y});

    vis[X][Y] = 1;
    level[X][Y] = 1;

    while (!q.empty())
    {
        X = q.front().first;
        Y = q.front().second;

        q.pop();
        // cout << X << ' ' << Y << endl;

        for (int i = 0; i < 8; i++)
        {
            int x = X + dx[i];
            int y = Y + dy[i];

            if (notValid(x, y))
            {
                continue;
            }

            vis[x][y] = 1;
            level[x][y] = min(level[X][Y] + 1, level[x][y]);
            q.push({x, y});

            if (x == bx && y == by)
            {
                return;
            }
        }
    }
}

void solve()
{
    loop(i, 0, 10)
    {
        loop(j, 0, 10)
        {
            vis[i][j] = 0;
            level[i][j] = INT_MAX;
        }
    }

    cin >> s1 >> s2;
    ax = s1[0] - 'a' + 1;
    ay = s1[1] - '0';
    bx = s2[0] - 'a' + 1;
    by = s2[1] - '0';

    // cout << s1 << ' ' << s2 << endl;
    // cout << ax << ' ' << ay << ' ' << bx << ' ' << by << endl;

    bfs(ax, ay);

    cout << max(level[bx][by] - 1, 0) << endl;
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
