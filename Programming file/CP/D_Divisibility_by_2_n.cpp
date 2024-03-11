// accepted
// https://codeforces.com/contest/1744/problem/D

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution
{
public:
    vector<int> str, pref;
    vector<int> vc[65];

    void precalc();
    void solve();
};

void Solution::precalc()
{
    str.assign(200005, 0);
    pref.assign(200005, 0);

    for (int i = 1; i < 200005; i++)
    {
        int cnt = 0;
        int num = i;
        while (num % 2 == 0)
        {
            num /= 2;
            cnt++;
        }

        str[i] = cnt;
        vc[cnt].push_back(i);
    }

    for (int i = 1; i < 200005; i++)
    {
        pref[i] = pref[i - 1] + str[i];
    }
}

void Solution::solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        ll num = a[i];
        while (num % 2 == 0)
        {
            num /= 2;
            cnt++;
        }
    }

    if (cnt >= n)
    {
        cout << 0 << endl;
    }
    else
    {
        if (pref[n] + cnt < n)
        {
            cout << -1 << endl;
        }
        else
        {
            int rem = n - cnt;
            int p = log2(n);
            int ans = 0;

            for (int i = p + 1; i >= 0; i--)
            {
                for (auto &c : vc[i])
                {
                    if (c <= n)
                    {
                        rem -= i;
                        ans++;
                    }
                    if (rem <= 0)
                    {
                        cout << ans << endl;
                        return;
                    }
                }
            }
        }
    }
}

/*

2 1
4 2
8 3
16 4

*/

int main()
{
    Solution sln;
    sln.precalc();

    int t = 1;
    cin >> t;

    while (t--)
    {
        sln.solve();
    }

    return 0;
}
