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
        string a;
        cin>> a;
        int flag =0, ctr =0;
        vector<int> x(200, 0);
        for(int i=0; i<n; ++i)
        {
            for(int j=i+1; j<n; j+=2)
            {
                if(a[j] == a[i])
                flag++;
            }
        }
        if(flag == 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}