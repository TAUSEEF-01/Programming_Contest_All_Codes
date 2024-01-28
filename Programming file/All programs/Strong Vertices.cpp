//accepted
//https://codeforces.com/contest/1857/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n), b(n);

    for(auto &x: a) cin>>x;
    for(auto &x: b) cin>>x;

    ll maxi=-INT_MAX;
    set<ll> pos;
    for(int i=0; i<n; i++)
    {
        maxi=max(maxi, a[i]-b[i]);
    }

    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]-b[i]==maxi)
        {
            cnt++;
            pos.insert(i+1);
        }
    }

    cout<<cnt<<endl;
    for(auto &x: pos)
    cout<<x<<' ';
    cout<<endl;
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
