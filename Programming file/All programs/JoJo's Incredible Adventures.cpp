//accepted
//https://codeforces.com/contest/1820/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long


solve()
{
    string a;
    cin>>a;
    a=a+a;
    ll ctr=0, maxi=0, c1=0, ct2=0;
    for(int i=0; i<a.size(); ++i)
    {
        if(a[i]=='1')
        {
            c1++;
        }
        if(a[i]=='1' && a[i+1]=='1')
        {
            ctr++;
        }
        else
        {
            maxi=max(ctr,maxi);
            ctr=0;
        }
    }
    maxi=max(maxi,ctr);
    if(c1==0)
    cout<<0<<endl;
    else if(c1==a.size())
    cout<<(c1/2)*(c1/2)<<endl;
    else if(maxi>0)
    {
        if(maxi%2==0)
        cout<<max(maxi*2, (maxi/2+1)*(maxi/2+1))<<endl;
        else
        cout<<max(maxi*2, ((maxi+1)/2)*((maxi+1)/2+1))<<endl;
    }
    else 
    cout<<1<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}