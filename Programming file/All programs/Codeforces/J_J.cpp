#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
const ll MOD = 1000000007;
unordered_map<ll,ll> Fib;

//https://artofproblemsolving.com/wiki/index.php/Binet%27s_Formula
//https://codeforces.com/blog/entry/18292
 
ll fib(ll n) //if(N == 0) cout<< 0 << "\n"; --> must mention this condition
{
    if(n<2) return 1;
    if(Fib.find(n) != Fib.end()) return Fib[n];
    Fib[n] = (((fib((n+1) / 2)*fib(n/2)) % MOD + (fib((n-1) / 2)*fib((n-2) / 2)) % MOD)) % MOD;
    return Fib[n];
}
 
int main()
{
    ll N;
    cin >> N;
    if(N == 0) cout<< 0 << "\n";
    else cout << fib(N-1) % MOD << "\n";
}
