//accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; 
        vector<ll>a(n);
        for(int i=0; i<n; ++i)
        {
            cin>> a[i];
            if(a[i]==1 && i==0)
            {
                a[i]++;
                cout<<a[i]<<" ";
            }
            else if(a[i]==1 && a[i-1]%2==0 && i!=0)
            {
                a[i]+=2;
                cout<<a[i]<<" ";
            }
            else if(a[i]==1 && a[i-1]%2!=0 && i!=0)
            {
                a[i]+=1;
                cout<<a[i]<<" ";
            }
            else if(i==0 && a[i]!=1)
            {
                cout<<a[i]<<" ";
            }
            else if(i>0 && a[i]%a[i-1]==0)
            {
                a[i]++;
                cout<<a[i]<<" ";
            }
            else
            {
                cout<<a[i]<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}