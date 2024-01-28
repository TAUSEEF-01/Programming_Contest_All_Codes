#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    int lift1[i], lift2[i];
    int n, a[i], b[i], c[i];
    int my_position = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
        lift1[i]= abs(a[i] - my_position);
        lift2[i]= abs(c[i] - b[i]) + abs(c[i] - my_position);
    }

    for(int i=0; i<n; i++)
    {
        if(lift1[i]<lift2[i])
        {
            printf("1\n");
        }
        else if(lift1[i]>lift2[i])
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    return 0;
}

