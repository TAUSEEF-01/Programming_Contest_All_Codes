#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                continue;
            if (i < j && a[i] > a[j])
                cnt++;
            else if (i > j && a[i] < a[j])
                cnt++;
        }
        ans = min(ans, cnt);
    }

    cout << ans << endl;
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
