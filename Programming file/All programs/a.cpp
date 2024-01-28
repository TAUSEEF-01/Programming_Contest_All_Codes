#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    int ctr = 0;
    ll ans = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans = 1;
        sum = 0;
        for (int j = i; j < n; j++)
        {
            ans *= a[j];
            sum += a[j];
            if (sum == ans)
                ctr++;
        }
    }
    cout << ctr << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
