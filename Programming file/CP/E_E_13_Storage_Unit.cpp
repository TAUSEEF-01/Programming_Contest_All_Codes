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
    ll n;
    cin >> n;

    string c;
    cin >> c;

    int sz = c.size(), k = 0;
    string temp;
    for (int i = sz - 2, j = 0; i >= 0; i--, j++)
    {
        k += ((c[i] - '0') * (int)pow(10, j));
    }

    if (c[sz - 1] == 'G')
        k *= 1000L;
    else if (c[sz - 1] == 'T')
        k *= 1000000L;

    vl a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int R = n, l = 0, r = 0, cnt = 0, L = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += a[r];

        if (sum <= k)
        {
            r++;
            cnt++;
        }
        else
        {
            R = min(R, cnt);
            sum -= a[l];
            sum -= a[r];
            l++;
            cnt--;
        }

        L = max(L, cnt);

        // cout << l << ' ' << r << ' ' << sum << ' ' << cnt << endl;
    }
    R = min(cnt, R);

    cout << R << ' ' << (L + 1 <= n ? L + 1 : -1) << endl;
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
