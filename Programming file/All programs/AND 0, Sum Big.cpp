//accepted
//https://codeforces.com/contest/1514/problem/B

//sln watched

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+7;


void slv()
{
    int n, k;
    cin>>n>>k;
    ll ans=n;
    for(int i=1; i<k; i++)
    {
        ans= (ans * n) % N;
    }
    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        slv();
    }

    return 0;
}