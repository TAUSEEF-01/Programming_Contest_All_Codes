//accepted
//https://codeforces.com/contest/1797/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long


solve()
{
    ll n, k;
    cin>>n>>k;
    ll a[n+1][n+1];

    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
        {
            cin>>a[i][j];
        }
    }
    ll ctr=0;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=n; ++j)
        {
            if(a[i][j]!=a[n-i+1][n-j+1])
            {
                ctr++;
            }
        }
    }

    if(n==1)
    {
        cout<<"YES\n";
    }
    else if((ctr/2)<=k)
    {
        if(((k-(ctr/2))%2==0) || (n%2!=0 && (k-(ctr/2))%2!=0))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    else
    {
        cout<<"NO\n";
    }
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