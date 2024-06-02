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
    int n;
    cin >> n;

    vl a(n), b(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll diff = 0;
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
        if (i < n)
            diff += abs(a[i] - b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((a[i] >= b[n] && b[i] <= b[n]) || (a[i] <= b[n] && b[i] >= b[n]))
        {
            cout << diff + 1 << endl;
            return;
        }
    }

    ll mini = (ll)1e12;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, abs(a[i] - b[n]));
        mini = min(mini, abs(b[i] - b[n]));
    }
    mini += 1;

    cout << diff + mini << endl;
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
