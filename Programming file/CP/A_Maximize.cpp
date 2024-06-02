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

vi ans(5000, 0);

void precalc()
{
    for (int i = 1; i < 5000; i++)
    {
        for (int j = 1; j * j < i; j++)
        {
            if (j % i == 0)
            {
                ans[j] = i;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    // cout << ans[n] << endl;
    cout << n - 1 << endl;
}

int main()
{
    fast;

    // setIO();

    // precalc();

    int test = 1;
    cin >> test;

    while (test--)
        solve();

    return 0;
}
