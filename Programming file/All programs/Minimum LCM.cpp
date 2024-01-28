//accepted
//https://codeforces.com/contest/1765/problem/M


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void num_theory()
{
    ll n;
    cin>>n;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<n/i<<' '<<n-n/i<<endl;
            return;
        }
    }
    cout<<1<<' '<<n-1<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        num_theory();
    }

    return 0;
}
