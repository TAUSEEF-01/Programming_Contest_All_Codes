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
    ll s, d, k;
    cin>>s>>d>>k;
    ll b=s*2+d*2, p=s+d*2, c=s+d*2;
    if(b>=k+1 && p>=k && c>=k) cout<<"YES\n";
    else cout<<"NO\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
}
