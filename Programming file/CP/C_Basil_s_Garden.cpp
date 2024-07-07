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

void solve()
{
    ll n;
    cin >> n;

    ll maxi = 0, pos = 0;
    vl a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = a[n - 1], cnt = 0, mini = a[n - 1];
    maxi = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] <= ans)
        {
            ans++;
        }
        else
        {
            // ans = max(ans, a[i] - cnt);
            ans = max(a[i], ans);
            maxi = a[i];
        }
        // mini = min(a[i], mini);
        // cnt++;
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
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

/*

3 3 3 3
3 3 3 2
3 3 2 1
3 2 1 0
2 1 0 0
1 0 0 0
0 0 0 0


3 3 3 3 3
3 3 3 3 2
3 3 3 2 1
3 3 2 1 0
3 2 1 0 0
2 1 0 0 0
1 0 0 0 0
0 0 0 0 0

4 4 4
4 4 3
4 3 2
3 2 1
2 1 0
1 0 0
0 0 0

1 2 2
1 2 1
1 1 0
1 0 0
0 0 0

2 2 2
2 2 1
2 1 0
1 0 0
0 0 0


4 1 2 5
3 1 2 4
2 1 2 3
2 1 2 2
1 1 2 1
1 1 1 0
1 1 0 0
1 0 0 0
0 0 0 0


1 4 3 4 6
1 3 3 4 5
1 3 3 4 4
1 3 3 4 3
1 3 3 3 2
1 3 3 2 1
1 3 2 1 0
1 2 1 0 0
1 1 0 0 0
1 0 0 0 0
0 0 0 0 0


7 1 4 3 4 6
6 1 3 3 4 5
5 1 3 3 4 4
4 1 3 3 4 3
3 1 3 3 3 2
2 1 3 3 2 1
1 1 3 2 1 0
1 1 2 1 0 0
1 1 1 0 0 0
1 1 0 0 0 0
1 0 0 0 0 0
0 0 0 0 0 0

*/