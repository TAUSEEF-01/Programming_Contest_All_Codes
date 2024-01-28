// accepted
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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        vector<int> x(250);
        for (int i = 0; i < n; ++i)
        {
            x[a[i]]++;
        }
        int sum = 0, diff = 0;
        for (int i = 0; i < 26; ++i)
        {
            sum += min(x['a' + i], x['A' + i]);
            diff = abs(x['a' + i] - x['A' + i]) / 2;
            if (k > 0 && diff != 0) 
            {
                if (diff <= k)
                {
                    sum += diff;
                    k -= diff;
                }
                else if (k < diff)
                {
                    sum += k;
                    k = 0;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}