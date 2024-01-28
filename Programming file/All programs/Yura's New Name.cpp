//accepted
//https://codeforces.com/contest/1820/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a;
    cin>>a;
    if(a.size()==1 && a[0]=='^')
    {
        cout<<1<<endl;
        return;
    }
    int ctr=0;
    if(a[0]=='_')
    ctr++;
    for(int i=0; i<a.size()-1; ++i)
    {
        if(a[i]=='_' && a[i+1]=='_')
        ctr++;
    }
    if(a[a.size()-1]=='_')
    ctr++;
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
