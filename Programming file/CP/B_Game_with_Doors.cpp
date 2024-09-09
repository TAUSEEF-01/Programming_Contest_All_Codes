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

void solve()
{
    int l, r, a, b;
    cin >> l >> r >> a >> b;

    int mx1 = max(l, r), mx2 = max(a, b), mn1 = min(l, r), mn2 = min(a, b);

    vi x(105, 0);
    for (int i = l; i <= r; i++)
    {
        x[i]++;
    }
    for (int i = a; i <= b; i++)
    {
        x[i]++;
    }

    int ans = 0, f1 = -1, f2 = 0;
    for (int i = 0; i < 105; i++)
    {
        if (x[i] > 1)
        {
            ans++;
            // if (f1 == -1)
            // {
            //     f1 = i;
            // }
            // f2 = i;
        }
    }

    // cout << max(ans +1 , 0) <<endl;
    // cout << f2 - f1 <<endl;
    // cout << ans <<endl;

    if (mn1 == mn2 && mx1 == mx2)
    {
        ans--;
    }
    else if ((mn1 == mn2 && mx1 != mx2) || (mn1 != mn2 && mx1 == mx2))
    {
        // ans--;
    }
    else
    {
        ans++;
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
