#include <stdio.h>
#include <stdlib.h>
int sum(int n, int a, int b, int c);
int main()
{
    int n, a, b, c;
    scanf("%d%d%d%d",  &n,&a,&b,&c);
    int sumt= sum(n,a,b,c);
    printf("%d", sumt);
    return 0;
}

int sum(int n, int a, int b, int c)
{
    if(n==4){
        return a+b+c;
    }
    if(n==3){
        return c;
    }
    if(n==2){
        return b;
    }
    if(n==1){
        return a;
    }
    int sumx= sum(n-1,a,b,c) ;
    int sumy= sum(n-2,a,b,c);
    int sumz= sum(n-3,a,b,c);
    int sumn= sumx+ sumy+sumz;
    return sumn;

}
