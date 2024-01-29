// accepted
// https://codeforces.com/contest/1712/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mark[n + 1] = {0};
        int pos = -1;

        int num_min = a[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > num_min)
            {
                pos = i;
                break;
            }
            num_min = min(num_min, a[i]);
        }

        if (pos == -1)
        {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i <= pos; i++)
        {
            mark[a[i]] = 1;
        }

        int ans = pos;
        for (int i = pos; i < n; i++)
        {
            if (mark[a[i]] != 0)
                ans = i;
        }

        set<int> st;
        for (int i = 0; i <= ans; i++)
            st.insert(a[i]);

        cout << st.size() << endl;
    }

    return 0;
}
