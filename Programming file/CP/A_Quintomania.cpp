#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (i > 0)
        {
            if (!((abs(a[i] - a[i - 1]) == 5) || (abs(a[i] - a[i - 1]) == 7)))
            {
                cout << "NO\n";
                return;
            }
        }
    }

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
