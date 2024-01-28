#include <stdio.h>
#include <math.h>
#define ll long long

ll n, m;


ll array[5];


ll max(ll &a, ll &b)
{
    if (a > b)
        return a;
    else
        return b;
}
void solve()
{
    scanf("%lld %lld", &n, &m);
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
    }
    ll destroyed[m][5];
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            scanf("%lld", &destroyed[i][j]);
        }
    }
    ll count = 0, temp = 0;
    if (n == 1)
    {
        ll value[array[0]] = {};
        for (ll i = 0; i < m; i++)
        {
            value[destroyed[i][0]] = 1;
        }
        for (ll i = 0; i < array[0]; i++)
        {
            if (!value[i])
            {
                temp++;
                count = max(temp, count);
            }
            else
                temp = 0;
        }
    }
    else if (n == 2)
    {   
        ll value[array[0]][array[1]] = {};
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                value[destroyed[i][0]][destroyed[i][1]] = 1;
                // printf("%d", destroyed[i][0]destroyed[i][1]);
                printf("%d %d\n", destroyed[i][0], destroyed[i][1]);
            }
        }
        for (ll i = 0; i < array[0]; i++)
        {
            for (ll j = 0; j < array[1]; j++)
            {
                if (!value[i][j])
                {
                    temp++;
                    count = max(temp, count);
                }
                else
                    temp = 0;
            }
        }
        temp = 0;
        for (ll j = 0; j < array[1]; j++)
        {
            for (ll i = 0; i < array[0]; i++)
            {
                if (!value[i][j])
                {
                    temp++;
                    count = max(temp, count);
                }
                else
                    temp = 0;
            }
        }
    }
    else if (n == 3)
    {
        ll value[array[0]][array[1]][array[2]] = {};
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                value[destroyed[i][0]][destroyed[i][1]][destroyed[i][2]] = 1;
                // printf("%d %d %d\n", destroyed[i][0], destroyed[i][1], destroyed[i][2]);
            }
        }
        for (ll i = 0; i < array[0]; i++)
        {
            for (ll j = 0; j < array[1]; j++)
            {
                for (ll k = 0; k < array[2]; k++)
                {

                    if (!value[i][j][k])
                    {
                        temp++;
                        count = max(temp, count);
                    }
                    else
                        temp = 0;
                }
            }
        }
        temp = 0;
        for (ll i = 0; i < array[0]; i++)
        {
            for (ll k = 0; k < array[2]; k++)
            {
                for (ll j = 0; j < array[1]; j++)
                {

                    if (!value[i][j][k])
                    {
                        temp++;
                        count = max(temp, count);
                    }
                    else
                        temp = 0;
                }
            }
        }
        temp = 0;
        for (ll j = 0; j < array[1]; j++)
        {
            for (ll i = 0; i < array[0]; i++)
            {
                for (ll k = 0; k < array[2]; k++)
                {

                    if (!value[i][j][k])
                    {
                        temp++;
                        count = max(temp, count);
                    }
                    else
                        temp = 0;
                }
            }
        }
        temp = 0;
        for (ll k = 0; k < array[2]; k++)
        {
            for (ll i = 0; i < array[0]; i++)
            {
                for (ll j = 0; j < array[1]; j++)
                {

                    if (!value[i][j][k])
                    {
                        temp++;
                        count = max(temp, count);
                    }
                    else
                        temp = 0;
                }
            }
        }
        temp = 0;
        for (ll j = 0; j < array[1]; j++)
        {
            for (ll k = 0; k < array[2]; k++)
            {
                for (ll i = 0; i < array[0]; i++)
                {

                    if (!value[i][j][k])
                    {
                        temp++;
                        count = max(temp, count);
                    }
                    else
                        temp = 0;
                }
            }
        }
        temp = 0;
        for (ll j = 0; j < array[1]; j++)
        {
            for (ll k = 0; k < array[2]; k++)
            {
                for (ll i = 0; i < array[0]; i++)
                {

                    if (!value[i][j][k])
                    {
                        temp++;
                        count = max(temp, count);
                    }
                    else
                        temp = 0;
                }
            }
        }
    }
    else if (n == 4)
    {
        ll value[array[0]][array[1]][array[2]][array[3]];
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                value[destroyed[i][0]][destroyed[i][1]][destroyed[i][2]][destroyed[i][3]] = 1;
            }
        }
        for (ll i = 0; i < array[0]; i++)
        {
            for (ll j = 0; j < array[1]; j++)
            {
                for (ll k = 0; k < array[2]; k++)
                {
                    for (ll p = 0; p < array[3]; p++)
                    {
                        if (!value[i][j][k])
                        {
                            temp++;
                            count = max(temp, count);
                        }
                        else
                            temp = 0;
                    }
                }
            }
        }
        temp = 0;
        for (ll p = 0; p < array[3]; p++)
        {
            for (ll k = 0; k < array[2]; k++)
            {
                for (ll j = 0; j < array[1]; j++)
                {
                    for (ll i = 0; i < array[0]; i++)
                    {
                        if (!value[i][j][k])
                        {
                            temp++;
                            count = max(temp, count);
                        }
                        else
                            temp = 0;
                    }
                }
            }
        }
    }
    else
    {
        ll value[array[0]][array[1]][array[2]][array[3]][array[4]];
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                value[destroyed[i][0]][destroyed[i][1]][destroyed[i][2]][destroyed[i][3]][destroyed[i][4]] = 1;
            }
        }
        for (ll i = 0; i < array[0]; i++)
        {
            for (ll j = 0; j < array[1]; j++)
            {
                for (ll k = 0; k < array[2]; k++)
                {
                    for (ll p = 0; p < array[3]; p++)
                    {
                        for (ll q = 0; q < n; q++)
                        {
                            if (!value[i][j][k])
                            {
                                temp++;
                                count = max(temp, count);
                            }
                            else
                                temp = 0;
                        }
                    }
                }
            }
        }
        temp = 0;
        for (ll q = 0; q < n; q++)
        {
            for (ll p = 0; p < array[3]; p++)
            {
                for (ll k = 0; k < array[2]; k++)
                {
                    for (ll j = 0; j < array[1]; j++)
                    {
                        for (ll i = 0; i < array[0]; i++)
                        {
                            if (!value[i][j][k])
                            {
                                temp++;
                                count = max(temp, count);
                            }
                            else
                                temp = 0;
                        }
                    }
                }
            }
        }
    }

   

    printf("%lld\n", count);
}

