//accepted
//https://atcoder.jp/contests/abc312/tasks/abc312_c

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
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n), b(m);

    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

    vsort(a);
    vsort(b);

    ll hi=1e9+7, lo=1;
    ll ans=INT_MAX;
    while(hi>=lo)
    {
        ll mid= (hi+lo)/2;
        int upa=upper_bound(a.begin(), a.end(), mid) - a.begin();
        int lwb=lower_bound(b.begin(), b.end(), mid) - b.begin();

        if(m-lwb<=upa)
        {
            ans=min(ans, mid);
            hi=mid-1;
        }
        else 
        {
            lo=mid+1;
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
    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
