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
        vector<ll> a(n);
        ll mark = 0, sum = 0, l = 0;
        for (int i = 0; i < n; ++i)
        {
            ll p;
            cin >> p;

            if (l == 0 && p == 0)
            {
                continue;
            }
            else if (p != 0)
            {
                a[l++] = p;
            }
            else if (p == 0)
            {
                sort(a.begin(), a.end() - n + l);
                sum += a[l - 1];
                a[l - 1] = 0;
            }
        }

        cout << sum << endl;
    }

    return 0;
}














/*


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
        vector<ll> a(n);
        ll mark = 0, sum = 0, l = 0;
        for (int i = 0; i < n; ++i)
        {
            ll p;
            cin >> p;

            if (l == 0 && p == 0)
            {
                continue;
            }
            else if (p != 0)
            {
                a[l++] = p;
            }
            else if (p == 0)
            {
                ll s = a[0], mark = 0;
                for(int j = 0; j < l; j++)
                {
                    s = max(s, a[j]);
                    if(a[j] == s)
                    {
                        mark = j;
                    }
                }
                sum += s;
                a[mark] = 0;
            }
        }

        cout << sum << endl;
    }

    return 0;
}

*/























