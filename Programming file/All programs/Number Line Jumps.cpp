#include<stdio.h>
#include<math.h>

int main()
{
    int x1,v1,x2,v2;
    scanf("%d%d%d%d", &x1, &v1, &x2, &v2);
    if((v1==v2 && x1!=x2) || (x1<x2 && v1<=v2) || (x2<x1 && v2<=v1) || (((int)(abs(x1-x2))%(int)(abs(v1-v2)))!=0))
    printf("NO\n");
    else 
    printf("YES\n");

    return 0;
}