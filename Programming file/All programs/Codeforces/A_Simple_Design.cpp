#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    ll n, k; cin>>n>>k;
    
    for(ll i=n; ; i++)
    {
        ll sum=0, nn=i;
        while(nn>0)
        {
            sum+=nn%10;
            nn/=10;
        }
        if(sum%k==0)
        {
            cout<<i<<endl;
            return;
        }
    }
   
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
