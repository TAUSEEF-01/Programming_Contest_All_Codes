#include <stdio.h>
#include <math.h>
int main()
{
    double pi = 2 * acos(0.0);
    long long int h, a, b;
    scanf("%lld %lld %lld", &h, &a, &b);
    double answer = h * h * (tan((a * pi) / 180) + tan((b * pi) / 180)) / 2;
    printf("%lf\n", answer);
}