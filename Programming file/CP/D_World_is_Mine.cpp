#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

const char nl = '\n';
typedef long long ll;
typedef long double ld;

using namespace std;

const int inf = 1e9;

void solve()
{
    int n;
    cin >> n;

    map<int, int> cnt;
    vector<int> a;
    
    while (n--)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (auto &v : cnt)
    {
        a.push_back(v.second);
    }

    n = a.size();
    vector<int> dp(n + 1, inf);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        vector<int> ndp = dp; // copy is made so that the instant change is not carried

        for (int k = 1; k <= n; k++)
        {
            int nv = dp[k - 1] + a[i - 1];

            if (nv <= i - k)
            {
                ndp[k] = min(ndp[k], nv); // if dp[i] is used the current changes may affect the next iteration value of nv
            }
        }

        dp = ndp;
    }

    int ans = n;
    while (dp[ans] >= inf)
        ans--;
    cout << n - ans << nl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        solve();
}