// accepted
// https://codeforces.com/gym/104459/problem/F

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N = 1e9 + 7;
const double pi = acos(-1);

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll ans = sum % n, rem = sum % n;
    sum -= (sum % n);

    if (sum == 0)
    {
        cout << ans << endl;
        return;
    }

    ll avg = sum / n;
    ll give = 0, take = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > avg)
        {
            give += (a[i] - avg);
        }
        else
        {
            take += (avg - a[i]);
        }
    }

    cout << ans + abs(give - rem) << endl;
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
