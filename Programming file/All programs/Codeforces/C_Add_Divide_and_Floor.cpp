// accepted
// https://codeforces.com/contest/1901/problem/C

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
    ll n;
    cin>>n;
    
    vector<ll> a(n);
    for(auto &x: a) cin>>x;

    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    ll mini=vmin(a), maxi=vmax(a);

    int ctr=0;
    while(maxi!=mini)
    {
        maxi=(maxi+mini)/2;
        ctr++;
    }
    if(ctr>n) 
    {
        cout<<ctr<<endl;
    }
    else
    {
        cout<<ctr<<endl;
        while(ctr--) cout<<mini<<' ';
        cout<<endl;
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

