//accepted
//https://codeforces.com/contest/1829/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a, b;
    b="codeforces";
    cin>>a;
    int ctr=0;
    for(int i=0; i<b.size(); i++)
    {
        if(a[i]!=b[i])
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

