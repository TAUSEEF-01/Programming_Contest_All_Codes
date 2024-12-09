#include <bits/stdc++.h>
using namespace std;
#define ll long long

void check(string &a, int n, int x, int y, int &cnt)
{
    if (y == 1) // currently a[i] = 0
    {
        if (x - 3 >= 0)
        {
            string t = a.substr(x - 3, 4);
            if (t == "1100")
            {
                cnt--;
            }
        }
        if (x - 2 >= 0 && x + 1 < n)
        {
            string t = a.substr(x - 2, 4);
            if (t == "1100")
            {
                cnt--;
            }
        }

        a[x] = (char)(y + '0');

        if (x + 3 < n)
        {
            string t = a.substr(x, 4);
            if (t == "1100")
            {
                cnt++;
                return;
            }
        }
        if (x + 2 < n && x - 1 >= 0)
        {
            string t = a.substr(x - 1, 4);
            if (t == "1100")
            {
                cnt++;
                return;
            }
        }

        return;
    }
    else // currently a[i] = 1
    {
        if (x + 3 < n)
        {
            string t = a.substr(x, 4);
            if (t == "1100")
            {
                cnt--;
            }
        }
        if (x + 2 < n && x - 1 >= 0)
        {
            string t = a.substr(x - 1, 4);
            if (t == "1100")
            {
                cnt--;
            }
        }

        a[x] = (char)(y + '0');

        if (x - 3 >= 0)
        {
            string t = a.substr(x - 3, 4);
            if (t == "1100")
            {
                cnt++;
                return;
            }
        }
        if (x - 2 >= 0 && x + 1 < n)
        {
            string t = a.substr(x - 2, 4);
            if (t == "1100")
            {
                cnt++;
                return;
            }
        }

        return;
    }
}

void answer()
{
    string a;
    cin >> a;

    int n = a.size();

    int cnt = 0;
    for (int i = 0; i < n - 3; i++)
    {
        string temp;
        temp += a[i];
        temp += a[i + 1];
        temp += a[i + 2];
        temp += a[i + 3];

        if (temp == "1100")
        {
            cnt++;
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--;

        if (n <= 3)
        {
            cout << "NO\n";
            continue;
        }

        if (a[x] - '0' == y)
        {
            if (cnt)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
            continue;
        }

        check(a, n, x, y, cnt);

        if (cnt)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
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
