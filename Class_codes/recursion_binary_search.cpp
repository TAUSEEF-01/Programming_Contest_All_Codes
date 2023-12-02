#include <stdio.h>
#include <math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpll(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)
const ll mod = 1e9 + 7;

int strlen(int a[])
{
    int ctr = 0;
    for (int i = 0;; i++)
    {
        if (a[i] == '\0')
            return ctr;
        ctr++;
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int ans = -1;
void binary_search(int a[], int n, int hi, int lo, int sz)
{
    int mid = (hi + lo) / 2;

    if (lo >= hi)
    {
        return;
    }
    if (a[mid] == n)
    {
        ans = mid;
        return;
    }

    if (a[mid] < n)
    {
        binary_search(a, n, hi, mid + 1, sz);
    }
    else
    {
        binary_search(a, n, mid, lo, sz);
    }
}

int main()
{
    int a[] = {2, 3, 4, 6, 7, 8, 9, 10, 5, 1, '\0'};
    int sz = strlen(a);
    sort(a, sz);

    int n;
    inpi(n);

    int hi = sz, lo = 0;
    binary_search(a, n, hi, lo, sz);
    printf("%d\n", ans);

    return 0;
}
