//accepted
//dekhe kora
//https://codeforces.com/contest/1829/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool rec(int n, int m)
{
    if(n==m)
    return true;
    else if(n%3!=0)
    return false;
    else
    return rec(n/3, m) || rec(2*n/3, m);
}

void solve()
{
    int n,m;
    cin>>n>>m;

    if(rec(n,m))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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