int main()
{
    ll t = 1;

    for (ll i = 1; i <= t; i++)
    {

        solve();
    }
}
















// #include<stdio.h>
// int map1D[1000];
// int map2D[1000][1000];
// int map3D[500][500][500];

// void min1D(int row)
// {
//     int frow=-1;
//     //row major transformation
//     // printf("%d\n", row);
//     int cnt=0;
//     for(int i=0;i<row;i++)
//     {
//         if(map1D[i]) 
//         {
//             if(frow<cnt) frow=cnt;
//             cnt=0;
//         }
//         else cnt++;
//     }
//     printf("%d\n",frow);
// }


// void min2D(int row,int col)
// {
//     int frow=-1, fcol=-1;
//     //row major transformation
//     int cnt=0;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             if(map2D[i][j]) 
//             {
//                 if(frow<cnt) frow=cnt;
//                 cnt=0;
//             }
//             else cnt++;
//         }   
//     }
//     cnt=0;
//     //colum major 
//     for(int i=0;i<col;i++)
//     {
//         for(int j=0;j<row;j++)
//         {
//             if(map2D[j][i]) 
//             {
//                 if(fcol<cnt) fcol=cnt;
//                 cnt=0;
//             }
//             else cnt++;
//         }   
//     }
    
//     if(frow<fcol) 
//     {
//         printf("%d\n",fcol);
//     }
//     else 
//     {
//         printf("%d\n",frow);
//     }

// }

// void min3D(int row, int col, int height)
// {
//     int frow=-1, fcol=-1, fheight=-1;
//     //row major 
//     int cnt=0;
//     for(int i=0; i<row; i++)
//     {
//         for(int j=0; j<col; j++)
//         {
//             for(int k=0; k<height; k++)
//             {
//                 // printf("i=%d j=%d == %d \n",i,j,map2D[i][j]);
//                 //x[i*col*height+j*height+k]=map3D[i][j][k];
//                 //printf("index=%d ===%d ",i*col+j,x[i*col+j]);
//                 //printf("\n");
//                 if(map3D[i][j][k]==1) 
//                 {
//                     if(frow<cnt) frow=cnt;
//                     cnt=0;
//                 }
//                 else cnt++;
//             }
//         }   
//     }
//     cnt=0;
//     //colum major 
//     for(int i=0;i<col;i++)
//     {
//         for(int j=0;j<row;j++)
//         {
//             for(int k=0;k<height;k++)
//             {
//                 // printf("i=%d j=%d == %d \n",i,j,map2D[i][j]);
//                 //y[i*row*height+j*height+k]=map3D[j][i][k];
//                 if(map3D[j][i][k]) 
//                 {
//                     if(fcol<cnt) fcol=cnt;
//                     cnt=0;
//                 }
//                 else cnt++;
//             }
//         }   
//     }
//     cnt=0;
//     //height major 
//     for(int i=0;i<height;i++)
//     {
//         for(int j=0;j<row;j++)
//         {
//             for(int k=0;k<col;k++)
//             {
//                 // printf("i=%d j=%d == %d \n",i,j,map2D[i][j]);
//                // z[i*row*col+j*col+k]=map3D[j][k][i];
//                 if(map3D[j][i][k]) 
//                 {
//                     if(fheight<cnt) fheight=cnt;
//                     cnt=0;
//                 }
//                 else cnt++;
//             }
//         }   
//     }
//     if(frow>fcol && frow>fheight) 
//     {
//         printf("%d\n",frow);
//     }
//     else if(fcol>frow && fcol>fheight) 
//     {
//         printf("%d\n",fcol);
//     }
//     else 
//     {
//         printf("%d\n",fheight);
//     }
// }

// int main()
// {
//     int n, m, earthDimension[5], destroyed[10000][5];
//     scanf("%d %d",&n,&m);

//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&earthDimension[i]);
//     }
    
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             scanf("%d",&destroyed[i][j]);
//         }
//         if(n==1) map1D[destroyed[i][0]]=1;
//         else if(n==2) map2D[(destroyed[i][0])][(destroyed[i][1])]=1;
//         else if(n==3) map3D[(destroyed[i][0])][(destroyed[i][1])][(destroyed[i][2])]=1;
//         // printf("%d %d %d\n", (destroyed[i][0]), (destroyed[i][1]), (destroyed[i][2]));
//     }
//     // printf("%d\n", earthDimension[0]);
//     if(n==1) min1D(earthDimension[0]);
//     else if(n==2) min2D(earthDimension[0], earthDimension[1]);
//     else if(n==3) min3D(earthDimension[0], earthDimension[1], earthDimension[2]);
//     //if(n>3) printf("0\n");
    
//     return 0;
// }




























// // #include<stdio.h>
// // #include<math.h>
// // #define ll long long
// // #define inpi(n) scanf("%d", &n)
// // #define inpl(n) scanf("%lld", &n)
// // #define inpc(n) scanf("%c", &n)
// // #define inpd(n) scanf("%lf", &n)



// // int max(int a, int b)
// // {
// //     if(a>b) return a;
// //     else return b;
// // }





// // ll sln_for_1(int n, int m)
// // {
// //     int x;
// //     scanf("%d", &x);
// //     int a[x];
// //     for(int i=0; i<x; i++) 
// //     {
// //         a[i]=0;
// //     }

// //     for(int i=0; i<m; i++) 
// //     {
// //         int p;
// //         scanf("%d", &p);
// //         a[p]=1;
// //     }

