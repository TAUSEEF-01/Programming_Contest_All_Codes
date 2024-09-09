// accepted

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

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

    ordered_set st;
    loop(i, 0, n)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }

    vl ans;
    for (int i = 0; i < 45; i++)
    {
        vl temp;

        int sz = st.size();
        if (sz == 1)
        {
            ll num = *st.find_by_order(0);

            if (num != 0)
                ans.push_back(num);

            if (ans.size() > 40)
            {
                cout << -1 << endl;
                return;
            }

            cout << ans.size() << endl;
            output(ans);

            return;
        }

        ll mid = (*st.find_by_order(0) + *st.find_by_order(sz - 1)) / 2;

        ans.push_back(mid);

        for (auto &x : st)
        {
            temp.push_back(abs(x - mid));
        }

        st.clear();

        for (auto &x : temp)
        {
            st.insert(x);
        }
    }

    cout << -1 << endl;
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
