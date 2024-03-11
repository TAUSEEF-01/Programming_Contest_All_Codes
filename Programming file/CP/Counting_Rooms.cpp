// accepted
// https://cses.fi/problemset/task/1192

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
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};

int n, m;

void dfs(int i, int j)
{
    vis[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        int _dx = i + dx[k];
        int _dy = j + dy[k];

        if (_dx >= 0 && _dx < n && _dy >= 0 && _dy < m && !vis[_dx][_dy] && a[_dx][_dy] != '#')
        {
            dfs(_dx, _dy);
        }
    }
}

void solve()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = false;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && a[i][j] != '#')
            {
                cnt++;
                dfs(i, j);
            }
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
