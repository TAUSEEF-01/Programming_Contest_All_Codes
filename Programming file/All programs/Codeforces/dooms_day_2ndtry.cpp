





















#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)



int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}



ll sln_for_1(int n, int m)
{
    int x;
    scanf("%d", &x);
    int a[x];
    for(int i=0; i<x; i++) 
    {
        a[i]=0;
    }

    for(int i=0; i<m; i++) 
    {
        int p;
        scanf("%d", &p);
        a[p]=1;
    }

    ll ctr=0, ans=0;
    for(int i=0; i<x; i++)
    {
        if(a[i]==0) ctr++;
        else
        {
            ans=max(ctr, ans);
            ctr=0;
        }
    }
    ans=max(ctr, ans);

    return ans;
}






ll sln_for_2(int n, int m)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sz=max(x, y)+1;
    short int a[sz][sz];

    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz; j++)
        {
            a[i][j]=0;
        }
    }

    for(int i=0; i<m; i++)
    {
        int p, q;
        scanf("%d %d", &p, &q);
        a[p][q]=1;
    }

    ll ctr=0, ans=0;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            if(a[i][j]==0) ctr++;
            else 
            {
                ans=max(ctr, ans);
                ctr=0;
            }
        }
    }
    ans=max(ctr, ans);

    ctr=0;
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(a[j][i]==0) ctr++;
            else 
            {
                ans=max(ctr, ans);
                ctr=0;
            }
        }
    }
    ans=max(ctr, ans);

    return ans;
}




