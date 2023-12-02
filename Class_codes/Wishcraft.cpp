#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


void solve()
{
    int n, p, q;
    cin>>n>>p>>q;

    vector<ll> a(n), all;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end(), greater<ll>());
    
    for(int i=1; i<n-1; i++)
    {
        all.push_back(abs(a[i]));
    }
    
    sort(all.begin(), all.end(), greater<ll>());
    
    ans=a[0]-a[n-1];
    for(int i=0; i<min(p+q, n-2); i++)
    {
        ans+=abs(all[i]);
    }
    cout<<ans<<endl;
}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    int t=1;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

