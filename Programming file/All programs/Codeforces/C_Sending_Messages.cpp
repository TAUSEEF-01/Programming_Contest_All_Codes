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
    ll n, f, a, b;
    cin>>n>>f>>a>>b;

    vector<ll> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    if((v[0])*a>=b)
    {
        f-=b;
        // f-=a;
    }
    else
    {
        f-=(v[0])*a;
        // f-=a;
    }
    for(int i=1; i<n; i++)
    {
        if((v[i]-v[i-1])*a>=b)
        {
            f-=b;
            continue;
        }
        else
        {
            f-=(v[i]-v[i-1])*a;
            
        }
        
    }

    if(f>0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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
