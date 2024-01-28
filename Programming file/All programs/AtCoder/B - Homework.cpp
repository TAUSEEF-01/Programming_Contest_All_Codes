//accepted
//https://atcoder.jp/contests/abc163/tasks/abc163_b

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
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n);
    ll sum=0;
    for(auto &x: a) 
    {
        cin>>x;
        sum+=x;
    }
    if(sum<=n) cout<<n-sum<<endl;
    else cout<<-1<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}
