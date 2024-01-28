// accepted
// https://vjudge.net/problem/CSES-1084/origin

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
    ll n, m, k;
    cin>>n>>m>>k;
    vector<ll> a(n), b(m);

    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
    }
    vsort(a);

    ll ans=0;
    for(int i=0; i<m; i++) 
    {
        cin>>b[i];
    }

    vsort(b);
    int mark=0;

    for(int i=0; i<n; i++)
    {
        for(int j=mark; j<m; j++)
        {
            mark=j;
            if(abs(a[i]-b[j])<=k)
            {
                ans++;
                mark++;
                break;
            }
            if(a[i]<b[j]) break;
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
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

