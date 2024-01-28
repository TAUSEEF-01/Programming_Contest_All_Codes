/*

#include <stdio.h>

int term(int n, int a, int b, int c) {
  if(n==1)
  {
      return a;
  }
    if(n==2)
  {
      return b;
  }
    if(n==3)
  {
      return c;
  }
  return  term(n-1,a,b,c) + term(n-2,a,b,c) + term(n-3,a,b,c);
}


*/


#include <stdio.h>

int recurse(int p, int a, int b, int c) {
	int ret;
	if (p == a) {
	   ret = a;
	} else if (p == b) {
	   ret = b;
	} else if (p == c) {
	   ret = c;
	} else {
	   ret = recurse(p - 1, a, b, c) + recurse(p - 2, a, b, c) + recurse(p - 3, a, b, c);
	}
	return ret;
}

int main() {
	int p, a, b, c, nth;
	scanf("%d", &p);
	scanf("%d %d %d", &a, &b, &c);
	nth = recurse(p, a, b, c);
	printf("%d\n", nth);
	return 0;
}




/*
int sum(int n)
{
    if(n==4)
    {
    sum1= a+b+c;
    sum2= sum1+ b+c;
    sum3= sum2+ sum1+ c;
    sum4= sum3+ sum2+ sum1;
    return 1;
    }

    else
            return sum(n-3)+sum(n-4)+sum(n-5);
}

int main()
{
    int n, s, a, b, c, d,sum1, sum2, sum3, sum4;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);



    printf("%d",  sum(n));

    return 0;
} */
     //   sum1= (a/2*(2*a+ (n-1)*d)) -  (a/2*(2*a+ (n-4)*d));
    //sum2= (a/2*(2*a+ (n-2)*d)) -  (a/2*(2*a+ (n-5)*d));
    //sum3= (a/2*(2*a+ (n-3)*d)) -  (a/2*(2*a+ (n-6)*d));
   // sum2= a+(n-2)*d + sum1;
    //sumt= sum1 + sum2 + sum3;
