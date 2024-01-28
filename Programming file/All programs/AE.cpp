#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    unordered_map<ll, vector<int>> a;    
    for(int i=1; i<=n; i++) 
    {
        ll x;
        cin>>x;
        a[x].push_back(i);    
    }
    ll ans=0;
    for(auto &x: a)
    {
        for(int i=0; i<x.second.size(); i++)
        {
            ans+=n-x.second[i]-(x.second.size()-i-1);
        }
    }
    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();


    return 0;
}
