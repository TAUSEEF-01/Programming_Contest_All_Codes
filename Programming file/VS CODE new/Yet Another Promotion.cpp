//accepted
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,m;
        cin>>a>>b>>n>>m;
        if(min(a,b)*(m+1)<=m*a)
        {
            cout<<n*min(a,b);
        }
        else
        {
            long long p=n/(m+1);
            cout<<m*a*p+(n%(m+1))*min(a,b);
        }
        cout<<endl;
    }


    return 0;
}