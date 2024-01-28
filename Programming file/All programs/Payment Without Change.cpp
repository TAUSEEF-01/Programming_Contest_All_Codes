//accepted
//https://codeforces.com/contest/1256/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    ll a, b, n, s;
    cin>>a>>b>>n>>s;
    if(s-a*n>=0) 
    {
        if(s-a*n-b<=0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(s-a*n<0) 
    {

        if(s-n*(s/n)<=b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
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
