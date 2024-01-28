#include<stdio.h>

int main()
{
    int n1, n2;
    printf("Enter range: ");
    scanf("%d%d", &n1, &n2);
    for(int i=n1; i<=n2; i++)
    {
        int c=0;

        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                c++;
            }

        }

       if(c==0)
       {
           printf("%d\n", i);
       }

    }

    return 0;
}
