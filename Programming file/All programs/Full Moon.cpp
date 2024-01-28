//accepted
//https://atcoder.jp/contests/abc318/tasks/abc318_a

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
    int n, m, p;
    cin>>n>>m>>p;

    int x=m, cnt=0, ans=0;
    while(x<=n)
    {
        ans++;
        x+=p*cnt++;
    }
    if(m>n) 
    cout<<0<<endl;
    else
    cout<<(n-m)/p+1<<endl;
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
