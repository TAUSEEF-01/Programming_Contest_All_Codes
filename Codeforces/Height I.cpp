#include<stdio.h>

int main()
{
    int n, x, i, j;
    float temp;
    int temp_roll;
    scanf("%d", &n);

    float ar1[1000];
    int roll[1000];

    for (i = 0; i < n; i++)
    {
        scanf("%f", &ar1[i]);
        roll[i] = i + 1;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ar1[j] > ar1[j + 1] || (ar1[j] == ar1[j + 1] && roll[j] > roll[j + 1]))
            {
                temp = ar1[j];
                ar1[j] = ar1[j + 1];
                ar1[j + 1] = temp;

                temp_roll = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = temp_roll;
            }
        }
    }
    scanf("%d", &x);
    if (x >= 1 && x <= n)
    {
        printf("%d\n", roll[x - 1]);
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;
}