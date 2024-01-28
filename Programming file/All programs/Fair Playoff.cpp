//accepted
//https://codeforces.com/contest/1535/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void Fair_Playoff()
{
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    if((a[3]>a[0] && a[3]>a[1] && a[2]>a[0] && a[2]>a[1]) || ((a[3]<a[0] && a[3]<a[1] && a[2]<a[0] && a[2]<a[1])))
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        Fair_Playoff();
    }

    return 0;
}
