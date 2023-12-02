#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a;
    cin >> a;
    int n = a.size();
    if (n & 1)
    {
        cout << "NO\n";
        return;
    }

    if (a.substr(0, n / 2) == a.substr(n / 2, n))
        cout << "YES\n";
    else
        cout << "NO\n";
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
        solve();
    }

    return 0;
}