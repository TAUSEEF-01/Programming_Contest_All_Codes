// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int total = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= k)
            total += a[i];
        if (a[i] == 0)
        {
            if (total)
            {
                cnt++;
                total--;
            }
        }
    }

    cout << cnt << endl;
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