// //     ll ctr=0, ans=0;
// //     for(int i=0; i<x; i++)
// //     {
// //         if(a[i]==0) ctr++;
// //         else
// //         {
// //             ans=max(ctr, ans);
// //             ctr=0;
// //         }
// //     }
// //     ans=max(ctr, ans);

// //     // printf("%lld\n", ans);
// //     return ans;
// // }


// // // // ll sln_for_2(int n, int m)
// // // {
// // //     int x, y;
// // //     scanf("%d %d", &x, &y);
// // //     int sz=max(x, y);
// // //     int a[sz][sz];
// // //     for(int i=0; i<sz; i++)
// // //     {
// // //         for(int j=0; j<sz; j++)
// // //         {
// // //             a[i][j]=0;
// // //         }
// // //     }

// // //     for(int i=0; i<m; i++)
// // //     {
// // //         int p, q;
// // //         scanf("%d %d", &p, &q);
// // //         a[p][q]++;
// // //     }


// // //     ll ctr=0, ans=0;
// // //     for(int i=0;i<x;i++)
// // //     {
// // //         for(int j=0;j<y;j++)
// // //         {
// // //             if(a[i][j]==0) ctr++;
// // //             else 
// // //             {
// // //                 ans=max(ctr, ans);
// // //                 ctr=0;
// // //             }
// // //         }
// // //     }
// // //     ans=max(ans, ctr);

// // //     ctr=0;
// // //     for(int i=0;i<y;i++)
// // //     {
// // //         for(int j=0;j<x;j++)
// // //         {
// // //             if(a[j][i]==0) ctr++;
// // //             else 
// // //             {
// // //                 ans=max(ctr, ans);
// // //                 ctr=0;
// // //             }
// // //         }   
// // //     }
// // //     ans=max(ans, ctr);
    
// // //     return ans;
// // // }



// // ll sln_for_2(int n, int m)
// // {
// //     int x, y;
// //     scanf("%d %d", &x, &y);
// //     int sz=max(x, y);
// //     int a[sz][sz];
// //     for(int i=0; i<sz; i++)
// //     {
// //         for(int j=0; j<sz; j++)
// //         {
// //             a[i][j]=0;
// //         }
// //     }

// //     for(int i=0; i<m; i++)
// //     {
// //         int p, q;
// //         scanf("%d %d", &p, &q);
// //         a[p][q]=1;
// //     }

// //     ll ctr=0, ans=0;
// //     for(int i=0; i<x; i++)
// //     {
// //         for(int j=0; j<y; j++)
// //         {
// //             if(a[i][j]==0) ctr++;
// //             else 
// //             {
// //                 ans=max(ctr, ans);
// //                 ctr=0;
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);

// //     ctr=0;
// //     for(int i=0; i<y; i++)
// //     {
// //         for(int j=0; j<x; j++)
// //         {
// //             if(a[j][i]==0) ctr++;
// //             else 
// //             {
// //                 ans=max(ctr, ans);
// //                 ctr=0;
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);
// //     // printf("%lld\n", ans);

// //     return ans;
// // }



// // // ll sln_for_3(int n, int m)
// // // {
// // //     int x, y, z;
// // //     scanf("%d %d %d", &x, &y, &z);

// // //     int sz=max(max(x, y), z);
// // //     int a[sz][sz][sz];
// // //     for(int i=0; i<sz; i++)
// // //     {
// // //         for(int j=0; j<sz; j++)
// // //         {
// // //             for(int k=0; k<sz; k++)
// // //             {
// // //                 a[i][j][k]=0;
// // //             }
// // //         }
// // //     }
// // //     for(int i=0; i<m; i++)
// // //     {
// // //         int p, q, r;
// // //         scanf("%d %d %d", &p, &q, &r);
// // //         a[p][q][r]++;

// // //     }

// // //     ll cnt=0, ans=0;
// // //     for(int i=0; i<x; i++)
// // //     {
// // //         for(int j=0; j<y; j++)
// // //         {
// // //             for(int k=0; k<z; k++)
// // //             {
// // //                 if(a[i][j][k]==0) cnt++;
// // //                 else
// // //                 {
// // //                     ans=max(ans, cnt);
// // //                     cnt=0;
// // //                 }
// // //             }
// // //         }   
// // //     }
// // //     ans=max(ans, cnt);

// // //     cnt=0;
// // //     for(int i=0;i<y;i++)
// // //     {
// // //         for(int j=0;j<x;j++)
// // //         {
// // //             for(int k=0;k<z;k++)
// // //             {

// // //                 if(a[j][i][k]==0) cnt++;
// // //                 else
// // //                 {
// // //                     ans=max(ans, cnt);
// // //                     cnt=0;
// // //                 }
// // //             }
// // //         }   
// // //     }
// // //     ans=max(ans, cnt);

// // //     cnt=0;
// // //     for(int i=0;i<z;i++)
// // //     {
// // //         for(int j=0;j<x;j++)
// // //         {
// // //             for(int k=0;k<y;k++)
// // //             {

// // //                 if(a[j][i][k]==0) cnt++;
// // //                 else
// // //                 {
// // //                     ans=max(ans, cnt);
// // //                     cnt=0;
// // //                 }
// // //             }
// // //         }   
// // //     }
// // //     ans=max(ans, cnt);

// // //     return ans;
// // // }





// // ll sln_for_3(int n, int m)
// // {
// //     int x, y, z;
// //     scanf("%d %d %d", &x, &y, &z);

// //     int sz=max(max(x, y), z);
// //     int a[sz][sz][sz];
// //     for(int i=0; i<sz; i++)
// //     {
// //         for(int j=0; j<sz; j++)
// //         {
// //             for(int k=0; k<sz; k++)
// //             {
// //                 a[i][j][k]=0;
// //             }
// //         }
// //     }

// //     for(int i=0; i<m; i++)
// //     {
// //         int p, q, r;
// //         scanf("%d %d %d", &p, &q, &r);
// //         a[p][q][r]=1;

// //     }

