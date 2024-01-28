// accepted
//https://codeforces.com/contest/1798/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int am = 0, bm = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] > b[i])
            {
                int p = a[i];
                a[i] = b[i];
                b[i] = p;
            }
            am = max(a[i], am);
            bm = max(b[i], bm);
        }

        if (bm == b[n - 1] && am == a[n - 1])
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
