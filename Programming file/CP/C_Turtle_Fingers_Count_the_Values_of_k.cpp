// accepted
// https://codeforces.com/contest/1933/problem/C

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
    ll a, b, l;
    cin >> a >> b >> l;

    vl v1, v2;

    v1.push_back(1LL);
    v2.push_back(1LL);

    ll p = 1;
    while (a * p <= l)
    {
        ll num = p * a;
        if (l % num == 0)
        {
            v1.push_back(num);
        }
        p *= a;
    }

    p = 1;
    while (b * p <= l)
    {
        ll num = p * b;
        if (l % num == 0)
        {
            v2.push_back(num);
        }
        p *= b;
    }

    int sa = v1.size(), sb = v2.size();
    set<ll> nums;

    for (int i = 0; i < sa; i++)
    {
        for (int j = 0; j < sb; j++)
        {
            ll p = (v1[i] * v2[j]);

            if (p > l || l % p != 0)
                continue;

            nums.insert(p);
        }
    }

    cout << nums.size() << endl;
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
