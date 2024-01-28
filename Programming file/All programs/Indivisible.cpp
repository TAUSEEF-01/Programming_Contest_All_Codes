//accepted
//https://codeforces.com/contest/1818/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n%2!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=n-1, j=n; i>=1, j>0; i-=2, j-=2)
        {
            cout<<i<<' '<<j<<' ';
        }
        cout<<endl;
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