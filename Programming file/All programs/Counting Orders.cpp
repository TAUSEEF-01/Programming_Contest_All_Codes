//accepted
//https://codeforces.com/contest/1828/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a)         sort(a.begin(), a.end())
#define ub_pos(a, x)     upper_bound(a.begin(), a.end(), x) - a.begin()
#define lb_pos(a, x)     lower_bound(a.begin(), a.end(), x) - a.begin()
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n), b(n);
    ll ans=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    vsort(a);
    vsort(b);
    
    for(int i=0; i<n; i++)
    {
        ll mark=lb_pos(b, a[i])-i;
        ans=(ans*mark)%N;
    }
    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t=1;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0;
}