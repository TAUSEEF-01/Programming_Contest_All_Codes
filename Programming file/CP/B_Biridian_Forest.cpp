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

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

int r, c;
int x, y;
int myX, myY;

const int M = 1e3 + 10;
bool vis[M][M];
int level[M][M];

string a[M];

bool isValid(int xx, int yy)
{
    if ((xx >= 0 && xx < r) && (yy >= 0 && yy < c) && a[xx][yy] != 'T' && !vis[xx][yy])
        return true;
    return false;
}

void bfs()
{
    queue<pair<int, int>> a;
    a.push({x, y});
    vis[x][y] = true;
    level[x][y] = 0;

    while (!a.empty())
    {
        pair<int, int> p = a.front();
        int xx = p.first, yy = p.second;
        a.pop();

        for (int i = 0; i < 4; i++)
        {
            int px = xx + dx[i], py = yy + dy[i];
            if (isValid(px, py))
            {
                a.push({px, py});
                vis[px][py] = true;
                level[px][py] = level[xx][yy] + 1;
            }
        }
    }
}

void solve()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        cin >> a[i];
        for (int j = 0; j < c; j++)
        {
            vis[i][j] = false;
            if (a[i][j] == 'E')
            {
                x = i, y = j;
            }
            if (a[i][j] == 'S')
            {
                myX = i, myY = j;
            }
        }
    }

    bfs();

    int ans = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (vis[i][j] && (a[i][j] >= '0' && a[i][j] <= '9') && level[i][j] <= level[myX][myY])
            {
                ans += (a[i][j] - '0');
            }
        }
    }

    cout << ans << endl;
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

// // accepted

// #include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define all(a) a.begin(), a.end()
// #define reall(a) a.rbegin(), a.rend()
// #define vsort(a) sort(all(a))
// #define revsort(a) sort(reall(a))
// #define vmin(a) *min_element(all(a))
// #define vmax(a) *max_element(all(a))
// #define loop(i, k, n) for (ll i = k; i < n; i++)
// #define Loop(i, k, n) for (ll i = k; i <= n; i++)
// using vi = vector<int>;
// using vl = vector<ll>;
// using vvi = vector<vi>;
// using vvl = vector<vl>;
// using vs = vector<string>;
// using vb = vector<bool>;
// using pii = pair<int, int>;
// /**/
// #define input(a)      \
//     for (auto &x : a) \
//         cin >> x;
// /**/
// #define yes          \
//     cout << "YES\n"; \
//     return;
// #define no          \
//     cout << "NO\n"; \
//     return;
// /**/
// const ll mod = 1e9 + 7, inf = 1e18;
// const double pi = acos(-1);
// #define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

// int c, r;
// string a[1001];
// bool vis[1001][1001];
// int mini[1001][1001];
// int my_x, my_y, exit_x, exit_y;

// int dx[4] = {-1, 1, 0, 0};
// int dy[4] = {0, 0, 1, -1};

// bool invalid(int x, int y)
// {
//     if (x < 0 || x >= c || y < 0 || y >= r || vis[x][y] || a[x][y] == 'T')
//         return true;

//     return false;
// }

// void bfs()
// {
//     queue<pair<int, int>> q;
//     q.push({exit_x, exit_y});

//     mini[exit_x][exit_y] = 0;
//     vis[exit_x][exit_y] = 1;

//     while (!q.empty())
//     {
//         pair<int, int> pr = q.front();
//         q.pop();

//         int X = pr.first, Y = pr.second;

//         loop(i, 0, 4)
//         {
//             int x = X + dx[i];
//             int y = Y + dy[i];

//             if (invalid(x, y))
//             {
//                 continue;
//             }

//             vis[x][y] = 1;
//             mini[x][y] = 1 + mini[X][Y];

//             q.push({x, y});
//         }
//     }
// }

// void solve()
// {
//     memset(mini, -1, sizeof(mini));
//     memset(vis, 0, sizeof(vis));

//     cin >> c >> r;
//     loop(i, 0, c)
//     {
//         cin >> a[i];
//         loop(j, 0, r)
//         {
//             if (a[i][j] == 'E')
//             {
//                 exit_x = i;
//                 exit_y = j;
//             }
//             else if (a[i][j] == 'S')
//             {
//                 my_x = i;
//                 my_y = j;
//             }
//         }
//     }

//     bfs();

//     int time = mini[my_x][my_y], ans = 0;
//     loop(i, 0, c)
//     {
//         loop(j, 0, r)
//         {
//             if (mini[i][j] != -1 && mini[i][j] <= time && a[i][j] != 'S' && a[i][j] != 'E')
//             {
//                 ans += a[i][j] - '0';
//             }
//         }
//     }

//     cout << ans << endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // #endif

//     int t = 1;
//     // cin >> t;

//     for (int i = 1; i <= t; i++)
//     {
//         // cout<<"Case "<<i<<": ";
//         solve();
//     }

//     return 0;
// }
