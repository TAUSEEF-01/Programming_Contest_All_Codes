#include <stdio.h>
#include <math.h>
#define ll long long

ll strlen(int a[])
{
    int ctr = 0;
    for (int i = 0;; i++)
    {
        if (a[i] == '\0')
            return ctr;
        ctr++;
    }
}


int prime[32007]={0};
void prime_check()
{
    prime[0]=prime[1]=1;
    for(int i=2; i<=32000; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*2; j<=32000; j+=i)
            prime[j]=1;
        }
    }
}

int prime_dif[32000]={0};
void prime_difference()
{
    int t=0, n=strlen(prime);
    for(int i=0; i<n-1; i++)
    {
        prime_dif[t++]=prime[i+1]-prime[i];
    }
}



void solve()
{
    while(1)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        if(n==0 && m==0) return;

        int sz=strlen(prime_dif);
        int mark[m]={0};
        for(int i=0; i<sz-2; i++)
        {
            if(prime_dif[i]==prime_dif[i+1])
            {
                for(int )
            }
        }
    }
}



int main()
{
    prime_check();
    prime_difference();
    solve();

    return 0;
}



// for(int i=2; i<=m; i++)
        // {
        //     // printf("%d ", prime[i]);
        //     int temp[m], l=0, flag=0;
        //     for(int j=n; j+i<=m; j++)
        //     {
        //         if(prime[j+1]==0 && prime[j]==0 && prime[j+2]==0 && flag==0 && mark[j]==0)
        //         {
        //             temp[l++]=j;
        //             flag++;
        //             // j+=(i-1);
        //         }
        //         else if(prime[j-1]==0 && prime[j]==0  && mark[j]==0)
        //         {
        //             temp[l++]=j;
        //             // j+=(i-1);
        //         }
        //         else 
        //         {
        //             if(l>2)
        //             {
        //                 for(int j=0; j<l; j++)
        //                 {
        //                     printf("%d ", temp[j]);
        //                     mark[j]++;
        //                 }
        //                 printf("\n");
        //             }
        //             // if(flag!=0)
        //             // break;
        //             // l=0;
        //             // flag=0;
        //         }
        //     }
            
        // }




// && prime[j+2*i]==0









// && flag==0)



                    // if(flag==0)
                    // {
                    //     temp[0]=j;
                    //     flag++;
                    // }
                    // temp[++l]=j;