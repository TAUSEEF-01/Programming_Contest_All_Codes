// accepted
// https://codeforces.com/gym/100589/problem/J

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
    ll aa, bb, cc;
    cin>>aa;
    vector<ll> a(aa);
    for(int i=0; i<aa; i++)
    {
        cin>>a[i];
    }

    cin>>bb;
    vector<ll> b(bb);
    for(int i=0; i<bb; i++)
    {
        cin>>b[i];
    }

    cin>>cc;
    vector<ll> c(cc);
    for(int i=0; i<cc; i++)
    {
        cin>>c[i];
    }

    vector<ll> position(bb, 0);
    for(int i=0; i<min(bb, cc); i++)
    {
        auto it=lower_bound(c.begin()+i, c.end(), b[i]);
        if(it!=c.end())
        {
            int pos=it-c.begin();
            position[i]=cc-pos;
        }
        else
        {
            break;
        }
    }

    ll sum=0;
    for(int i=bb-1; i>=0; i--)
    {
        sum+=position[i];
        position[i]=sum;
    }

    ll ans=0;
    for(int i=0; i<min(aa, bb); i++)
    {
        auto it=lower_bound(b.begin()+i, b.end(), a[i]);
        if(it!=b.end())
        {
            int pos=it-b.begin();
            ans+=position[pos];
        }
        else
        {
            break;
        }
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
