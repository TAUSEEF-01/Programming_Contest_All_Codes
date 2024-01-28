//accepted
//https://codeforces.com/contest/1832/problem/B

//solution seen

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() 
{
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = -1E18;
    
    vector<ll> s(n + 1);
    for (int i = 0; i < n; i++) 
    {
        s[i + 1] = s[i] + a[i];
    }
    for (int i = 0; i <= k; i++) 
    {
        ans = max(ans, s[n - (k - i)] - s[2 * i]);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

