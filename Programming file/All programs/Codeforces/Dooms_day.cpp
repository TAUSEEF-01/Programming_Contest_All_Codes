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





void sln_for_1(int n, int m)
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
        a[p]++;
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

    printf("%lld\n", ans);
}






void sln_for_2(int n, int m)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sz=max(x, y);
    int a[sz][sz];
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
        a[p][q]++;
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
    printf("%lld\n", ans);
}






void sln_for_3(int n, int m)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    int sz=max(max(x, y), z);
    int a[sz][sz][sz];
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
        a[p][q][r]++;
    }

    ll ctr=0, ans=0;
    //1
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<z; k++)
            {
                if(a[i][j][k]==0) ctr++;
                else 
                {
                    ans=max(ctr, ans);
                    ctr=0;
                }
            }
        }
    }
    ans=max(ctr, ans);

    //2
    ctr=0;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<z; j++)
        {
            for(int k=0; k<y; k++)
            {
                if(a[i][k][j]==0) ctr++;
                else 
                {
                    ans=max(ctr, ans);
                    ctr=0;
                }
            }
        }
    }
    ans=max(ctr, ans);

    //3 --> perfect
    ctr=0;
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<x; j++)
        {
            for(int k=0; k<z; k++)
            {
                if(a[j][i][k]==0) ctr++;
                else 
                {
                    ans=max(ctr, ans);
                    ctr=0;
                }
            }
        }
    }
    ans=max(ctr, ans);

    //4
    // ctr=0;
    // for(int i=0; i<y; i++)
    // {
    //     for(int j=0; j<z; j++)
    //     {
    //         for(int k=0; k<x; k++)
    //         {
    //             if(a[j][k][i]==0) ctr++;
    //             else
    //             {
    //                 ans=max(ctr, ans);
    //                 ctr=0;
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    //5
    // ctr=0;
    // for(int i=0; i<z; i++)
    // {
    //     for(int j=0; j<x; j++)
    //     {
    //         for(int k=0; k<y; k++)
    //         {
    //             if(a[k][i][j]==0) ctr++;
    //             else 
    //             {
    //                 ans=max(ctr, ans);
    //                 ctr=0;
    //             }
    //         }
    //     }
    // }
    // ans=max(ctr, ans);

    //6
    ctr=0;
    for(int i=0; i<z; i++)
    {
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<x; k++)
            {
                if(a[k][j][i]==0) ctr++;
                else 
                {
                    ans=max(ctr, ans);
                    ctr=0;
                }
            }
        }
    }
    ans=max(ctr, ans);

    printf("%lld\n", ans);
}







