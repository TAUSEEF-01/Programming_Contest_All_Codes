//accepted
//https://codeforces.com/contest/1476/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sus()
{
    ll n, k;
    cin>>n>>k;
    if(n%k==0)
    cout<<1<<endl;
    else if(n>k)
    cout<<2<<endl;
    else
    cout<<(ll)ceil(k/(double)n)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        sus();
    }

    return 0;
}