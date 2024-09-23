// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    ll n, k;
    cin >> n >> k;

    ll p = max(0LL, n - k);
    ll t = n * (n + 1) / 2 - p * (p + 1) / 2;

    if (t % 2)
        cout << "NO\n";
    else
        cout << "YES\n";
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