// //     ll ctr=0, ans=0;
// //     //1
// //     for(int i=0; i<x; i++)
// //     {
// //         for(int j=0; j<y; j++)
// //         {
// //             for(int k=0; k<z; k++)
// //             {
// //                 if(a[i][j][k]==0) ctr++;
// //                 else 
// //                 {
// //                     ans=max(ctr, ans);
// //                     ctr=0;
// //                 }
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);

// //     //2
// //     // ctr=0;
// //     // for(int i=0; i<x; i++)
// //     // {
// //     //     for(int j=0; j<z; j++)
// //     //     {
// //     //         for(int k=0; k<y; k++)
// //     //         {
// //     //             if(a[i][k][j]==0) ctr++;
// //     //             else 
// //     //             {
// //     //                 ans=max(ctr, ans);
// //     //                 ctr=0;
// //     //             }
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     // //3
// //     // ctr=0;
// //     for(int i=0; i<y; i++)
// //     {
// //         for(int j=0; j<x; j++)
// //         {
// //             for(int k=0; k<z; k++)
// //             {
// //                 if(a[j][i][k]==0) ctr++;
// //                 else 
// //                 {
// //                     ans=max(ctr, ans);
// //                     ctr=0;
// //                 }
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);

// //     // //4
// //     // ctr=0;
// //     // for(int i=0; i<y; i++)
// //     // {
// //     //     for(int j=0; j<z; j++)
// //     //     {
// //     //         for(int k=0; k<x; k++)
// //     //         {
// //     //             if(a[j][k][i]==0) ctr++;
// //     //             else
// //     //             {
// //     //                 ans=max(ctr, ans);
// //     //                 ctr=0;
// //     //             }
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     //5
// //     ctr=0;
// //     for(int i=0; i<z; i++)
// //     {
// //         for(int j=0; j<x; j++)
// //         {
// //             for(int k=0; k<y; k++)
// //             {
// //                 if(a[k][i][j]==0) ctr++;
// //                 else 
// //                 {
// //                     ans=max(ctr, ans);
// //                     ctr=0;
// //                 }
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);


// //     // 6
// //     // ctr=0;
// //     // for(int i=0; i<z; i++)
// //     // {
// //     //     for(int j=0; j<y; j++)
// //     //     {
// //     //         for(int k=0; k<x; k++)
// //     //         {
// //     //             if(a[k][j][i]==0) ctr++;
// //     //             else 
// //     //             {
// //     //                 ans=max(ctr, ans);
// //     //                 ctr=0;
// //     //             }
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     // printf("%lld\n", ans);
// //     return ans;
// // }







// // ll sln_for_4(int n, int m)
// // {
// //     int a, b, c, d;
// //     scanf("%d %d %d %d", &a, &b, &c, &d);

// //     int sz=max(max(max(a, b), c), d);
// //     short int arr[sz][sz][sz][sz];

// //     for(int i=0; i<sz; i++)
// //     {
// //         for(int j=0; j<sz; j++)
// //         {
// //             for(int k=0; k<sz; k++)
// //             {
// //                 for(int l=0; l<sz; l++)
// //                 {
// //                     arr[i][j][k][l]=0;
// //                 }
// //             }
// //         }
// //     }

// //     for(int i=0; i<m; i++)
// //     {
// //         int p, q, r, s;
// //         scanf("%d %d %d %d", &p, &q, &r, &s);
// //         arr[p][q][r][s]++;
// //     }


// //     //1
// //     ll ctr=0, ans=0;
// //     for(int i=0; i<a; i++)
// //     {
// //         for(int j=0; j<b; j++)
// //         {
// //             for(int k=0; k<c; k++)
// //             {
// //                 for(int l=0; l<d; l++)
// //                 {
// //                     if(arr[i][j][k][l]==0) ctr++;
// //                     else 
// //                     {
// //                         ans=max(ctr, ans);
// //                         ctr=0;
// //                     }
// //                 }                
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);

// //     //2
// //     ctr=0;
// //     for(int i=0; i<b; i++)
// //     {
// //         for(int j=0; j<a; j++)
// //         {
// //             for(int k=0; k<c; k++)
// //             {
// //                 for(int l=0; l<d; l++)
// //                 {
// //                     if(arr[j][i][k][l]==0) ctr++;
// //                     else 
// //                     {
// //                         ans=max(ctr, ans);
// //                         ctr=0;
// //                     }
// //                 }                
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);

// //     /*    */
// //     ctr=0;
// //     for(int i=0; i<c; i++)
// //     {
// //         for(int j=0; j<b; j++)
// //         {
// //             for(int k=0; k<a; k++)
// //             {
// //                 for(int l=0; l<d; l++)
// //                 {
// //                     if(arr[j][j][i][l]==0) ctr++;
// //                     else 
// //                     {
// //                         ans=max(ctr, ans);
// //                         ctr=0;
// //                     }
// //                 }                
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);


// //     /*    */
// //     ctr=0;
// //     for(int i=0; i<d; i++)
// //     {
// //         for(int j=0; j<c; j++)
// //         {
// //             for(int k=0; k<b; k++)
// //             {
// //                 for(int l=0; l<a; l++)
// //                 {
// //                     if(arr[l][k][j][i]==0) ctr++;
// //                     else 
// //                     {
// //                         ans=max(ctr, ans);
// //                         ctr=0;
// //                     }
// //                 }                
// //             }
// //         }
// //     }
// //     ans=max(ctr, ans);

// //     // //3
// //     // ctr=0;
// //     // for(int i=0; i<c; i++)
// //     // {
// //     //     for(int j=0; j<b; j++)
// //     //     {
// //     //         for(int k=0; k<a; k++)
// //     //         {
// //     //             for(int l=0; l<d; l++)
// //     //             {
// //     //                 if(arr[k][j][i][l]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     // //4
// //     // ctr=0;
// //     // for(int i=0; i<d; i++)
// //     // {
// //     //     for(int j=0; j<b; j++)
// //     //     {
// //     //         for(int k=0; k<c; k++)
// //     //         {
// //     //             for(int l=0; l<a; l++)
// //     //             {
// //     //                 if(arr[l][j][k][i]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);
    

