// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    int lo = 2, hi = 999;
    int cnt = 10;
    int mid = (lo + hi) / 2;

    while (cnt--)
    {
        cout << "? " << mid << " " << mid + 1 << endl;

        int x;
        cin >> x;

        if (mid * (mid + 2) == x)
        {
            cout << "! " << mid + 1 << endl;
            return;
        }

        if ((mid + 1) * (mid + 2) == x)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }

        mid = (lo + hi) / 2;
    }
    
    cout << -1 << endl;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        answer();
    }

    return 0;
}
