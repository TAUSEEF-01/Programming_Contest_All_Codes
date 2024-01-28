//accepted
//https://codeforces.com/contest/1849/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


void solve()
{
    int b, c, h;
    cin>>b>>c>>h;
    cout<<min(c+h, b-1)*2+1<<endl;
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
