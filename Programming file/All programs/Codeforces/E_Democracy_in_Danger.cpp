#include <stdio.h>
#include <math.h>
#define ll long long

ll strlen(char a[])
{
    int ctr = 0;
    for (int i = 0;; i++)
    {
        if (a[i] == '\0')
            return ctr;
        ctr++;
    }
}


void solve()
{
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int ans=0;
    for(int i=0; i<=n/2; i++)
    {
        ans+=a[i]/2+1;
    }
    printf("%d\n", ans);
}

int main()
{

    solve();

    return 0;
}
