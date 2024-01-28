//accepted
//https://codeforces.com/contest/1549/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    a='!'+a+'!';
    b='!'+b+'!';
    int ctr=0;
    for(int i=0; i<n+1; i++)
    {
        if(a[i]=='0' && b[i]=='1')
        {
            ctr++;
        }
        else
        {
            if(b[i]=='1' && a[i-1]=='1')
            {
                ctr++;
                a[i-1]='!';
            }
            else if(b[i]=='1' && a[i+1]=='1')
            {
                ctr++;
                a[i+1]='!';
            }
        }
    }
    cout<<ctr<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0;
}
