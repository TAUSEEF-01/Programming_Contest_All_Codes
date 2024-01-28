#include <stdio.h>
#include <stdlib.h>

// Submission successful

int main()
{
    int n, b, c, d, e, f, p, q, x, y, z, sum;


   scanf("%d", &n);
   if(10000 <= n && n <= 99999)
   {
    x= n%10 ;
    b= n/10 ;
    y= b%10 ;
    d= b/10 ;
    z= d%10 ;
    e= d/10 ;
    p= e%10 ;
    f= e/10 ;
    q= f%10 ;
    sum = x+y+z+p+q;
       printf("%d", sum);
   }
   else printf("error");

    return 0;
}
