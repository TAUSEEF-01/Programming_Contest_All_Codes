#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void swapd(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(double arr[], int rolls[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapd(&arr[j], &arr[j + 1]);
                swap(&rolls[j], &rolls[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int n, k;
    scanf("%d", &n);
    double a[n];
    int rolls[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
        rolls[i] = i + 1;
    }

    scanf("%d", &k);
    bubbleSort(a, rolls, n);
    printf("%d\n", rolls[k - 1]);
}