// //     // //5
// //     // ctr=0;
// //     // for(int i=0; i<a; i++)
// //     // {
// //     //     for(int j=0; j<c; j++)
// //     //     {
// //     //         for(int k=0; k<b; k++)
// //     //         {
// //     //             for(int l=0; l<d; l++)
// //     //             {
// //     //                 if(arr[i][k][j][l]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     // //6
// //     // ctr=0;
// //     // for(int i=0; i<a; i++)
// //     // {
// //     //     for(int j=0; j<d; j++)
// //     //     {
// //     //         for(int k=0; k<c; k++)
// //     //         {
// //     //             for(int l=0; l<b; l++)
// //     //             {
// //     //                 if(arr[i][l][k][j]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //7
// //     // ctr=0;
// //     // for(int i=0; i<a; i++)
// //     // {
// //     //     for(int j=0; j<b; j++)
// //     //     {
// //     //         for(int k=0; k<d; k++)
// //     //         {
// //     //             for(int l=0; l<c; l++)
// //     //             {
// //     //                 if(arr[i][j][l][k]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     // //8
// //     // ctr=0;
// //     // for(int i=0; i<b; i++)
// //     // {
// //     //     for(int j=0; j<c; j++)
// //     //     {
// //     //         for(int k=0; k<a; k++)
// //     //         {
// //     //             for(int l=0; l<d; l++)
// //     //             {
// //     //                 if(arr[j][k][i][l]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //9
// //     // ctr=0;
// //     // for(int i=0; i<b; i++)
// //     // {
// //     //     for(int j=0; j<d; j++)
// //     //     {
// //     //         for(int k=0; k<c; k++)
// //     //         {
// //     //             for(int l=0; l<a; l++)
// //     //             {
// //     //                 if(arr[j][l][k][i]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //10
// //     // ctr=0;
// //     // for(int i=0; i<b; i++)
// //     // {
// //     //     for(int j=0; j<c; j++)
// //     //     {
// //     //         for(int k=0; k<d; k++)
// //     //         {
// //     //             for(int l=0; l<a; l++)
// //     //             {
// //     //                 if(arr[j][k][l][i]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // // //11
// //     // ctr=0;
// //     // for(int i=0; i<c; i++)
// //     // {
// //     //     for(int j=0; j<a; j++)
// //     //     {
// //     //         for(int k=0; k<b; k++)
// //     //         {
// //     //             for(int l=0; l<d; l++)
// //     //             {
// //     //                 if(arr[k][i][j][l]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //12
// //     // ctr=0;
// //     // for(int i=0; i<c; i++)
// //     // {
// //     //     for(int j=0; j<a; j++)
// //     //     {
// //     //         for(int k=0; k<d; k++)
// //     //         {
// //     //             for(int l=0; l<b; l++)
// //     //             {
// //     //                 if(arr[k][i][l][j]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // // //13
// //     // // ctr=0;
// //     // // for(int i=0; i<c; i++)
// //     // // {
// //     // //     for(int j=0; j<b; j++)
// //     // //     {
// //     // //         for(int k=0; k<d; k++)
// //     // //         {
// //     // //             for(int l=0; l<a; l++)
// //     // //             {
// //     // //                 if(arr[k][j][l][i]==0) ctr++;
// //     // //                 else 
// //     // //                 {
// //     // //                     ans=max(ctr, ans);
// //     // //                     ctr=0;
// //     // //                 }
// //     // //             }                
// //     // //         }
// //     // //     }
// //     // // }
// //     // // ans=max(ctr, ans);


// //     // // //14
// //     // // ctr=0;
// //     // // for(int i=0; i<c; i++)
// //     // // {
// //     // //     for(int j=0; j<d; j++)
// //     // //     {
// //     // //         for(int k=0; k<a; k++)
// //     // //         {
// //     // //             for(int l=0; l<b; l++)
// //     // //             {
// //     // //                 if(arr[k][l][i][j]==0) ctr++;
// //     // //                 else 
// //     // //                 {
// //     // //                     ans=max(ctr, ans);
// //     // //                     ctr=0;
// //     // //                 }
// //     // //             }                
// //     // //         }
// //     // //     }
// //     // // }
// //     // // ans=max(ctr, ans);


// //     // // //15
// //     // // ctr=0;
// //     // // for(int i=0; i<c; i++)
// //     // // {
// //     // //     for(int j=0; j<d; j++)
// //     // //     {
// //     // //         for(int k=0; k<b; k++)
// //     // //         {
// //     // //             for(int l=0; l<a; l++)
// //     // //             {
// //     // //                 if(arr[k][l][j][i]==0) ctr++;
// //     // //                 else 
// //     // //                 {
// //     // //                     ans=max(ctr, ans);
// //     // //                     ctr=0;
// //     // //                 }
// //     // //             }                
// //     // //         }
// //     // //     }
// //     // // }
// //     // // ans=max(ctr, ans);



// //     // // //16
// //     // ctr=0;
// //     // for(int i=0; i<d; i++)
// //     // {
// //     //     for(int j=0; j<a; j++)
// //     //     {
// //     //         for(int k=0; k<b; k++)
// //     //         {
// //     //             for(int l=0; l<c; l++)
// //     //             {
// //     //                 if(arr[l][i][j][k]==0) ctr ++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //17
// //     // ctr=0;
// //     // for(int i=0; i<d; i++)
// //     // {
// //     //     for(int j=0; j<a; j++)
// //     //     {
// //     //         for(int k=0; k<c; k++)
// //     //         {
// //     //             for(int l=0; l<b; l++)
// //     //             {
// //     //                 if(arr[l][i][k][j]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // // //18
// //     // // ctr=0;
// //     // // for(int i=0; i<d; i++)
// //     // // {
// //     // //     for(int j=0; j<c; j++)
// //     // //     {
// //     // //         for(int k=0; k<a; k++)
// //     // //         {
// //     // //             for(int l=0; l<b; l++)
// //     // //             {
// //     // //                 if(arr[l][k][i][j]==0) ctr++;
// //     // //                 else 
// //     // //                 {
// //     // //                     ans=max(ctr, ans);
// //     // //                     ctr=0;
// //     // //                 }
// //     // //             }                
// //     // //         }
// //     // //     }
// //     // // }
// //     // // ans=max(ctr, ans);


