//accepted
//https://codeforces.com/contest/1850/problem/D

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
    ll n, k;
    cin>>n>>k;

    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vsort(a);
    int mark=0, mk=0;
    ll maxi=-INT_MAX;
    while(1)
    {
        ll ctr=0;
        for(int i=mark; i<n-1; i++)
        {
            mk=i;
            if(abs(a[i+1]-a[i])<=k)
            {
                ctr++;
            }
            else
            {
                break;
            }
        }
        maxi=max(maxi, ctr);
        mark=mk+1;
        if(mark>=n-1)
        {
            break;
        }
    }
    cout<<n-maxi-1<<endl;
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