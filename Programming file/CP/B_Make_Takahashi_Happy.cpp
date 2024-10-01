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

int vis[12][12];
int n, m, ans;
int a[12][12];
// vector<set<int>> vs;

bool valid(int i, int j)
{
    if (i < n && j < m && i >= 0 && j >= 0)
        return true;
    return false;
}

void dfs(int i, int j, map<int, int> mp, int sz)
{
    if (mp[a[i][j]])
        return;

    mp[a[i][j]]++;
    if (i == n - 1 && j == m - 1)
    {
        ans++;
        return;
    }

    if (valid(i + 1, j))
    {
        dfs(i + 1, j, mp, sz + 1);
    }
    if (valid(i, j + 1))
    {
        dfs(i, j + 1, mp, sz + 1);
    }
    // mp[a[i][j]]--;
}

void solve()
{
    ans = 0;
    cin >> n >> m;

    // for (int i = 0; i < 12; i++)
    // {
    //     for (int j = 0; j < 12; j++)
    //     {
    //         vis[i][j] = 0;
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    map<int, int> mp;
    dfs(0, 0, mp, 0);

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
