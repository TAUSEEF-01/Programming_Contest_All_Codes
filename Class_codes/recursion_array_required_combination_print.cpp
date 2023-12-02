#include <stdio.h>
#include <math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpll(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)

int t, n;

void printSubarray(int s_array[], int main_array[], int array_size, int at)
{
    if (array_size == n)
    {
        for (int i = 0; i < array_size; i++)
        {
            printf("%d ", s_array[i]);
        }
        printf("\n");
        return;
    }
    if (at >= t)
    {
        return;
    }

    // Case 1:
    s_array[array_size] = main_array[at];
    printSubarray(s_array, main_array, array_size + 1, at + 1);

    // Case 2:
    printSubarray(s_array, main_array, array_size, at + 1);
}

int main()
{
    inpi(t);
    inpi(n);

    int arr[t];
    for (int i = 0; i < t; i++)
    {
        inpi(arr[i]);
    }

    int combination_store[t] = {};
    printSubarray(combination_store, arr, 0, 0);

    return 0;
}