ll sln_for_3(int n, int m)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int sz=max(max(x, y), z)+1;
    short int a[sz][sz][sz];

    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz; j++)
        {
            for(int k=0; k<sz; k++)
            {
                a[i][j][k]=0;
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        int p, q, r;
        scanf("%d %d %d", &p, &q, &r);
        a[p][q][r]=1;
    }   


    ll ctr=0, ans=0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {

                if (!a[i][j][k])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
    }
    ctr = 0;
    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < z; k++)
        {
            for (int j = 0; j < y; j++)
            {

                if (!a[i][j][k])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
    }
    ctr = 0;
    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
        {
            for (int k = 0; k < z; k++)
            {

                if (!a[i][j][k])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
    }
    ctr = 0;
    for (int k = 0; k < z; k++)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {

                if (!a[i][j][k])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
    }
    ctr = 0;
    for (int j = 0; j < y; j++)
    {
        for (int k = 0; k < z; k++)
        {
            for (int i = 0; i < x; i++)
            {

                if (!a[i][j][k])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
    }
    ctr = 0;
    for (int j = 0; j < y; j++)
    {
        for (int k = 0; k < z; k++)
        {
            for (int i = 0; i < x; i++)
            {

                if (!a[i][j][k])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
    }

    return ans;
}







ll sln_for_4(int n, int m)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int sz=max(max(max(a, b), c), d)+1;
    short int arr[sz][sz][sz][sz];

    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz; j++)
        {
            for(int k=0; k<sz; k++)
            {
                for(int l=0; l<sz; l++)
                {
                    arr[i][j][k][l]=0;
                }
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        int p, q, r, s;
        scanf("%d %d %d %d", &p, &q, &r, &s);
        arr[p][q][r][s]=1;
    }


    ll ctr=0, ans=0;

    for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }

        ctr = 0;
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }


    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {
    //                 if(arr[i][j][k][l]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<b; i++)
    // {
    //     for(int j=0; j<a; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {
    //                 if(arr[j][i][k][l]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<c; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<a; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {
    //                 if(arr[k][j][i][l]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<d; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<a; l++)
    //             {
    //                 if(arr[l][j][k][i]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {
    //                 if(arr[i][k][j][l]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<d; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<b; l++)
    //             {
    //                 if(arr[i][l][k][j]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {
    //                 if(arr[i][j][l][k]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<b; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<a; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {
    //                 if(arr[j][k][i][l]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);


    // ctr=0;
    // for(int i=0; i<b; i++)
    // {
    //     for(int j=0; j<d; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<a; l++)
    //             {
    //                 if(arr[j][l][k][i]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<b; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<a; l++)
    //             {
    //                 if(arr[j][k][l][i]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);


    // ctr=0;
    // for(int i=0; i<c; i++)
    // {
    //     for(int j=0; j<a; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {
    //                 if(arr[k][i][j][l]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<c; i++)
    // {
    //     for(int j=0; j<a; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<b; l++)
    //             {
    //                 if(arr[k][i][l][j]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    

    // ctr=0;
    // for(int i=0; i<c; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<a; l++)
    //             {
    //                 if(arr[k][j][l][i]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    
    // ctr=0;
    // for(int i=0; i<c; i++)
    // {
    //     for(int j=0; j<d; j++)
    //     {
    //         for(int k=0; k<a; k++)
    //         {
    //             for(int l=0; l<b; l++)
    //             {
    //                 if(arr[k][l][i][j]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    

    // ctr=0;
    // for(int i=0; i<c; i++)
    // {
    //     for(int j=0; j<d; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<a; l++)
    //             {
    //                 if(arr[k][l][j][i]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    

    // ctr=0;
    // for(int i=0; i<d; i++)
    // {
    //     for(int j=0; j<a; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {
    //                 if(arr[l][i][j][k]==0) ctr ++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    

    // ctr=0;
    // for(int i=0; i<d; i++)
    // {
    //     for(int j=0; j<a; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<b; l++)
    //             {
    //                 if(arr[l][i][k][j]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    
    // ctr=0;
    // for(int i=0; i<d; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<a; k++)
    //         {
    //             for(int l=0; l<b; l++)
    //             {
    //                 if(arr[l][k][i][j]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<d; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<a; l++)
    //             {
    //                 if(arr[l][k][j][i]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<d; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<a; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {
    //                 if(arr[l][j][i][k]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<b; l++)
    //             {
    //                 if(arr[i][k][l][j]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<d; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {
    //                 if(arr[i][l][j][k]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    

    // ctr=0;
    // for(int i=0; i<b; i++)
    // {
    //     for(int j=0; j<a; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {
    //                 if(arr[j][i][l][k]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);


    // ctr=0;
    // for(int i=0; i<b; i++)
    // {
    //     for(int j=0; j<d; j++)
    //     {
    //         for(int k=0; k<a; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {
    //                 if(arr[j][l][i][k]==0) ctr++;
    //                 else 
    //                 {
    //                     ans=max(ctr, ans);
    //                     ctr=0;
    //                 }
    //             }                
    //         }
    //     }
    // }
    // ans=max(ctr, ans);



    return ans;
}





ll sln_for_5(int n, int m)
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int sz=max(max(max(max(a, b), c), d), e)+1;
    // sz=100;
    short int arr[sz][sz][sz][sz][sz];

    for(int i=0; i<sz; i++)
    {
        for(int j=0; j<sz; j++)
        {
            for(int k=0; k<sz; k++)
            {
                for(int l=0; l<sz; l++)
                {   
                    for(int i2=0; i2<sz; i2++)
                    {
                        arr[i][j][k][l][i2]=0;
                    }     
                }
            }
        }
    }

    for(int i=0; i<m; i++)
    {
        int p, q, r, s, t;
        scanf("%d %d %d %d %d", &p, &q, &r, &s, &t);
        arr[p][q][r][s][t]=1;
    }
    ll ctr=0, ans=0;
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int j = 0; j < b; j++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int k = 0; k < c; k++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int q = 0; q < e; q++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int q = 0; q < e; q++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int q = 0; q < e; q++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int p = 0; p < d; p++)
    {
        for (int q = 0; q < e; q++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int p = 0; p < d; p++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int p = 0; p < d; p++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int k = 0; k < c; k++)
        {
            for (int p = 0; p < d; p++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int k = 0; k < c; k++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int i = 0; i < a; i++)
                {
                    for (int j = 0; j < b; j++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }

    ctr = 0;
    for (int q = 0; q < e; q++)
    {
        for (int p = 0; p < d; p++)
        {
            for (int k = 0; k < c; k++)
            {
                for (int j = 0; j < b; j++)
                {
                    for (int i = 0; i < a; i++)
                    {
                        if (!arr[i][j][k][p][q])
                        {
                            ctr++;
                            ans = max(ctr, ans);
                        }
                        else
                        {
                            ctr = 0;
                        }
                    }
                }
            }
        }
    }
    

    // for(int p=0; p<c; p++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<e; l++)
    //             {   
    //                 for(int i=0; i<a; i++)
    //                 {
    //                     if(arr[i][j][l][p][k]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    return ans;
}


void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(n==1) printf("%lld\n", sln_for_1(n, m));
    else if(n==2) printf("%lld\n", sln_for_2(n, m));
    else if(n==3) printf("%lld\n", sln_for_3(n, m));
    else if(n==4) printf("%lld\n", sln_for_4(n, m));
    else if(n==5) printf("%lld\n", sln_for_5(n, m));
}


int main()
{

    solve();

    return 0;
}







    

    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {   
    //                 for(int p=0; p<e; p++)
    //                 {
    //                     if(arr[i][j][k][l][p]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<c; k++)
    //         {
    //             for(int l=0; l<e; l++)
    //             {   
    //                 for(int p=0; p<d; p++)
    //                 {
    //                     if(arr[i][j][k][p][l]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {   
    //                 for(int p=0; p<e; p++)
    //                 {
    //                     if(arr[i][j][l][k][p]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<e; l++)
    //             {   
    //                 for(int p=0; p<c; p++)
    //                 {
    //                     if(arr[i][j][l][p][k]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);
    

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<e; k++)
    //         {
    //             for(int l=0; l<c; l++)
    //             {   
    //                 for(int p=0; p<d; p++)
    //                 {
    //                     if(arr[i][j][p][k][l]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<b; j++)
    //     {
    //         for(int k=0; k<e; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {   
    //                 for(int p=0; p<c; p++)
    //                 {
    //                     if(arr[i][j][p][l][k]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<d; l++)
    //             {   
    //                 for(int p=0; p<e; p++)
    //                 {
    //                     if(arr[i][k][j][l][p]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);


    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<b; k++)
    //         {
    //             for(int l=0; l<e; l++)
    //             {   
    //                 for(int p=0; p<d; p++)
    //                 {
    //                     if(arr[i][k][j][p][l]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int i=0; i<a; i++)
    // {
    //     for(int j=0; j<c; j++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<b; l++)
    //             {   
    //                 for(int p=0; p<e; p++)
    //                 {
    //                     if(arr[i][k][l][j][p]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    // ctr=0;
    // for(int j=0; j<b; j++)
    // {
    //     for(int i=0; i<a; i++)
    //     {
    //         for(int k=0; k<d; k++)
    //         {
    //             for(int l=0; l<e; l++)
    //             {   
    //                 for(int p=0; p<c; p++)
    //                 {
    //                     if(arr[i][j][l][p][k]==0) ctr++;
    //                     else
    //                     {
    //                         ans=max(ctr, ans);
    //                         ctr=0;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);


    // ctr=0;



























// #include<stdio.h>
// #include<math.h>
// #define ll long long
// #define inpi(n) scanf("%d", &n)
// #define inpl(n) scanf("%lld", &n)
// #define inpc(n) scanf("%c", &n)
// #define inpd(n) scanf("%lf", &n)



// int max(int a, int b)
// {
//     if(a>b) return a;
//     else return b;
// }



// ll sln_for_1(int n, int m)
// {
//     int x;
//     scanf("%d", &x);
//     int a[x];
//     for(int i=0; i<x; i++) 
//     {
//         a[i]=0;
//     }

//     for(int i=0; i<m; i++) 
//     {
//         int p;
//         scanf("%d", &p);
//         a[p]=1;
//     }

//     ll ctr=0, ans=0;
//     for(int i=0; i<x; i++)
//     {
//         if(a[i]==0) ctr++;
//         else
//         {
//             ans=max(ctr, ans);
//             ctr=0;
//         }
//     }
//     ans=max(ctr, ans);

//     return ans;
// }






// ll sln_for_2(int n, int m)
// {
//     int x, y;
//     scanf("%d %d", &x, &y);
//     int sz=max(x, y)+1;
//     short int a[sz][sz];

//     for(int i=0; i<sz; i++)
//     {
//         for(int j=0; j<sz; j++)
//         {
//             a[i][j]=0;
//         }
//     }

//     for(int i=0; i<m; i++)
//     {
//         int p, q;
//         scanf("%d %d", &p, &q);
//         a[p][q]=1;
//     }

//     ll ctr=0, ans=0;
//     for(int i=0; i<x; i++)
//     {
//         for(int j=0; j<y; j++)
//         {
//             if(a[i][j]==0) ctr++;
//             else 
//             {
//                 ans=max(ctr, ans);
//                 ctr=0;
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<y; i++)
//     {
//         for(int j=0; j<x; j++)
//         {
//             if(a[j][i]==0) ctr++;
//             else 
//             {
//                 ans=max(ctr, ans);
//                 ctr=0;
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     return ans;
// }




// ll sln_for_3(int n, int m)
// {
//     int x, y, z;
//     scanf("%d %d %d", &x, &y, &z);

//     int sz=max(max(x, y), z)+1;
//     short int a[sz][sz][sz];

//     for(int i=0; i<sz; i++)
//     {
//         for(int j=0; j<sz; j++)
//         {
//             for(int k=0; k<sz; k++)
//             {
//                 a[i][j][k]=0;
//             }
//         }
//     }

//     for(int i=0; i<m; i++)
//     {
//         int p, q, r;
//         scanf("%d %d %d", &p, &q, &r);
//         a[p][q][r]=1;
//     }   


//     ll ctr=0, ans=0;

//     for (int i = 0; i < x; i++)
//         {
//             for (int j = 0; j < y; j++)
//             {
//                 for (int k = 0; k < z; k++)
//                 {

//                     if (!a[i][j][k])
//                     {
//                         ctr++;
//                         ans = max(ctr, ans);
//                     }
//                     else
//                         ctr = 0;
//                 }
//             }
//         }
//         ctr = 0;
//         for (int i = 0; i < x; i++)
//         {
//             for (int k = 0; k < z; k++)
//             {
//                 for (int j = 0; j < y; j++)
//                 {

//                     if (!a[i][j][k])
//                     {
//                         ctr++;
//                         ans = max(ctr, ans);
//                     }
//                     else
//                         ctr = 0;
//                 }
//             }
//         }
//         ctr = 0;
//         for (int j = 0; j < y; j++)
//         {
//             for (int i = 0; i < x; i++)
//             {
//                 for (int k = 0; k < z; k++)
//                 {

//                     if (!a[i][j][k])
//                     {
//                         ctr++;
//                         ans = max(ctr, ans);
//                     }
//                     else
//                         ctr = 0;
//                 }
//             }
//         }
//         ctr = 0;
//         for (int k = 0; k < z; k++)
//         {
//             for (int i = 0; i < x; i++)
//             {
//                 for (int j = 0; j < y; j++)
//                 {

//                     if (!a[i][j][k])
//                     {
//                         ctr++;
//                         ans = max(ctr, ans);
//                     }
//                     else
//                         ctr = 0;
//                 }
//             }
//         }
//         ctr = 0;
//         for (int j = 0; j < y; j++)
//         {
//             for (int k = 0; k < z; k++)
//             {
//                 for (int i = 0; i < x; i++)
//                 {

//                     if (!a[i][j][k])
//                     {
//                         ctr++;
//                         ans = max(ctr, ans);
//                     }
//                     else
//                         ctr = 0;
//                 }
//             }
//         }
//         ctr = 0;
//         for (int j = 0; j < y; j++)
//         {
//             for (int k = 0; k < z; k++)
//             {
//                 for (int i = 0; i < x; i++)
//                 {

//                     if (!a[i][j][k])
//                     {
//                         ctr++;
//                         ans = max(ctr, ans);
//                     }
//                     else
//                         ctr = 0;
//                 }
//             }
//         }

//     // for(int i=0; i<x; i++)
//     // {
//     //     for(int j=0; j<y; j++)
//     //     {
//     //         for(int k=0; k<z; k++)
//     //         {
//     //             if(a[i][j][k]==0) ctr++;
//     //             else 
//     //             {
//     //                 ans=max(ctr, ans);
//     //                 ctr=0;
//     //             }
//     //         }
//     //     }
//     // }
//     // ans=max(ctr, ans);


//     // ctr=0;
//     // for(int i=0; i<z; i++)
//     // {
//     //     for(int j=0; j<y; j++)
//     //     {
//     //         for(int k=0; k<x; k++)
//     //         {
//     //             if(a[k][j][i]==0) ctr++;
//     //             else 
//     //             {
//     //                 ans=max(ctr, ans);
//     //                 ctr=0;
//     //             }
//     //         }
//     //     }
//     // }
//     // ans=max(ctr, ans);

//     // ctr=0;
//     // for(int i=0; i<y; i++)
//     // {
//     //     for(int j=0; j<x; j++)
//     //     {
//     //         for(int k=0; k<z; k++)
//     //         {
//     //             if(a[j][i][k]==0) ctr++;
//     //             else 
//     //             {
//     //                 ans=max(ctr, ans);
//     //                 ctr=0;
//     //             }
//     //         }
//     //     }
//     // }
//     // ans=max(ctr, ans);


//     // ctr=0;
//     // for(int i=0; i<x; i++)
//     // {
//     //     for(int j=0; j<z; j++)
//     //     {
//     //         for(int k=0; k<y; k++)
//     //         {
//     //             if(a[i][k][j]==0) ctr++;
//     //             else 
//     //             {
//     //                 ans=max(ctr, ans);
//     //                 ctr=0;
//     //             }
//     //         }
//     //     }
//     // }
//     // ans=max(ctr, ans);






//     // /**/
//     // ctr=0;
//     // for(int i=0; i<z; i++)
//     // {
//     //     for(int j=0; j<x; j++)
//     //     {
//     //         for(int k=0; k<y; k++)
//     //         {
//     //             if(a[k][i][j]==0) ctr++;
//     //             else 
//     //             {
//     //                 ans=max(ctr, ans);
//     //                 ctr=0;
//     //             }
//     //         }
//     //     }
//     // }
//     // ans=max(ctr, ans);

//     // /**/
//     // ctr=0;
//     // for(int i=0; i<y; i++)
//     // {
//     //     for(int j=0; j<z; j++)
//     //     {
//     //         for(int k=0; k<x; k++)
//     //         {
//     //             if(a[j][k][i]==0) ctr++;
//     //             else
//     //             {
//     //                 ans=max(ctr, ans);
//     //                 ctr=0;
//     //             }
//     //         }
//     //     }
//     // }
//     // ans=max(ctr, ans);

//     return ans;
// }







// ll sln_for_4(int n, int m)
// {
//     int a, b, c, d;
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     int sz=max(max(max(a, b), c), d)+1;
//     short int arr[sz][sz][sz][sz];

//     for(int i=0; i<sz; i++)
//     {
//         for(int j=0; j<sz; j++)
//         {
//             for(int k=0; k<sz; k++)
//             {
//                 for(int l=0; l<sz; l++)
//                 {
//                     arr[i][j][k][l]=0;
//                 }
//             }
//         }
//     }

//     for(int i=0; i<m; i++)
//     {
//         int p, q, r, s;
//         scanf("%d %d %d %d", &p, &q, &r, &s);
//         arr[p][q][r][s]=1;
//     }


//     ll ctr=0, ans=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {
//                     if(arr[i][j][k][l]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<b; i++)
//     {
//         for(int j=0; j<a; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {
//                     if(arr[j][i][k][l]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<a; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {
//                     if(arr[k][j][i][l]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<d; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<a; l++)
//                 {
//                     if(arr[l][j][k][i]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {
//                     if(arr[i][k][j][l]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);
    

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<d; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<b; l++)
//                 {
//                     if(arr[i][l][k][j]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {
//                     if(arr[i][j][l][k]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<b; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<a; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {
//                     if(arr[j][k][i][l]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);