// //     // // //19
// //     // // ctr=0;
// //     // // for(int i=0; i<d; i++)
// //     // // {
// //     // //     for(int j=0; j<c; j++)
// //     // //     {
// //     // //         for(int k=0; k<b; k++)
// //     // //         {
// //     // //             for(int l=0; l<a; l++)
// //     // //             {
// //     // //                 if(arr[l][k][j][i]==0) ctr++;
// //     // //                 else 
// //     // //                 {
// //     // //                     ans=max(ctr, ans);
// //     // //                     ctr=0;
// //     // //                 }
// //     // //             }                
// //     // //         }
// //     // //     }
// //     // // }
// //     // // ans=max(ctr, ans);


// //     // // //20
// //     // // ctr=0;
// //     // // for(int i=0; i<d; i++)
// //     // // {
// //     // //     for(int j=0; j<b; j++)
// //     // //     {
// //     // //         for(int k=0; k<a; k++)
// //     // //         {
// //     // //             for(int l=0; l<c; l++)
// //     // //             {
// //     // //                 if(arr[l][j][i][k]==0) ctr++;
// //     // //                 else 
// //     // //                 {
// //     // //                     ans=max(ctr, ans);
// //     // //                     ctr=0;
// //     // //                 }
// //     // //             }                
// //     // //         }
// //     // //     }
// //     // // }
// //     // // ans=max(ctr, ans);


// //     // // //21
// //     // ctr=0;
// //     // for(int i=0; i<a; i++)
// //     // {
// //     //     for(int j=0; j<c; j++)
// //     //     {
// //     //         for(int k=0; k<d; k++)
// //     //         {
// //     //             for(int l=0; l<b; l++)
// //     //             {
// //     //                 if(arr[i][k][l][j]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //22
// //     // ctr=0;
// //     // for(int i=0; i<a; i++)
// //     // {
// //     //     for(int j=0; j<d; j++)
// //     //     {
// //     //         for(int k=0; k<b; k++)
// //     //         {
// //     //             for(int l=0; l<c; l++)
// //     //             {
// //     //                 if(arr[i][l][j][k]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //23
// //     // ctr=0;
// //     // for(int i=0; i<b; i++)
// //     // {
// //     //     for(int j=0; j<a; j++)
// //     //     {
// //     //         for(int k=0; k<d; k++)
// //     //         {
// //     //             for(int l=0; l<c; l++)
// //     //             {
// //     //                 if(arr[j][i][l][k]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);


// //     // //24
// //     // ctr=0;
// //     // for(int i=0; i<b; i++)
// //     // {
// //     //     for(int j=0; j<d; j++)
// //     //     {
// //     //         for(int k=0; k<a; k++)
// //     //         {
// //     //             for(int l=0; l<c; l++)
// //     //             {
// //     //                 if(arr[j][l][i][k]==0) ctr++;
// //     //                 else 
// //     //                 {
// //     //                     ans=max(ctr, ans);
// //     //                     ctr=0;
// //     //                 }
// //     //             }                
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     // printf("%lld\n", ans);
// //     return ans;
// // }







// // ll sln_for_5(int n, int m)
// // {
// //     int a, b, c, d, e;
// //     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

// //     int sz=max(max(max(max(a, b), c), d), e);
// //     short int arr[sz][sz][sz][sz][sz];

// //     for(int i=0; i<sz; i++)
// //     {
// //         for(int j=0; j<sz; j++)
// //         {
// //             for(int k=0; k<sz; k++)
// //             {
// //                 for(int l=0; l<sz; l++)
// //                 {   
// //                     for(int i2=0; i2<sz; i2++)
// //                     {
// //                         arr[i][j][k][l][i2]=0;
// //                     }
// //                 }
// //             }
// //         }
// //     }

// //     for(int i=0; i<m; i++)
// //     {
// //         int p, q, r, s, t;
// //         scanf("%d %d %d %d %d", &p, &q, &r, &s, &t);
// //         arr[p][q][r][s][t]++;
// //     }
// //     int ans=1;
// //     // printf("%d\n", ans);
// //     return ans;
// // }


// // void solve()
// // {
// //     int n, m;
// //     scanf("%d %d", &n, &m);
// //     if(n==1) printf("%lld\n", sln_for_1(n, m));
// //     else if(n==2) printf("%lld\n", sln_for_2(n, m));
// //     else if(n==3) printf("%lld\n", sln_for_3(n, m));
// //     else if(n==4) printf("%lld\n", sln_for_4(n, m));
// //     else if(n==5) printf("%lld\n", sln_for_5(n, m));
// // }


// // int main()
// // {

// //     solve();

// //     return 0;
// // }





































// // void sln_for_2(int n, int m)
// // {
// //     int x, y;
// //     scanf("%d %d", &x, &y);
// //     int sz=max(x, y);
// //     int a[sz][sz];
// //     int szi=x*y;
// //     int ac[szi]={0}, pc[szi]={0};
// //     for(int i=0; i<sz; i++)
// //     {
// //         for(int j=0; j<sz; j++)
// //         {
// //             a[i][j]=0;
// //         }
// //     }

// //     for(int i=0; i<m; i++)
// //     {
// //         int p, q;
// //         scanf("%d %d", &p, &q);
// //         // a[p][q]++;
// //         // a[p+q]
// //         ac[x*p+q]++;
// //     }

// //     // for(int i=0; i<x; i++)
// //     // {
// //     //     for(int j=0; j<y; j++)
// //     //     {
// //     //         int ind=i*x+j;
// //     //         ac[ind]=a[i][j];
// //     //     }
// //     // }

