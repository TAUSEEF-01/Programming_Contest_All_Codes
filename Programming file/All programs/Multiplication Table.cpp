//accepted
//https://codeforces.com/contest/577/problem/A

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
    ll n, x;
    cin>>n>>x;
    if(x>n*n)
    {
        cout<<0<<endl;
        return;
    }
    int ctr=0;
    for(int i=1; i<=n; i++)
    {
        if(x%i==0 && x/i<=n) ctr++;
    }
    cout<<ctr<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();
    

    return 0;
}