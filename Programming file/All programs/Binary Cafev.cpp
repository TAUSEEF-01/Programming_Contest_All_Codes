//accepted
//https://codeforces.com/contest/1840/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    ll n,k;
    cin>>n>>k;
    if(log2(n)<k)
    {
        cout<<n+1<<endl;
    }
    else
    {
        cout<<(ll)(pow(2,k))<<endl;
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