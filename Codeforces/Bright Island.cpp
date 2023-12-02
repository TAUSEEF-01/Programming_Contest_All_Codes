#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)
const double pi=3.141592653589793238462643383279502884197;


void solve()
{
    double h, a, b;
    inpd(h), inpd(a), inpd(b);

    a=(pi*a)/(double)180, b=(pi*b)/(double)180;
    printf("%.6lf\n", h*h*(tan(a)+tan(b))*.5);
}


int main()
{
    
    solve();

    return 0;
}