void sln_for_4(int n, int m)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int sz=max(max(max(a, b), c), d);
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
        arr[p][q][r][s]++;
    }


    //1
    ll ctr=0, ans=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<d; l++)
                {
                    if(arr[i][j][k][l]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);

    //2
    ctr=0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<d; l++)
                {
                    if(arr[j][i][k][l]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);

    //3
    ctr=0;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<a; k++)
            {
                for(int l=0; l<d; l++)
                {
                    if(arr[k][j][i][l]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);

    //4
    ctr=0;
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<a; l++)
                {
                    if(arr[l][j][k][i]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);
    

    //5
    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<b; k++)
            {
                for(int l=0; l<d; l++)
                {
                    if(arr[i][k][j][l]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);

    //6
    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<d; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<b; l++)
                {
                    if(arr[i][l][k][j]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //7
    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<c; l++)
                {
                    if(arr[i][j][l][k]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);

    //8
    ctr=0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<a; k++)
            {
                for(int l=0; l<d; l++)
                {
                    if(arr[j][k][i][l]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //9
    ctr=0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<d; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<a; l++)
                {
                    if(arr[j][l][k][i]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //10
    ctr=0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<a; l++)
                {
                    if(arr[j][k][l][i]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //11
    ctr=0;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<b; k++)
            {
                for(int l=0; l<d; l++)
                {
                    if(arr[k][i][j][l]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //12
    ctr=0;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<b; l++)
                {
                    if(arr[k][i][l][j]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //13
    ctr=0;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<a; l++)
                {
                    if(arr[k][j][l][i]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //14
    ctr=0;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            for(int k=0; k<a; k++)
            {
                for(int l=0; l<b; l++)
                {
                    if(arr[k][l][i][j]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //15
    ctr=0;
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<d; j++)
        {
            for(int k=0; k<b; k++)
            {
                for(int l=0; l<a; l++)
                {
                    if(arr[k][l][j][i]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);



    //16
    ctr=0;
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<b; k++)
            {
                for(int l=0; l<c; l++)
                {
                    if(arr[l][i][j][k]==0) ctr ++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //17
    ctr=0;
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<b; l++)
                {
                    if(arr[l][i][k][j]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //18
    ctr=0;
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<a; k++)
            {
                for(int l=0; l<b; l++)
                {
                    if(arr[l][k][i][j]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //19
    ctr=0;
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<b; k++)
            {
                for(int l=0; l<a; l++)
                {
                    if(arr[l][k][j][i]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //20
    ctr=0;
    for(int i=0; i<d; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<a; k++)
            {
                for(int l=0; l<c; l++)
                {
                    if(arr[l][j][i][k]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //21
    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<c; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<b; l++)
                {
                    if(arr[i][k][l][j]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //22
    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<d; j++)
        {
            for(int k=0; k<b; k++)
            {
                for(int l=0; l<c; l++)
                {
                    if(arr[i][l][j][k]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //23
    ctr=0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<a; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<c; l++)
                {
                    if(arr[j][i][l][k]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);


    //24
    ctr=0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<d; j++)
        {
            for(int k=0; k<a; k++)
            {
                for(int l=0; l<c; l++)
                {
                    if(arr[j][l][i][k]==0) ctr++;
                    else 
                    {
                        ans=max(ctr, ans);
                        ctr=0;
                    }
                }                
            }
        }
    }
    ans=max(ctr, ans);

    printf("%lld\n", ans);
}







void sln_for_5(int n, int m)
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int sz=max(max(max(max(a, b), c), d), e);
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
    int ans=0, ctr=0;

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<d; l++)
                {   
                    for(int p=0; p<e; p++)
                    {
                        if(arr[i][j][k][l][p]==0) ctr++;
                        else
                        {
                            ans=max(ctr, ans);
                            ctr=0;
                        }
                    }
                }
            }
        }
    }
    ans=max(ctr, ans);

    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<c; k++)
            {
                for(int l=0; l<e; l++)
                {   
                    for(int p=0; p<d; p++)
                    {
                        if(arr[i][j][k][p][l]==0) ctr++;
                        else
                        {
                            ans=max(ctr, ans);
                            ctr=0;
                        }
                    }
                }
            }
        }
    }
    ans=max(ctr, ans);


    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<c; l++)
                {   
                    for(int p=0; p<e; p++)
                    {
                        if(arr[i][j][l][k][p]==0) ctr++;
                        else
                        {
                            ans=max(ctr, ans);
                            ctr=0;
                        }
                    }
                }
            }
        }
    }
    ans=max(ctr, ans);
    

    ctr=0;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<e; l++)
                {   
                    for(int p=0; p<c; p++)
                    {
                        if(arr[i][j][l][p][k]==0) ctr++;
                        else
                        {
                            ans=max(ctr, ans);
                            ctr=0;
                        }
                    }
                }
            }
        }
    }
    ans=max(ctr, ans);


    ctr=0;
    for(int j=0; j<b; j++)
    {
        for(int i=0; i<a; i++)
        {
            for(int k=0; k=d; k++)
            {
                for(int l=0; l<e; l++)
                {   
                    for(int p=0; p<c; p++)
                    {
                        if(arr[i][j][l][p][k]==0) ctr++;
                        else
                        {
                            ans=max(ctr, ans);
                            ctr=0;
                        }
                    }
                }
            }
        }
    }
    ans=max(ctr, ans);


    ctr=0;
    for(int p=0; p<c; p++)
    {
        for(int j=0; j<b; j++)
        {
            for(int k=0; k<d; k++)
            {
                for(int l=0; l<e; l++)
                {   
                    for(int i=0; i<a; i++)
                    {
                        if(arr[i][j][l][p][k]==0) ctr++;
                        else
                        {
                            ans=max(ctr, ans);
                            ctr=0;
                        }
                    }
                }
            }
        }
    }
    ans=max(ctr, ans);

    printf("%d\n", ans);
}


void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(n==1) sln_for_1(n, m);
    else if(n==2) sln_for_2(n, m);
    else if(n==3) sln_for_3(n, m);
    else if(n==4) sln_for_4(n, m);
    else if(n==5) sln_for_5(n, m);
}


int main()
{

    solve();

    return 0;
}




















// void bubble_sort(int a[], int n)
// {
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n-i-1; j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
// }
































// #include<stdio.h>
// #include<math.h>
// #define ll long long
// #define inpi(n) scanf("%d", &n)
// #define inpl(n) scanf("%lld", &n)
// #define inpc(n) scanf("%c", &n)
// #define inpd(n) scanf("%lf", &n)



// int erth[10001][10001];

// int max(int a, int b) 
// {
//     if(a>b) return a;
//     else return b;
// }

// int ctr_erth(int n, int m, int d[], int des[][2]) 
// {
//     for(int i=0; i<n; i++) 
//     {
//         for(int j=0; j<d[i]; j++) 
//         {
//             erth[i][j]=1;
//         }
//     }

//     for(int i=0; i<m; i++) 
//     {
//         erth[des[i][0]][des[i][1]]=0;
//     }

//     int mx_esz=0;

//     for(int i=0; i<n; i++) 
//     {
//         for(int j=0; j<d[i]; j++) 
//         {
//             if(erth[i][j]==1) 
//             {
//                 int sz=0;
//                 int r=i;
//                 while(r<n && erth[r][j]==1) 
//                 {
//                     int c=j;
//                     while(c<d[r] && erth[r][c]==1) 
//                     {
//                         sz++;
//                         c++;
//                     }
//                     r++;
//                 }
//                 mx_esz= max(mx_esz, sz);
//             }
//         }
//     }

//     return mx_esz;
// }

// void solve()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int d[n];
//     for(int i=0; i<n; i++) 
//     {
//         scanf("%d", &d[i]);
//     }

//     int des[m][2];
//     for(int i=0; i<m; i++) 
//     {
//         scanf("%d %d", &des[i][0], &des[i][1]);
//     }

//     int result= ctr_erth(n, m, d, des);
//     printf("%d\n", result+1);
// }

// int main() 
// {
//     solve();

//     return 0;
// }



















// #include<stdio.h>
// #include<math.h>
// #define ll long long
// #define inpi(n) scanf("%d", &n)
// #define inpl(n) scanf("%lld", &n)
// #define inpc(n) scanf("%c", &n)
// #define inpd(n) scanf("%lf", &n)



// int erth[25][25]; // Define a 2D array to represent the erth

// int max(int a, int b) 
// {
//     if(a>b) return a;
//     else return b;
// }

// // Function to find the maximum size of newly created erths
// int ctr_erth(int N, int M, int d[], int des[][2]) 
// {
//     // Initialize the erth array
//     for(int i=0; i<N; i++) 
//     {
//         for(int j=0; j<d[i]; j++) 
//         {
//             erth[i][j]=1;
//         }
//     }

//     // Mark destroyed regions in the erth array
//     for(int i=0; i<M; i++) 
//     {
//         erth[des[i][0]][des[i][1]]=0;
//     }

//     int mx_esz=0;

//     for(int i=0; i<N; i++) 
//     {
//         for(int j=0; j<d[i]; j++) 
//         {
//             if(erth[i][j]==1) 
//             {
//                 int sz=0;
//                 int r=i;
//                 while(r<N && erth[r][j]==1) 
//                 {
//                     int c=j;
//                     while(c<d[r] && erth[r][c]==1) 
//                     {
//                         sz++;
//                         c++;
//                     }
//                     r++;
//                 }
//                 mx_esz= max(mx_esz, sz);
//             }
//         }
//     }

//     return mx_esz;
// }

// void solve()
// {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     int d[N];
//     for(int i=0; i<N; i++) 
//     {
//         scanf("%d", &d[i]);
//     }

//     int des[M][2];
//     for(int i=0; i<M; i++) 
//     {
//         scanf("%d %d", &des[i][0], &des[i][1]);
//     }

//     int result= ctr_erth(N, M, d, des);
//     printf("%d\n", result+1);
// }

// int main() 
// {
//     solve();

//     return 0;
// }