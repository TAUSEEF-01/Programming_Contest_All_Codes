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
    // ll a, b, c;
    // cin>>a>>b>>c;
    ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    ll p=__gcd(__gcd(a[0], a[1]), a[2]);

    // if((a+b+c)%3==0) cout<<"YES\n";
    // if((a[1]/a[0] + a[2]/a[0])/2<=3) cout<<"YES\n";
    if(a[2]%p==0 && a[1]%p==0 && a[0]%p==0 && (a[2]/p + a[1]/p + a[0]/p)-3<=3) cout<<"YES\n";
    else cout<<"NO\n";
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
