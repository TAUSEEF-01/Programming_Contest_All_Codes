#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();

    if (n > m)
        swap(n, m);

    // cout << n << ' ' << m << ' ';

    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            break;
        pos = i;
    }

    if (pos != -1)
    {
        cout << pos + n + m - 2 * pos << endl;
    }
    else
    {
        cout << n + m << endl;
    }
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
