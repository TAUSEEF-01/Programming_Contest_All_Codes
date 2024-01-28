//accepted
//https://codeforces.com/contest/1853/problem/A

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
    vector<ll> a(n);
    int flag=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0 && a[i-1]>a[i])
        {
            flag++;
        }
    }
    if(flag)
    {
        cout<<0<<endl;
        return;
    }
    ll mini=INT_MAX;
    for(int i=0; i<n-1; i++)
    {
        mini=min(mini, abs(a[i+1]-a[i]));
    }
    if(mini&1)
    cout<<(mini+1)/2<<endl;
    else
    cout<<mini/2+1<<endl;
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
