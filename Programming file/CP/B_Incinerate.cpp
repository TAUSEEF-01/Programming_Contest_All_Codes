// accepted
// https://codeforces.com/contest/1763/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution
{
public:
    void solve();
};

void Solution::solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> h(n), p(n), suf(n, 0);
    vector<pair<ll, ll>> vp(n);
    map<ll, set<ll>> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        vp[i].first = h[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        vp[i].second = p[i];
        mp[h[i]].insert(p[i]);
    }

    sort(vp.begin(), vp.end());
    sort(h.begin(), h.end());

    ll mn = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        mn = min(mn, vp[i].second);
        suf[i] = mn;
    }

    ll kk = k;
    while (1)
    {
        int it = upper_bound(h.begin(), h.end(), k) - h.begin();

        if (it == n)
        {
            cout << "YES\n";
            return;
        }

        kk -= suf[it];
        if (kk <= 0)
        {
            cout << "NO\n";
            return;
        }
        k += kk;
    }
}

int main()
{
    Solution sln;

    int t = 1;
    cin >> t;

    while (t--)
    {
        sln.solve();
    }

    return 0;
}
