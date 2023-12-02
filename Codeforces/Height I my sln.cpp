#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)



void solve()
{
    int n;
    inpi(n);

    double a[n];
    int pos[10007];
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &a[i]);
        pos[i]=i+1;
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                double temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                int roll_temp=pos[j];
                pos[j]=pos[j+1];
                pos[j+1]=roll_temp;
            }
        }
    }

    int k;
    inpi(k);

    printf("%d\n", pos[k-1]);
}


int main()
{
    
    solve();

    return 0;
}