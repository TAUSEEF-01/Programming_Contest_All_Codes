//https://lightoj.com/problem/counting-triangles
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int l = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ctr = 0;
       
        for (int i = 0; i < n - 2; i++)
        {
            for (int k = i + 1; k < n - 1; k++)
            {
                for (int j = k + 1; j < n; j++)
                {
                    if (a[i]+ a[k] > a[j])
                    {
                        ctr++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << "Case " << l++ << ": " << ctr << endl;
    }
    return 0;
}