//accepted
//https://codeforces.com/contest/1374/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        if(n%x==y)
        {
            cout<<n;
        }
        else if(n%x>y)
        {
            cout<<n-(n%x-y);
        }
        else
        {
            cout<<n+(y-n%x)-x;
        }
        cout<<endl;
    }
    return 0;
}