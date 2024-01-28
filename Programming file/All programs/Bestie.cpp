//accepted
//https://codeforces.com/contest/1732/problem/A

/*
Let's make an important observation: gcd(n−1,n)=1 for any value of n. 
Moreover, choosing i=n−1 and i=n are the cheapest operations. From this we can conclude that the answer is ≤3.

Let g be the gcd of all numbers in the array. Then we have the following cases:

1. If g=1, then the operation can be omitted and the answer is 0,
2. Otherwise, let's try the cheapest operation i=n. If gcd(g,n)=1, then the answer is 1.
3. Otherwise, let's try the next cheapest operation, ie i=n−1. If gcd(g,n−1)=1, then the answer is 2.
4. Otherwise, the answer is 3, since gcd(g,n−1,n)=1.
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void Bestie()
{
    ll n; cin>>n;

    ll GCD=0;
    for(ll i=1; i<=n; i++)
    {
        ll num; cin>>num;
        GCD=__gcd(num, GCD);
    }

    if(GCD==1) cout<<0<<endl;
    else if(__gcd(GCD, n)==1) cout<<1<<endl;    
    else if(__gcd(GCD, n-1)==1) cout<<2<<endl;
    else cout<<3<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        Bestie();
    }

    return 0;
}