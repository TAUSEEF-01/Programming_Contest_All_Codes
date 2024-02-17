// accepted
// https://codeforces.com/contest/1829/problem/F

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    int cnt[n + 1] = {0};

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        cnt[x]++;
        cnt[y]++;
    }

    int xy = 0;
    for (int i = 0; i <= n; i++)
    {
        if (cnt[i] == 1)
            xy++;
    }

    int x = n - 1 - xy;
    int y = xy / x;
    cout << x << ' ' << y << endl;
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
