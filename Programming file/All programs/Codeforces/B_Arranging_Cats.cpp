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
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;

    int ans=0, c1=0, c2=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='1') c1++;
        if(b[i]=='1') c2++;
        // if(a[i]!=b[i]) ans++;
        if(b[i]=='1' && a[i]=='0') ans++;
    }

    // cout<<(ans+abs(c1-c2))<<endl;

    if(c1>c2)
    cout<<ans+(c1-c2)<<endl;
    else
    cout<<ans<<endl;

    // cout<<abs(c1-c2)<<endl;
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
