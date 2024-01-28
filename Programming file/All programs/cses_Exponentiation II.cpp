#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+7;

/* 

euler totient function/theorem states that --> a^b is congruent to (a^(b % phi(m)) % m) 
where phi(m) represents the number of co-primes of m.
if m is prime then phi(m) = m-1 because m has m-1 numbers that are co-prime with m if m be a prime number

// using etf we can calculate the congruence value of a^b mod m, not the actual value of a^b // 

*/


/*

using euler theorem what we really calculate for a^(b^c) is the congruent value which is--> 
a^((b^c) % phi(m)) % m
ifm is prime then -->
a^((b^c) % (m-1)) % m and --> we calculate (b^c) % phi(m) --> using binary exponentiation where we take
mod phi(m) for every time we multiply in the binary exponentiation fnc

*/


ll binExpo(ll x, ll y, ll m)
{
    ll ans = 1;
    while(y > 0)
    {
        if(y & 1)
        {
            ans = (ans * x) % m;
        }
        x = (x * x) % m;
        y >>= 1; 
    }
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        cout<<binExpo(a, binExpo(b, c, N-1), N)<<endl; //here phi(N)=N-1 for calculating (b^c) % phi(N) as N is prime
    }

    return 0;
}





/* 

euler totient function/theorem states that --> a^b is congruent to (a^(b % phi(m)) % m) 
where phi(m) represents the number of co-primes of m.
if m is prime then phi(m) = m-1 because m has m-1 numbers that are co-prime with m if m be a prime number

// using etf we can calculate the congruence value of a^b mod m, not the actual value of a^b // 

*/


/*

using euler theorem what we really calculate for a^(b^c) is the congruent value which is--> 
a^((b^c) % phi(m)) % m
ifm is prime then -->
a^((b^c) % (m-1)) % m and --> we calculate (b^c) % phi(m) --> using binary exponentiation where we take
mod phi(m) for every time we multiply in the binary exponentiation fnc

*/