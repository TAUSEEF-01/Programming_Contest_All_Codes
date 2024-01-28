//accepted
//https://codeforces.com/contest/1857/problem/A

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
    int o=0, e=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0) e++;
        else o++;
    }

    if(e==1 && o==1) cout<<"NO\n";
    else if(e==0 && o%2!=0) cout<<"NO\n";
    else if(e!=0 && o%2!=0) cout<<"NO\n";
    else cout<<"YES\n";

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
