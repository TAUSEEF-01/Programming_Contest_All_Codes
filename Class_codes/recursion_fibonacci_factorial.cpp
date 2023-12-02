#include <stdio.h>
#include <math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpll(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)
const ll mod = 1e9 + 7;

ll fib(ll n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

ll ans;
void fibo(ll n, ll a, ll b, int ctr)
{
    ll temp = (a + b) % mod;
    if (ctr == n)
    {
        ans = temp;
        return;
    }

    ctr++;
    fibo(n, temp, a, ctr);
}

ll factorial(ll n)
{
    if (n == 1 || n == 0)
        return 1;
    return (factorial(n - 1) * n) % mod;
}

int main()
{
    ll n;
    inpll(n);

    /*fibonacci: */
    // recursive approach using dp:
    // int ctr = 2;
    // fibo(n, 1, 0, ctr);
    // printf("%lld\n", ans);

    // recursive approach:
    //  printf("%lld\n", fib(n));

    // using loops:
    //  ll arr[n + 2];
    //  arr[0] = 0;
    //  arr[1] = 1;

    // for (int i = 2; i <= n; i++)
    // {
    //     arr[i] = (arr[i - 1] + arr[i - 2]) % mod;
    // }
    // printf("%lld\n", arr[n] % mod);


    /*factorial: */
    // printf("%lld\n", factorial(n));

    return 0;
}