//     ctr=0;
//     for(int i=0; i<b; i++)
//     {
//         for(int j=0; j<d; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<a; l++)
//                 {
//                     if(arr[j][l][k][i]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<b; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<a; l++)
//                 {
//                     if(arr[j][k][l][i]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);


//     ctr=0;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<a; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {
//                     if(arr[k][i][j][l]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<a; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<b; l++)
//                 {
//                     if(arr[k][i][l][j]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);
    

//     ctr=0;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<a; l++)
//                 {
//                     if(arr[k][j][l][i]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);
    
//     ctr=0;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<d; j++)
//         {
//             for(int k=0; k<a; k++)
//             {
//                 for(int l=0; l<b; l++)
//                 {
//                     if(arr[k][l][i][j]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);
    

//     ctr=0;
//     for(int i=0; i<c; i++)
//     {
//         for(int j=0; j<d; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<a; l++)
//                 {
//                     if(arr[k][l][j][i]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);
    

//     ctr=0;
//     for(int i=0; i<d; i++)
//     {
//         for(int j=0; j<a; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {
//                     if(arr[l][i][j][k]==0) ctr ++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);
    

//     ctr=0;
//     for(int i=0; i<d; i++)
//     {
//         for(int j=0; j<a; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<b; l++)
//                 {
//                     if(arr[l][i][k][j]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

    
//     ctr=0;
//     for(int i=0; i<d; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<a; k++)
//             {
//                 for(int l=0; l<b; l++)
//                 {
//                     if(arr[l][k][i][j]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<d; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<a; l++)
//                 {
//                     if(arr[l][k][j][i]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<d; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<a; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {
//                     if(arr[l][j][i][k]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<b; l++)
//                 {
//                     if(arr[i][k][l][j]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<d; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {
//                     if(arr[i][l][j][k]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);
    

