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
    int n, q;
    cin >> n >> q;

    string a;
    cin >> a;

    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string temp;
        temp.push_back(a[i]);
        temp.push_back(a[(i + 1) % n]);

        mp[temp]++;
    }

    vi b(26, 0), e(26, 0);
    int cnt = 0;
    while (q--)
    {
        string s;
        cin >> s;

        int sz = s.size();

        char x, y;
        cin >> x >> y;

        string t;
        t += x;
        t += y;

        if (sz == 3)
        {
            cnt += mp[t];
            e[x - 'A'] += mp[t];
            b[y - 'A'] += mp[t];
            mp[t] = 0;
        }
        else
        {
            int mini = min(e[x - 'A'], b[y - 'A']);
            cnt -= mini;
            mp[t] += mini;
            e[x - 'A'] -= mini;
            b[y - 'A'] -= mini;
        }

        cout << cnt << endl;
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
