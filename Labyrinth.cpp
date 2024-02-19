// accepted
// https://cses.fi/problemset/task/1193

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
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);

const int sz = 1005;
string a[sz];
bool vis[sz][sz];
char br[sz][sz];

stack<char> path;

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};

int n, m;

bool valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    if (vis[x][y] || a[x][y] == '#')
        return false;

    return true;
}

bool bfs(int x, int y)
{
    queue<pair<int, int>> qp;
    qp.push({x, y});

    vis[x][y] = true;

    while (!qp.empty())
    {
        int px = qp.front().first;
        int py = qp.front().second;

        qp.pop();

        if (a[px][py] == 'B')
        {
            while (1)
            {
                path.push(br[px][py]);

                if (br[px][py] == 'L')
                    py++;
                else if (br[px][py] == 'R')
                    py--;
                else if (br[px][py] == 'D')
                    px--;
                else if (br[px][py] == 'U')
                    px++;

                if (px == x && py == y)
                    break;
            }

            return true;
        }

        for (int k = 0; k < 4; k++)
        {
            px += dx[k];
            py += dy[k];

            if (valid(px, py))
            {
                qp.push({px, py});
                vis[px][py] = true;

                if (k == 0)
                    br[px][py] = 'L';
                else if (k == 1)
                    br[px][py] = 'R';
                else if (k == 2)
                    br[px][py] = 'D';
                else if (k == 3)
                    br[px][py] = 'U';
            }

            px -= dx[k];
            py -= dy[k];
        }
    }

    return false;
}

void solve()
{
    cin >> n >> m;

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'A')
            {
                x = i, y = j;
            }
            vis[i][j] = false;
        }
    }

    if (bfs(x, y))
    {
        cout << "YES\n";
        cout << path.size() << endl;
        while (!path.empty())
        {
            cout << path.top();
            path.pop();
        }
        cout << endl;
    }
    else
    {
        cout << "NO\n";
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
