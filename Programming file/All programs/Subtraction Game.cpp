//accepted
//https://codeforces.com/contest/1844/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a, b);
    int mx=max(a, b);
    if(mn>1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<mx+1<<endl;
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
