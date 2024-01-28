//accepted
//https://codeforces.com/contest/598/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n, m;
    cin>>n;
    m=n;
    int p=log2(n);
    ll sum=(n+1)*n/2;
    for(int i=0; i<=p; i++)
    {
        sum-=2*(ll)pow(2,i);
        
    }
    cout<<sum<<endl;
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
