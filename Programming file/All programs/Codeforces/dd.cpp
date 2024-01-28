#include <stdio.h>
#include <math.h>
#define int long long

int n, m;
int a[5];
int max(int &a, int &b)
{
    if (a > b)
        return a;
    else
        return b;
}

void solve()
{
    scanf("%lld %lld", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    int b[m][5];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &b[i][j]);
        }
    }
    int ans = 0, ctr = 0;
    if (n == 1)
    {
        int arr[a[0]] = {};
        for (int i = 0; i < m; i++)
        {
            arr[b[i][0]] = 1;
        }
        for (int i = 0; i < a[0]; i++)
        {
            if (!arr[i])
            {
                ctr++;
                ans = max(ctr, ans);
            }
            else
                ctr = 0;
        }
    }
    else if (n == 2)
    {
        int arr[a[0]][a[1]] = {};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[b[i][0]][b[i][1]] = 1;
            }
        }
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                if (!arr[i][j])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
        ctr = 0;
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                if (!arr[i][j])
                {
                    ctr++;
                    ans = max(ctr, ans);
                }
                else
                    ctr = 0;
            }
        }
    }
    else if (n == 3)
    {
        int arr[a[0]][a[1]][a[2]] = {};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[b[i][0]][b[i][1]][b[i][2]] = 1;
            }
        }
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {

                    if (!arr[i][j][k])
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {

                    if (!arr[i][j][k])
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {

                    if (!arr[i][j][k])
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {

                    if (!arr[i][j][k])
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {

                    if (!arr[i][j][k])
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {

                    if (!arr[i][j][k])
                    {
                        ctr++;
                        ans = max(ctr, ans);
                    }
                    else
                        ctr = 0;
                }
            }
        }
    }
    else if (n == 4)
    {
        int arr[a[0]][a[1]][a[2]][a[3]] = {};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[b[i][0]][b[i][1]][b[i][2]][b[i][3]] = 1;
            }
        }
        ctr = 0;
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
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
    }
    else
    {
        int arr[a[0]][a[1]][a[2]][a[3]][a[4]];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[b[i][0]][b[i][1]][b[i][2]][b[i][3]][b[i][4]] = 1;
            }
        }
        ctr = 0;
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int i = 0; i < a[0]; i++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int j = 0; j < a[1]; j++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int k = 0; k < a[2]; k++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int q = 0; q < a[4]; q++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int q = 0; q < a[4]; q++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int q = 0; q < a[4]; q++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int p = 0; p < a[3]; p++)
        {
            for (int q = 0; q < a[4]; q++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int i = 0; i < a[0]; i++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int j = 0; j < a[1]; j++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int p = 0; p < a[3]; p++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int p = 0; p < a[3]; p++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int k = 0; k < a[2]; k++)
            {
                for (int p = 0; p < a[3]; p++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int i = 0; i < a[0]; i++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int k = 0; k < a[2]; k++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int j = 0; j < a[1]; j++)
                {
                    for (int k = 0; k < a[2]; k++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int i = 0; i < a[0]; i++)
                    {
                        for (int j = 0; j < a[1]; j++)
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
        for (int q = 0; q < a[4]; q++)
        {
            for (int p = 0; p < a[3]; p++)
            {
                for (int k = 0; k < a[2]; k++)
                {
                    for (int j = 0; j < a[1]; j++)
                    {
                        for (int i = 0; i < a[0]; i++)
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
    }

    printf("%lld\n", ans);
}


int main()
{
    
    solve();

    return 0;
}