// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end());

    ll lo = 0, hi = 1e18, ans = 1e18;
    while (lo <= hi)
    {
        ll mid = (lo + hi) / 2;
        double c = (total + mid) / (double)(n * 2.0);
        int pos = lower_bound(a.begin(), a.end(), c) - a.begin();

        if (pos > n / 2) 
        {
            ans = min(mid, ans);
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    double c = (total + ans) / (double)(n * 2.0);
    int pos = lower_bound(a.begin(), a.end(), c) - a.begin();

    if (pos > n / 2 && n > 2) 
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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
