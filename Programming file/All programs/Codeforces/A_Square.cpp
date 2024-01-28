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
    int a, b, c, d, e, f, g, h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;

    int ans;
    // if((c-a)*(c-a)+(d-b)*(d-b)==(e-g)*(e-g)+(f-h)*(f-h))
    // {
        // ans=(c-a)*(c-a)+(d-b)*(d-b);
        // cout<<ans<<endl;
    // }
    // else
    // {
    //     ans=(e-a)*(e-a)+(f-b)*(f-b);
    //     cout<<ans/2<<endl;
    // }


    if(a==c)
    {
        ans=(b-d)*(b-d);
        cout<<ans<<endl;
    }
    else if(a==e)
    {
        ans=(f-b)*(f-b);
        cout<<ans<<endl;
    }
    else if(a==g)
    {
        ans=(h-b)*(h-b);
        cout<<ans<<endl;
    }    
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
