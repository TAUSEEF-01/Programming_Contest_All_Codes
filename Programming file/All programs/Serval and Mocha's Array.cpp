// accepted
#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> a(n);
        int flag = 0, ans;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if(i == 0)
            {
                ans = a[i];
            }
            else if(i > 0)
            {
                ans = __gcd(a[i], ans);
            }
        }
        if(ans > n)
        {
            cout << "No\n";
        }
        else
        {
            flag = 0;
            for(int i = 1; i < n; i++)
            {
                for(int j = 0; j < i; j++)
                {
                    if( __gcd(a[i], a[j]) <= 2)
                    {
                        flag++;
                    }
                }
            }

            if(flag != 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        
    }

    return 0;
}