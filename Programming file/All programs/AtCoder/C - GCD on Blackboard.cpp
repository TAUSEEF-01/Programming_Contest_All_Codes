//accepted
//https://atcoder.jp/contests/abc125/tasks/abc125_c


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
    ll n; 
    cin>>n;

    vector<ll> a(n+1), pref(n+2, 0), suf(n+2, 0);
    
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    suf[n+1]=0;
    pref[0]=0;
    ll GCD=0;
    for(int i=n; i>0; i--)
    {
        GCD=__gcd(GCD, a[i]);
        suf[i]=GCD;
    }

    GCD=0;
    for(int i=1; i<=n; i++)
    {
        GCD=__gcd(GCD, a[i]);
        pref[i]=GCD;
    }

    ll ans=1;
    for(int i=1; i<=n; i++)
    {
        ans=max(ans, __gcd(pref[i-1], suf[i+1]));
    }
    cout<<ans<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}
