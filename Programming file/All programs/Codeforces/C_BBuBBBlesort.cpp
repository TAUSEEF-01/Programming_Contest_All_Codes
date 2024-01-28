//accepted
//https://atcoder.jp/contests/agc003/tasks/agc003_c

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
    ll n; cin>>n;
    vector<ll> a(n);
    multiset<ll> s1, s2;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i&1) s1.insert(a[i]);
    }
    vsort(a);
    for(int i=0; i<n; i++)
    {
        if(i&1) s2.insert(a[i]);
    }
    int ans=0;
    for(auto &x: s2) 
    {
        if(s1.count(x)==0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;

    while(t--)
    {
        solve();
    }

    return 0;
}
