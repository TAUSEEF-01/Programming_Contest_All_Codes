//accepted
//https://cses.fi/problemset/task/1095

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int N=1e9+7;


//print the ans of a^b modulo 10^9+7

/* 
ll binpow(ll x, ll y)
{
    if(y==0)
    return 1;

    ll res= binpow(x, y/2);

    if(y%2==0)
    return (res * res) % N;
    else 
    return (((res * res) % N) * x) % N;
} 
*/


/* 
long long binpow(long long a, long long b) 
{
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return (res%N * res%N * a%N)%N;
    else
        return (res%N * res%N)%N;
}
*/


/* 
ll binExpo(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans%N * a%N) %N;
        }
        a=(a%N * a%N) %N;
        b >>=1;
    }
    return ans;
}
*/

ll binExpo(ll x, ll y)
{
    ll ans=1;
    while(y > 0)
    {
        if(y & 1)
        {
            ans= (ans * x) % N;  // x^3, x^5, ..... odd power 
        }
        x= (x * x) % N;  // x^2, x^4, x^8, .......... even power
        y >>= 1; // 4 --> 100 the left most bit is set for which we will get ans in which the power of x is odd,
                 // thus going to get the result which we will return   
                 /* y>>=1 means we run loop for log(y)  times*/
    }
    return ans;
}


/* 
//if a and b are very big numbers close to 10^18 then we use binary multiply fnc

const ll MOD=1e18+7;

ll binary_multiply(ll x, ll y)
{
    ll ans= 0;

    while(y > 0)
    {
        if(y & 1)
        {
            ans= (ans + x) % MOD;
        }
        x= (x + x) % MOD;

        y >>= 1;
    }
    return ans;
}

ll binExpo_multiply(ll x, ll y)
{
    ll ans=1;
    while(y > 0)
    {
        if(y & 1)
        {
            ans= binary_multiply(ans, x);  // x^3, x^5, ..... odd power 
        }
        x= binary_multiply(x, x); // x^2, x^4, x^8, .......... even power
        y >>= 1;                        // 4 --> 100 the left most bit is set for which we will get ans in which the power of x is odd,
                                        // thus going to get the result which we will return   
                                        // y>>=1 means we run loop for log(y)  times 
    }
    return ans;
}
 
*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n; 
    cin>>n;
    while(n--)
    {
        ll x, y;
        cin>>x>>y;
        // cout<<binpow(x, y)<<endl;
        cout<<binExpo(x, y)<<endl;
        // cout<<binExpo_multiply(x, y)<<endl;
    }

    return 0;
}








