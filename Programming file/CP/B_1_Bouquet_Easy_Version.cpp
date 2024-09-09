// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    ll n, m;
    cin >> n >> m;

    ll ans = 0;
    map<ll, ll> mp;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
        mp[x]++;
    }

    vector<ll> a;
    for (auto &val : st)
    {
        if (m >= mp[val] * val)
            ans = max(ans, mp[val] * val);
        else
            ans = max(ans, (m / val) * val);

        a.push_back(val);
    }

    int s = a.size();
    for (int i = 1; i < s; i++)
    {
        if (a[i] - a[i - 1] <= 1)
        {
            ll diff = mp[a[i]] * a[i] + mp[a[i - 1]] * a[i - 1];

            if (m >= diff)
            {
                ans = max(ans, diff);
            }
            else
            {
                ll s1 = mp[a[i]], s2 = mp[a[i - 1]], total = 0;
                for (ll j = 0; j <= s1; j++)
                {
                    ll val = (a[i] * j);
                    ll left = m - val;

                    if (val > m)
                    {
                        break;
                    }

                    total = max(total, (val + (min((left / a[i - 1]), mp[a[i - 1]]) * a[i - 1])));
                }

                ans = max(ans, total);
            }
        }
    }

    cout << ans << endl;
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
        answer();
    }

    return 0;
}
