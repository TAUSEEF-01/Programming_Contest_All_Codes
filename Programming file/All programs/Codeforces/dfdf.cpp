#include <stdio.h>
#include <math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

// ll sln_for_1(int n, int m)
// {
//     int x;
//     scanf("%d", &x);
//     int a[x];
//     for (int i = 0; i < x; i++)
//     {
//         a[i] = 0;
//     }

//     for (int i = 0; i < m; i++)
//     {
//         int p;
//         scanf("%d", &p);
//         a[p] = 1;
//     }

//     ll ctr = 0, ans = 0;
//     for (int i = 0; i < x; i++)
//     {
//         if (a[i] == 0)
//             ctr++;
//         else
//         {
//             ans = max(ctr, ans);
//             ctr = 0;
//         }
//     }
//     ans = max(ctr, ans);

//     return ans;
// }

// ll sln_for_2(int n, int m)
// {
    //     int x, y;
    //     scanf("%d %d", &x, &y);
    //     int sz = max(x, y) + 1;
    //     short int a[sz][sz];

    //     for (int i = 0; i < sz; i++)
    //     {
    //         for (int j = 0; j < sz; j++)
    //         {
    //             a[i][j] = 0;
    //         }
    //     }

    //     for (int i = 0; i < m; i++)
    //     {
    //         int p, q;
    //         scanf("%d %d", &p, &q);
    //         a[p][q] = 1;
    //     }

    //     ll ctr = 0, ans = 0;
    //     for (int i = 0; i < x; i++)
    //     {
    //         for (int j = 0; j < y; j++)
    //         {
    //             if (a[i][j] == 0)
    //                 ctr++;
    //             else
    //             {
    //                 ans = max(ctr, ans);
    //                 ctr = 0;
    //             }
    //         }
    //     }
    //     ans = max(ctr, ans);

    //     ctr = 0;
    //     for (int i = 0; i < y; i++)
    //     {
    //         for (int j = 0; j < x; j++)
    //         {
    //             if (a[j][i] == 0)
    //                 ctr++;
    //             else
    //             {
    //                 ans = max(ctr, ans);
    //                 ctr = 0;
    //             }
    //         }
    //     }
    //     ans = max(ctr, ans);

    //     return ans;
    // }

    // ll sln_for_3(int n, int m)
    // {
    //     int x, y, z;
    //     scanf("%d %d %d", &x, &y, &z);

    //     int sz = max(max(x, y), z) + 1;
    //     short int a[x][y][z];

    //     for (int i = 0; i < x; i++)
    //     {
    //         for (int j = 0; j < y; j++)
    //         {
    //             for (int k = 0; k < z; k++)
    //             {
    //                 a[i][j][k] = 0;
    //             }
    //         }
    //     }

    //     for (int i = 0; i < m; i++)
    //     {
    //         int p, q, r;
    //         scanf("%d %d %d", &p, &q, &r);
    //         a[p][q][r] = 1;
    //     }

    //     ll ctr = 0, ans = 0;

    //     for (int i = 0; i < x; i++)
    //     {
    //         for (int j = 0; j < y; j++)
    //         {
    //             for (int k = 0; k < z; k++)
    //             {

    //                 if (!a[i][j][k])
    //                 {
    //                     ctr++;
    //                     ans = max(ctr, ans);
    //                 }
    //                 else
    //                     ctr = 0;
    //             }
    //         }
    //     }
    //     ctr = 0;
    //     for (int i = 0; i < x; i++)
    //     {
    //         for (int k = 0; k < z; k++)
    //         {
    //             for (int j = 0; j < y; j++)
    //             {

    //                 if (!a[i][j][k])
    //                 {
    //                     ctr++;
    //                     ans = max(ctr, ans);
    //                 }
    //                 else
    //                     ctr = 0;
    //             }
    //         }
    //     }
    //     ctr = 0;
    //     for (int j = 0; j < y; j++)
    //     {
    //         for (int i = 0; i < x; i++)
    //         {
    //             for (int k = 0; k < z; k++)
    //             {

    //                 if (!a[i][j][k])
    //                 {
    //                     ctr++;
    //                     ans = max(ctr, ans);
    //                 }
    //                 else
    //                     ctr = 0;
    //             }
    //         }
    //     }
    //     ctr = 0;
    //     for (int k = 0; k < z; k++)
    //     {
    //         for (int i = 0; i < x; i++)
    //         {
    //             for (int j = 0; j < y; j++)
    //             {

    //                 if (!a[i][j][k])
    //                 {
    //                     ctr++;
    //                     ans = max(ctr, ans);
    //                 }
    //                 else
    //                     ctr = 0;
    //             }
    //         }
    //     }
    //     ctr = 0;
    //     for (int j = 0; j < y; j++)
    //     {
    //         for (int k = 0; k < z; k++)
    //         {
    //             for (int i = 0; i < x; i++)
    //             {

    //                 if (!a[i][j][k])
    //                 {
    //                     ctr++;
    //                     ans = max(ctr, ans);
    //                 }
    //                 else
    //                     ctr = 0;
    //             }
    //         }
    //     }
    //     ctr = 0;
    //     for (int j = 0; j < y; j++)
    //     {
    //         for (int k = 0; k < z; k++)
    //         {
    //             for (int i = 0; i < x; i++)
    //             {

    //                 if (!a[i][j][k])
    //                 {
    //                     ctr++;
    //                     ans = max(ctr, ans);
    //                 }
    //                 else
    //                     ctr = 0;
    //             }
    //         }
    //     }

    //     return ans;
    // }

    // ll sln_for_4(int n, int m)
    // {
    //     int a, b, c, d;
    //     scanf("%d %d %d %d", &a, &b, &c, &d);

    //     int sz = max(max(max(a, b), c), d) + 1;
    //     sz = 10;
    //     short int arr[a][b][c][d];

    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int l = 0; l < d; l++)
    //                 {
    //                     arr[i][j][k][l] = 0;
    //                 }
    //             }
    //         }
    //     }

    //     for (int i = 0; i < m; i++)
    //     {
    //         int p, q, r, s;
    //         scanf("%d %d %d %d", &p, &q, &r, &s);
    //         arr[p][q][r][s] = 1;
    //     }

    //     ll ctr = 0, ans = 0;

    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     if (!arr[i][j][k][p])
    //                     {
    //                         ctr++;
    //                         ans = max(ctr, ans);
    //                     }
    //                     else
    //                     {
    //                         ctr = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     return ans;
    // }

    // ll sln_for_5(int n, int m)
    // {
    //     int a, b, c, d, e;
    //     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    //     int sz = max(max(max(max(a, b), c), d), e) + 1;
    //     sz = 7;
    //     short int arr[a][b][c][d][e];

    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int l = 0; l < d; l++)
    //                 {
    //                     for (int p = 0; p < e; p++)
    //                     {
    //                         arr[i][j][k][l][p] = 0;
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     for (int i = 0; i < m; i++)
    //     {
    //         int p, q, r, s, t;
    //         scanf("%d %d %d %d %d", &p, &q, &r, &s, &t);
    //         arr[p][q][r][s][t] = 1;
    //     }
    //     ll ctr = 0, ans = 0;

    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int i = 0; i < a; i++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int j = 0; j < b; j++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int k = 0; k < c; k++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int q = 0; q < e; q++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int q = 0; q < e; q++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int q = 0; q < e; q++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int p = 0; p < d; p++)
    //     {
    //         for (int q = 0; q < e; q++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int i = 0; i < a; i++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int j = 0; j < b; j++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int p = 0; p < d; p++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int p = 0; p < d; p++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int k = 0; k < c; k++)
    //         {
    //             for (int p = 0; p < d; p++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int i = 0; i < a; i++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int k = 0; k < c; k++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int j = 0; j < b; j++)
    //             {
    //                 for (int k = 0; k < c; k++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int i = 0; i < a; i++)
    //                 {
    //                     for (int j = 0; j < b; j++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     ctr = 0;
    //     for (int q = 0; q < e; q++)
    //     {
    //         for (int p = 0; p < d; p++)
    //         {
    //             for (int k = 0; k < c; k++)
    //             {
    //                 for (int j = 0; j < b; j++)
    //                 {
    //                     for (int i = 0; i < a; i++)
    //                     {
    //                         if (!arr[i][j][k][p][q])
    //                         {
    //                             ctr++;
    //                             ans = max(ctr, ans);
    //                         }
    //                         else
    //                         {
    //                             ctr = 0;
    //                         }
    //                     }
    //                 }
    //             }
    //         }
    //     }

    //     return ans;
    // }

    void solve()
    {
        int n, m;
        scanf("%d %d", &n, &m);
        if (n == 1)
        {
            int x;
            scanf("%d", &x);
            int a[x];
            for (int i = 0; i < x; i++)
            {
                a[i] = 0;
            }

            for (int i = 0; i < m; i++)
            {
                int p;
                scanf("%d", &p);
                a[p] = 1;
            }

            ll ctr = 0, ans = 0;
            for (int i = 0; i < x; i++)
            {
                if (a[i] == 0)
                    ctr++;
                else
                {
                    ans = max(ctr, ans);
                    ctr = 0;
                }
            }
            ans = max(ctr, ans);
            printf("%lld\n", ans);
        }
        else if (n == 2)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            int sz = max(x, y) + 1;
            short int a[sz][sz];

            for (int i = 0; i < sz; i++)
            {
                for (int j = 0; j < sz; j++)
                {
                    a[i][j] = 0;
                }
            }

            for (int i = 0; i < m; i++)
            {
                int p, q;
                scanf("%d %d", &p, &q);
                a[p][q] = 1;
            }

            ll ctr = 0, ans = 0;
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (a[i][j] == 0)
                        ctr++;
                    else
                    {
                        ans = max(ctr, ans);
                        ctr = 0;
                    }
                }
            }
            ans = max(ctr, ans);

            ctr = 0;
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < x; j++)
                {
                    if (a[j][i] == 0)
                        ctr++;
                    else
                    {
                        ans = max(ctr, ans);
                        ctr = 0;
                    }
                }
            }
            ans = max(ctr, ans);
            printf("%lld\n", ans);
        }
        else if (n == 3)
        {
            int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int sz = max(max(x, y), z) + 1;
        short int a[x][y][z];

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < z; k++)
                {
                    a[i][j][k] = 0;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            int p, q, r;
            scanf("%d %d %d", &p, &q, &r);
            a[p][q][r] = 1;
        }

        ll ctr = 0, ans = 0;

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
            printf("%lld\n", ans);
        }
        else if (n == 4)
        {
            int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int sz = max(max(max(a, b), c), d) + 1;
        sz = 10;
        short int arr[a][b][c][d];

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int l = 0; l < d; l++)
                    {
                        arr[i][j][k][l] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            int p, q, r, s;
            scanf("%d %d %d %d", &p, &q, &r, &s);
            arr[p][q][r][s] = 1;
        }

        ll ctr = 0, ans = 0;

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

            printf("%lld\n", ans);
        }
        else if (n == 5)
        {
            int a, b, c, d, e;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        int sz = max(max(max(max(a, b), c), d), e) + 1;
        sz = 7;
        short int arr[a][b][c][d][e];

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    for (int l = 0; l < d; l++)
                    {
                        for (int p = 0; p < e; p++)
                        {
                            arr[i][j][k][l][p] = 0;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            int p, q, r, s, t;
            scanf("%d %d %d %d %d", &p, &q, &r, &s, &t);
            arr[p][q][r][s][t] = 1;
        }
        ll ctr = 0, ans = 0;

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

            printf("%lld\n", ans);
        }
    }

    int main()
    {

        solve();

        return 0;
    }
