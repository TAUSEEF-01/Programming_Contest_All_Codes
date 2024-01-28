#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int a[200];
    int c=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {

        cin>>a[i];
    }
    for(int j=1; j<=n; j++ )
    {

    if(a[j] >= a[k] && a[j]!=0)
    {
        c++;
    }
    
    }
    cout<< c;

    return 0;
}














/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    int count=0;
    scanf("%d", &n);
    scanf("%d", &k);
    int *num = (int *) malloc(n * sizeof (int));

    for(int i=1; i<=n; i++)
    {
        scanf("%d", (num+i));
    }

    if(num[1] <= 0)
    {
        printf("%d", num[1]);
    }
    else{
    for(int j=1; num[j]> num[k] || num[j]== num[k]; j++)
    {
        if(num[j]>= num[k])
        {   
            count++;
        }
    }
    printf("%d", count);
    }

    free(num);

    return 0;
}

*/