#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100000];
    char sum;
    scanf("%d" , &num);
    sum= num[0]+num[1]+num[2]+num[3]+num[4];
    printf("%d",  sum);

    return 0;
}

