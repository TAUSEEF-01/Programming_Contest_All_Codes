// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> v(n);
    vector<ll> mp(n + 10, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] < n + 10)
            mp[v[i]]++;
    }

    int cnt = 0;
    for (int i = 0; i < n + 10; i++)
    {
        if (mp[i] == 0)
        {
            cout << i << endl;
            return;
        }
        else if (mp[i] > 1)
        {
            if (i + m < n + 10)
            {
                mp[i + m] += (mp[i] - 1);
            }
        }
        cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
