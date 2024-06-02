#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
#define takeinput(a)  \
    for (auto &x : a) \
        cin >> x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define rev_all(a) a.rbegin(), a.rend()
#define asort(a) sort(all(a))
#define revsort(a) sort(rev_all(a))
const double pi = 3.141592653589793238462643383279502884197;
const ll mod = 1e9 + 7, inf = 1e18;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

void setIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    ll n;
    cin >> n;

    vl a(n), pref(n + 1, 1);
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }

    // ll ans = 1;
    // pref[0] = a[n-1] + 1;
    pref[n - 1] = 1000000000;
    // cout << pref[n-1] << ' ';
    for (int i = n - 1; i >= 1; i--)
    {
        // ans = ans *
        pref[i - 1] = pref[i] - a[i];
        // cout << pref[i] << ' ';
    }

    for (int i = 0; i < n; i++)
    {
        cout << pref[i] << ' ';
    }
    cout << endl;
}

int main()
{
    fast;

    // setIO();

    int test = 1;
    cin >> test;

    while (test--)
        solve();

    return 0;
}
