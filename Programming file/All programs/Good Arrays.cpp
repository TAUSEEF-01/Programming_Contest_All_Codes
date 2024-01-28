//accepted
//https://codeforces.com/contest/1856/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    ll ctr=0;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        if(x==1) 
        {
            ctr++;
            continue;
        }
        
        x-=2;
        sum+=x;
    }

    if(n==ctr || n==1) cout<<"NO\n";
    else if(ctr==0) cout<<"YES\n";
    else if(n-ctr>=ctr) cout<<"YES\n";
    else 
    {
        int p=n-(n-ctr)*2;
        if(sum>=p) cout<<"YES\n";
        else cout<<"NO\n";
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}