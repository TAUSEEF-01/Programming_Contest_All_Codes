//accepted
//https://codeforces.com/contest/1371/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void Magical_Sticks()
{
    double n; cin>> n;
    cout<<(ll)ceil(n/2)<<endl; //ans --> (n+1)/2
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        Magical_Sticks();
    }

    return 0;
}
