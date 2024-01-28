//accepted
//https://codeforces.com/contest/1849/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


void solve()
{
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n+1);
    map<ll, vector<ll>> p;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        
        p[a[i]%k].push_back(i);
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    for(int i=0; i<p[0].size(); i++)
    {
        cout<<p[0][i]<<' ';
    }
    auto endi=p.end();
    endi--;
    for(auto it=endi; it!=p.begin(); it--)
    {
        for(int i=0; i<(*it).second.size(); i++)
        {
            cout<<(*it).second[i]<<' ';
        }
    }
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
