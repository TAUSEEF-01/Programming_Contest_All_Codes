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
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll lo = 0, hi = min(n, b);
    ll mini = n * a;
    ll maxi = (b * (b + 1) / 2);

    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;

        ll t = b - mid;
        ll c = (maxi - (t * (t + 1) / 2)) + (n - mid) * a;

        // t = max(t - 1, 0LL);
        // ll c2 = (maxi - (t * (t + 1) / 2)) + (n - mid) * a;

        mini = max(mini, c);

        // if ((maxi - (t * (t + 1) / 2)) >= (mid * a))

        // if (c2 >= c)
        if (b - mid > a)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }

    // cout << (b * (b + 1) / 2) - ((b - min(b, n)) * (b - min(b, n) + 1) / 2) << ' ' << n * a << ' ';
    cout << mini << endl;
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
