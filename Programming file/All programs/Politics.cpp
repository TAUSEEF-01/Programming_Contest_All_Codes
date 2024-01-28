//accepted
//https://codeforces.com/contest/1818/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n, k;
    cin>>n>>k;
    int ctr=1;
    vector<string>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<n; i++)
    {
        if(a[0]==a[i])
        ctr++;
    }
    cout<<ctr<<endl;
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