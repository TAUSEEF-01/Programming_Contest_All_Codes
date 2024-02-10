// accepted
// https://codeforces.com/contest/1918/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool bitOn(ll n, ll pos)
{
    return (n & (1LL << pos));
}

ll bitOff(ll n, ll pos)
{
    return (n & ~(1 << (pos)));
}

void solve()
{
    ll a, b, r;
    cin >> a >> b >> r;

    if (b > a)
        swap(a, b);

    ll num = 0, first_bit = 1;
    for (ll i = 63; i >= 0; i--)
    {
        if (bitOn(a, i) && !bitOn(b, i))
        {
            if (first_bit)
            {
                first_bit = 0;
            }
            else if ((num | (1LL << i)) <= r)
            {
                num |= (1LL << i);
            }
        }
    }

    cout << abs((a ^ num) - (b ^ num)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
