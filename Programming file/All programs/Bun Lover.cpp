//accepted
//https://codeforces.com/contest/1822/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin>>n;
        if(n%2!=0)
        cout<<n*n+n+n+2<<endl;
        else
        cout<<n*n+n+n+2<<endl;

    }
    return 0;
}

