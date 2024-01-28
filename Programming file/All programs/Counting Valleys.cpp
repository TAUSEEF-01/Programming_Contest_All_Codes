#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];

    for(int i=0; i<n; i++)
    {
        scanf(" %c", &arr[i]);
    }
    int ctr=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='D') ctr++;
        else ctr--;
        if(arr[i]=='U' && ctr==0)
        ans++;
    }

    printf("%d\n", ans);

    return 0;
}