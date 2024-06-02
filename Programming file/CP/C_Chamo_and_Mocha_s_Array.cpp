// accepted
// https://codeforces.com/problemset/problem/1975/C

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

    vl a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 2)
    {
        cout << min(a[0], a[1]) << endl;
        return;
    }

    // int flag = 1;
    // if (a[n - 2] < a[n - 1])
    // {
    //     flag = 0;
    // }

    ll maxi = -INT_MAX;
    // for (int i = n - 2 + flag; i >= 0; i--)
    // {
    //     maxi = max(maxi, a[i]);
    // }

    for (int i = 1; i < n - 1; i++)
    {
        ll mini = min(a[i - 1], min(a[i], a[i + 1]));
        ll maxx = max(a[i - 1], max(a[i], a[i + 1]));
        ll sum = a[i - 1] + a[i] + a[i + 1];

        maxi = max(maxi, sum - mini - maxx);
    }

    cout << maxi << endl;
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