// //     ll ctr=0, ans=0;
// //     for(int i=0; i<szi; i++)
// //     {
// //         if(ac[i]==0) ctr++;
// //         else
// //         {
// //             ans=max(ans, ctr);
// //             ctr=0;
// //         }
// //     }

// //     // ll ctr=0, ans=0;
// //     // for(int i=0; i<x; i++)
// //     // {
// //     //     for(int j=0; j<y; j++)
// //     //     {
// //     //         if(a[i][j]==0) ctr++;
// //     //         else 
// //     //         {
// //     //             ans=max(ctr, ans);
// //     //             ctr=0;
// //     //         }
// //     //     }
// //     // }
// //     // ans=max(ctr, ans);

// //     // ctr=0;
// //     // for(int i=0; i<y; i++)
// //     // {
// //     //     for(int j=0; j<x; j++)
// //     //     {
// //     //         if(a[j][i]==0) ctr++;
// //     //         else 
// //     //         {
// //     //             ans=max(ctr, ans);
// //     //             ctr=0;
// //     //         }
// //     //     }
// //     // }
// //     ans=max(ctr, ans);
// //     printf("%lld\n", ans);
// // }


































// // #include <stdio.h>


// // int earth[25][25]; // Define a 2D array to represent the earth

// // int max(int a, int b) 
// // {
// //     if(a>b) return a;
// //     else return b;
// // }

// // // Function to find the maximum size of newly created earths
// // int max_new_earths(int N, int M, int earth_dims[], int destroyed_regions[][2]) 
// // {
// //     // Initialize the earth array
// //     for(int i=0; i<N; i++) 
// //     {
// //         for(int j=0; j<earth_dims[i]; j++) 
// //         {
// //             earth[i][j]=1;
// //         }
// //     }

// //     // Mark destroyed regions in the earth array
// //     for(int i=0; i<M; i++) 
// //     {
// //         earth[destroyed_regions[i][0]][destroyed_regions[i][1]]=0;
// //     }

// //     int max_earth_size=0;

// //     for(int i=0; i<N; i++) 
// //     {
// //         for(int j=0; j<earth_dims[i]; j++) 
// //         {
// //             if(earth[i][j]==1) 
// //             {
// //                 int current_size=0;
// //                 int row=i;
// //                 while(row<N && earth[row][j]==1) 
// //                 {
// //                     int col=j;
// //                     while(col<earth_dims[row] && earth[row][col]==1) 
// //                     {
// //                         current_size++;
// //                         col++;
// //                     }
// //                     row++;
// //                 }
// //                 max_earth_size= max(max_earth_size, current_size);
// //             }
// //         }
// //     }

// //     return max_earth_size;
// // }

// // int main() 
// // {
// //     int N, M;
// //     scanf("%d %d", &N, &M);

// //     int earth_dims[N];
// //     for(int i=0; i<N; i++) 
// //     {
// //         scanf("%d", &earth_dims[i]);
// //     }

// //     int destroyed_regions[M][2];
// //     for(int i=0; i<M; i++) 
// //     {
// //         scanf("%d %d", &destroyed_regions[i][0], &destroyed_regions[i][1]);
// //     }

// //     int result= max_new_earths(N, M, earth_dims, destroyed_regions);
// //     printf("%d\n", result+1);

// //     return 0;
// // }

















// // // // #include <stdio.h>
// // // // #include <stdlib.h>

// // // // int earth_reorganization(int **earth, int n, int m, int **destroyed_regions) {
// // // //   // Reorder the Earth regions into a single-dimensional array.
// // // //   int *earth_array = malloc(n * n * sizeof(int));
// // // //   int i, j, k;
// // // //   for (i = 0; i < n; i++) {
// // // //     for (j = 0; j < n; j++) {
// // // //       earth_array[k++] = earth[i][j];
// // // //     }
// // // //   }

// // // //   // Find the longest contiguous subsequence of intact regions.
// // // //   int start = 0;
// // // //   int end = 0;
// // // //   int max_size = 0;
// // // //   while (end < n * n) {
// // // //     if (earth_array[end] != -1) {
// // // //       end++;
// // // //     } else {
// // // //       start = end;
// // // //       end++;
// // // //     }
// // // //     if (end - start > max_size) {
// // // //       max_size = end - start;
// // // //     }
// // // //   }

// // // //   // Free the allocated memory.
// // // //   free(earth_array);

// // // //   return max_size;
// // // // }

// // // // int main() {
// // // //   // Get the dimensions of the Earth and the number of destroyed regions.
// // // //   int n, m;
// // // //   scanf("%d %d", &n, &m);

// // // //   // Allocate memory for the Earth regions array.
// // // //   int **earth = malloc(n * sizeof(int *));
// // // //   for (int i = 0; i < n; i++) {
// // // //     earth[i] = malloc(n * sizeof(int));
// // // //   }

// // // //   // Read the Earth regions from the input.
// // // //   for (int i = 0; i < n; i++) {
// // // //     for (int j = 0; j < n; j++) {
// // // //       scanf("%d", &earth[i][j]);
// // // //     }
// // // //   }

// // // //   // Allocate memory for the destroyed regions array.
// // // //   int **destroyed_regions = malloc(m * sizeof(int *));
// // // //   for (int i = 0; i < m; i++) {
// // // //     destroyed_regions[i] = malloc(2 * sizeof(int));
// // // //   }

// // // //   // Read the destroyed regions from the input.
// // // //   for (int i = 0; i < m; i++) {
// // // //     scanf("%d %d", &destroyed_regions[i][0], &destroyed_regions[i][1]);
// // // //   }

// // // //   // Find the maximum size of the newly created earths.
// // // //   int max_size = earth_reorganization(earth, n, m, destroyed_regions);

// // // //   // Print the maximum size to the output.
// // // //   printf("%d\n", max_size);

