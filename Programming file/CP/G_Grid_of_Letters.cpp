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

int x[] = {1, -1, 0, 0, 1, -1, -1, 1};
int y[] = {0, 0, 1, -1, 1, 1, -1, -1};

const int sz = 1e3 + 5;
bool vis[sz][sz];

int cnt;
int n, m;
string a[sz];

bool sideCheck(int i, int j, int u, int v)
{
    if (abs(a[i][j] - a[u][v]) == 1)
        return true;
    return false;
}

bool isValid(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y])
        return true;
    return false;
}

void dfs(int u, int v, vi &ch)
{
    vis[u][v] = true;
    ch[a[u][v] - 'A'] = 1;
    for (int i = 0; i < 8; i++)
    {
        int xx = u + x[i];
        int yy = v + y[i];
        if (isValid(xx, yy))
        {
            if (sideCheck(u, v, xx, yy))
            {
                dfs(xx, yy, ch);
            }
        }
    }
    cnt++;
}

void work()
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            vis[i][j] = false;
        }
    }
}

void solve()
{
    work();

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j])
            {
                vi ch(27, 0);
                dfs(i, j, ch);
                cnt = 0;
                for (int k = 0; k < 27; k++)
                {
                    if (ch[k])
                        cnt++;
                }
                ans = max(ans, cnt);
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
