// accepted
// https://cses.fi/problemset/task/1071/

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
    ll r, c;
    cin>>r>>c;

    if(r==1 && c==1) 
    {
        cout<<1<<endl;
        return;
    }

    ll ans=0;
    if(c>r)
    {
        if(c&1)
        {
            ans=c*c;
            ans-= r;
            ans++;
        }
        else
        {
            ans=(c-1)*(c-1)+1;
            ans+=r;
            ans--;
        }
        
    }
    else if(c<r)
    {
        if(r%2==0)
        {
            ans=r*r;
            ans-= c;
            ans++;
        }
        else
        {
            ans=(r-1)*(r-1)+1;
            ans+=c;
            ans--;
        }
    }
    else
    {
        ans=c*c-(c-1);
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