// // // //   // Free the allocated memory.
// // // //   for (int i = 0; i < n; i++) {
// // // //     free(earth[i]);
// // // //   }
// // // //   free(earth);
// // // //   for (int i = 0; i < m; i++) {
// // // //     free(destroyed_regions[i]);
// // // //   }
// // // //   free(destroyed_regions);

// // // //   return 0;
// // // // }







// // // #include <stdio.h>
// // // #include <stdlib.h>

// // // int main() {
// // //     int N, M;
// // //     scanf("%d %d", &N, &M);
// // //     int *earth = (int *)malloc(N * sizeof(int));
// // //     for(int i = 0; i < N; i++) {
// // //         scanf("%d", &earth[i]);
// // //     }
// // //     int *destroyed = (int *)calloc(N, sizeof(int));
// // //     for(int i = 0; i < M; i++) {
// // //         int region;
// // //         scanf("%d", &region);
// // //         destroyed[region] = 1;
// // //     }
// // //     int max_size = 0, current_size = 0;
// // //     for(int i = 0; i < N; i++) {
// // //         if(destroyed[i] == 0) {
// // //             current_size++;
// // //             if(current_size > max_size) {
// // //                 max_size = current_size;
// // //             }
// // //         } else {
// // //             current_size = 0;
// // //         }
// // //     }
// // //     printf("%d\n", max_size);
// // //     free(earth);
// // //     free(destroyed);
// // //     return 0;
// // // }





// // #include <stdio.h>
// // #include <stdlib.h>

// // // Function to find the maximum size of newly created earths
// // int max_new_earths(int N, int M, int earth_dims[], int destroyed_regions[][2]) {
// //     int max_earth_size = 0;
    
// //     // Create a 2D array to represent the earth regions
// //     int earth[N][N];
// //     for (int i = 0; i < N; i++) {
// //         for (int j = 0; j < N; j++) {
// //             earth[i][j] = 1;
// //         }
// //     }
    
// //     // Mark destroyed regions in the earth array
// //     for (int i = 0; i < M; i++) {
// //         earth[destroyed_regions[i][0]][destroyed_regions[i][1]] = 0;
// //     }

// //     // Iterate through possible reorganizations: row-major and column-major
// //     for (int reorg = 0; reorg < 2; reorg++) {
// //         int new_earth_size = 0;
// //         for (int i = 0; i < N; i++) {
// //             for (int j = 0; j < N; j++) {
// //                 if (reorg == 0) {  // Row-major
// //                     new_earth_size += earth[i][j];
// //                 } else {  // Column-major
// //                     new_earth_size += earth[j][i];
// //                 }
// //             }
// //             int consecutive_zeros = 0;
// //             for (int j = 0; j < N; j++) {
// //                 if (reorg == 0) {  // Row-major
// //                     consecutive_zeros = (earth[i][j] == 0) ? consecutive_zeros + 1 : 0;
// //                 } else {  // Column-major
// //                     consecutive_zeros = (earth[j][i] == 0) ? consecutive_zeros + 1 : 0;
// //                 }
// //                 new_earth_size = (consecutive_zeros > new_earth_size) ? consecutive_zeros : new_earth_size;
// //             }
// //         }
// //         max_earth_size = (new_earth_size > max_earth_size) ? new_earth_size : max_earth_size;
// //     }
    
// //     return max_earth_size;
// // }

// // int main() {
// //     int N, M;
// //     scanf("%d %d", &N, &M);
    
// //     int earth_dims[N];
// //     for (int i = 0; i < N; i++) {
// //         scanf("%d", &earth_dims[i]);
// //     }
    
// //     int destroyed_regions[M][2];
// //     for (int i = 0; i < M; i++) {
// //         scanf("%d %d", &destroyed_regions[i][0], &destroyed_regions[i][1]);
// //     }

// //     int result = max_new_earths(N, M, earth_dims, destroyed_regions);
// //     printf("%d\n", result);

// //     return 0;
// // }








// // #include <stdio.h>
// // #include <stdlib.h>

// // // Function to find the maximum size of newly created earths
// // int max_new_earths(int N, int M, int earth_dims[], int destroyed_regions[][2]) {
// //     int max_earth_size = 0;
    
// //     // Create a 2D array to represent the earth regions
// //     int earth[N][N];
// //     for (int i = 0; i < N; i++) {
// //         for (int j = 0; j < N; j++) {
// //             earth[i][j] = 1;
// //         }
// //     }
    
// //     // Mark destroyed regions in the earth array
// //     for (int i = 0; i < M; i++) {
// //         earth[destroyed_regions[i][0]][destroyed_regions[i][1]] = 0;
// //     }

// //     // Iterate through possible reorganizations: row-major and column-major
// //     for (int reorg = 0; reorg < 2; reorg++) {
// //         for (int i = 0; i < N; i++) {
// //             int consecutive_zeros = 0;
// //             for (int j = 0; j < N; j++) {
// //                 if (reorg == 0) {  // Row-major
// //                     consecutive_zeros = (earth[i][j] == 0) ? 0 : consecutive_zeros + 1;
// //                 } else {  // Column-major
// //                     consecutive_zeros = (earth[j][i] == 0) ? 0 : consecutive_zeros + 1;
// //                 }
// //                 max_earth_size = (consecutive_zeros > max_earth_size) ? consecutive_zeros : max_earth_size;
// //             }
// //         }
// //     }
    
// //     return max_earth_size;
// // }

// // int main() {
// //     int N, M;
// //     scanf("%d %d", &N, &M);
    
// //     int earth_dims[N];
// //     for (int i = 0; i < N; i++) {
// //         scanf("%d", &earth_dims[i]);
// //     }
    
// //     int destroyed_regions[M][2];
// //     for (int i = 0; i < M; i++) {
// //         scanf("%d %d", &destroyed_regions[i][0], &destroyed_regions[i][1]);
// //     }

// //     int result = max_new_earths(N, M, earth_dims, destroyed_regions);
// //     printf("%d\n", result);

// //     return 0;
// // }






