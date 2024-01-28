// accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin>>n;
        vector<int>a(n);
        int ctr =0;
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
            if(a[i]==1)
            ctr++;
        }
        sort(a.begin(), a.end());
        int flag =0;
        for(int i= n-1; i>=ctr; i--)
        {
            ll p=a[i];
            int mark=0;
            for(int j=i-1; j>=0; j--)
            {
                p -= a[j];
                if(p==0)
                {
                    mark++;
                    break;
                }
                else if(p<0)
                {
                    p+=a[j];
                }
            }
            if(mark == 0)
            {
                flag++;
                break;
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