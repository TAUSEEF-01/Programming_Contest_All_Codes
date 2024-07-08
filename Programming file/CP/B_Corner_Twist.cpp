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

void solve()
{
    int n, m;
    cin >> n >> m;

    vs a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];

        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < m; j++)
        {
            sum1 += a[i][j] - '0';
        }
        for (int j = 0; j < m; j++)
        {
            sum2 += b[i][j] - '0';
        }

        // cout << sum1 << ' ' << sum2 << ' ' << i << endl;
        if (sum1 % 3 != sum2 % 3)
        {
            flag = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            sum1 += a[j][i] - '0';
        }
        for (int j = 0; j < n; j++)
        {
            sum2 += b[j][i] - '0';
        }

        // cout << sum1 << ' ' << sum2 << ' ' << i << endl;
        if (sum1 % 3 != sum2 % 3)
        {
            flag = 0;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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

/*
0000
0000
0000
0000

2100
1200
0012
0021


1020
1200
1210
0000

0000
1200
2200
0000

012
012
012

010
111
011


00000000
00000000
00000000
00000000
00000000
00000000
00000000
10000000

00000000
01200000
02010000
00102000
00020100
00001020
00000210
10000000


0000000
0000000

2220111
0111222


0000000
0100010

2220111
1210202
*/