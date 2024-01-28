//accepted
//https://codeforces.com/contest/1839/problem/B

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
    map<ll, priority_queue<ll>> a; //using priority_queue inside map
    for(int i=0; i<n; i++)
    {
        ll x, y;
        cin>>x>>y;
        a[x].push(y);
    }
    ll sum=0;
    for(auto &p: a)
    {
        ll sz=min(p.first, (ll)p.second.size());
        for(int i=0; i<sz; i++)
        {
            sum+=p.second.top();
            p.second.pop();
        }
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