//     ctr=0;
//     for(int i=0; i<b; i++)
//     {
//         for(int j=0; j<a; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {
//                     if(arr[j][i][l][k]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);


//     ctr=0;
//     for(int i=0; i<b; i++)
//     {
//         for(int j=0; j<d; j++)
//         {
//             for(int k=0; k<a; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {
//                     if(arr[j][l][i][k]==0) ctr++;
//                     else 
//                     {
//                         ans=max(ctr, ans);
//                         ctr=0;
//                     }
//                 }                
//             }
//         }
//     }
//     ans=max(ctr, ans);



//     return ans;
// }





// ll sln_for_5(int n, int m)
// {
//     int a, b, c, d, e;
//     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

//     int sz=max(max(max(max(a, b), c), d), e)+1;
//     // sz=100;
//     short int arr[sz][sz][sz][sz][sz];

//     for(int i=0; i<sz; i++)
//     {
//         for(int j=0; j<sz; j++)
//         {
//             for(int k=0; k<sz; k++)
//             {
//                 for(int l=0; l<sz; l++)
//                 {   
//                     for(int i2=0; i2<sz; i2++)
//                     {
//                         arr[i][j][k][l][i2]=0;
//                     }     
//                 }
//             }
//         }
//     }

//     for(int i=0; i<m; i++)
//     {
//         int p, q, r, s, t;
//         scanf("%d %d %d %d %d", &p, &q, &r, &s, &t);
//         arr[p][q][r][s][t]=1;
//     }
//     ll ctr=0, ans=0;
    
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {   
//                     for(int p=0; p<e; p++)
//                     {
//                         if(arr[i][j][k][l][p]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<c; k++)
//             {
//                 for(int l=0; l<e; l++)
//                 {   
//                     for(int p=0; p<d; p++)
//                     {
//                         if(arr[i][j][k][p][l]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {   
//                     for(int p=0; p<e; p++)
//                     {
//                         if(arr[i][j][l][k][p]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<e; l++)
//                 {   
//                     for(int p=0; p<c; p++)
//                     {
//                         if(arr[i][j][l][p][k]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);
    

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<e; k++)
//             {
//                 for(int l=0; l<c; l++)
//                 {   
//                     for(int p=0; p<d; p++)
//                     {
//                         if(arr[i][j][p][k][l]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<e; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {   
//                     for(int p=0; p<c; p++)
//                     {
//                         if(arr[i][j][p][l][k]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<d; l++)
//                 {   
//                     for(int p=0; p<e; p++)
//                     {
//                         if(arr[i][k][j][l][p]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);


