#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const ll M=998244353;
const double pi=acos(-1);


void solve()
{
    ll x, n;
    cin>>x>>n;

    ll ans=1, fact=1;
    for(int i=0; i<n; i++)
    {
        ans=(ans*2LL)%M;
        fact=(fact*(i+1))%M;
    }
    // cout<<ans<<' '<<fact<<endl;
    ans-=2;
    // cout<<fact<<endl;
    cout<<(ans*fact)%M<<endl;
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
