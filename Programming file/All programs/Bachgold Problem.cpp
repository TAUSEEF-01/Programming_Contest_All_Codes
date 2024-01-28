//accepted
//https://codeforces.com/contest/749/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void Bachgold_Problem()
{
    int n; cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i=0; i<n/2; i++)
        cout<<2<<' ';
        cout<<endl;
    }
    else 
    {
        cout<<n/2<<endl;
        cout<<3<<' ';
        n-=3;
        for(int i=0; i<n/2; i++)
        cout<<2<<' ';
        cout<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;

    for(int i=0; i<t; i++)
    {
        Bachgold_Problem();
    }

    return 0;
}
