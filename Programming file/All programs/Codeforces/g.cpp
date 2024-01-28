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
    ll n, k;
    cin>>n>>k;

    vector<ll> a(n+1, 0);
    for(int i=1; i<=n; i++) cin>>a[i];

    vsort(a);

    ll sum=0, present=a[n], cnt=1, remain=k;
    for(int i=n-1; i>=0; i--)
    { 
        while(present>a[i] && k>0)
        {
            if(cnt<=k)
            {
                sum+= present*cnt;
                k-=cnt;
            }
            else
            {
                sum+= present*k;
                k=0;
            }
            present--;
            if(present<=0 || k<=0) break;
        }
        if(present==a[i])
        {
            cnt++;
        }
            
        if(present<=0 || k<=0) break;
    }
    
    cout<<sum<<endl;
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
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
