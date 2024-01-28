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

    ll maxi=INT_MAX, mini=0;
    vector<ll> lol;

    while(n--)
    {
        ll a, x;
        cin>>a>>x;

        if(a==1)
        {
            mini=max(mini, x);
        }
        else if(a==2)
        {
            maxi=min(maxi, x);
        }
        else if(a==3)
        {
            lol.push_back(x);
        }
    }

    if(mini>maxi)
    {
        cout<<0<<endl;
        return;
    }
    else if(mini==maxi)
    {
        int flag=0;
        for(auto &p: lol)
        {
            if(p==mini) 
            {
                flag++;
                break;
            }
        }
        if(flag)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        return;
    }

    ll ans=maxi-mini+1;
    for(auto &p: lol)
    {
        if(p>=mini && p<=maxi) ans--;
    }

    if(ans<0) 
    cout<<0<<endl;
    else 
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