//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<b; k++)
//             {
//                 for(int l=0; l<e; l++)
//                 {   
//                     for(int p=0; p<d; p++)
//                     {
//                         if(arr[i][k][j][p][l]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int i=0; i<a; i++)
//     {
//         for(int j=0; j<c; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<b; l++)
//                 {   
//                     for(int p=0; p<e; p++)
//                     {
//                         if(arr[i][k][l][j][p]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     ctr=0;
//     for(int j=0; j<b; j++)
//     {
//         for(int i=0; i<a; i++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<e; l++)
//                 {   
//                     for(int p=0; p<c; p++)
//                     {
//                         if(arr[i][j][l][p][k]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);


//     ctr=0;
//     for(int p=0; p<c; p++)
//     {
//         for(int j=0; j<b; j++)
//         {
//             for(int k=0; k<d; k++)
//             {
//                 for(int l=0; l<e; l++)
//                 {   
//                     for(int i=0; i<a; i++)
//                     {
//                         if(arr[i][j][l][p][k]==0) ctr++;
//                         else
//                         {
//                             ans=max(ctr, ans);
//                             ctr=0;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     ans=max(ctr, ans);

//     return ans;
// }


// void solve()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     if(n==1) printf("%lld\n", sln_for_1(n, m));
//     else if(n==2) printf("%lld\n", sln_for_2(n, m));
//     else if(n==3) printf("%lld\n", sln_for_3(n, m));
//     else if(n==4) printf("%lld\n", sln_for_4(n, m));
//     else if(n==5) printf("%lld\n", sln_for_5(n, m));
// }


// int main()
// {

//     solve();

//     return 0;
// }

