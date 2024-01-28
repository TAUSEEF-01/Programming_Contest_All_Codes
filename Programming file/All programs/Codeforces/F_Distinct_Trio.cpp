// accepted
// https://atcoder.jp/contests/abc252/tasks/abc252_d?lang=en

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

    vector<ll> a(n), ctr(200005, 0);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        ctr[a[i]]++;
    }

    for(int i=1; i<200005; i++)
    {
        ctr[i]+=ctr[i-1];
    }

    ll ans=0;
    for(auto &x: a)
    {
        ans+= (n-ctr[x]) * (ctr[x-1]) * 1LL;
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
