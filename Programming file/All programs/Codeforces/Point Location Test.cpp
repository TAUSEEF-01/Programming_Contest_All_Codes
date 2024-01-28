// accepted
// https://cses.fi/problemset/task/2189/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const double pi=acos(-1);


void solve()
{
    ll x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    ll p=y1-y2, q=x1-x2;
    if(p*x3-q*y3-p*x1+q*y1==0) cout<<"TOUCH\n";
    else if(p*x3-q*y3-p*x1+q*y1>0) cout<<"LEFT\n";
    else cout<<"RIGHT\n";
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

