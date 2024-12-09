#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // if (i > 0 && abs(a[i] - a[i - 1]) == 1 && a[i] != i + 1 && a[i - 1] != i)
        if (abs(a[i] - (i + 1)) > 1)
            flag = 0;
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (a[i] - a[i + 1] >= 2)
    //     {
    //         flag = 0;
    //         break;
    //     }
    // }

    // if (is_sorted(a.begin(), a.end()))
    //     flag = 1;

    // for(int i=0; i<n-1; i++)
    // {
    //     if()
    // }

    cout << (flag ? "YES\n" : "NO\n");
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
