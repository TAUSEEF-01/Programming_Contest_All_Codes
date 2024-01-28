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
    char a[100007];
    while (scanf(" %s", a) != EOF)
    {
        int ctr = 1, n = strlen(a);
        int pos[250] = {0};
        for (int i = 0; i < n; i++)
        {
            if (pos[a[i]] == 0)
            {
                pos[a[i]] = ctr;
                ctr++;
            }
        }

        char temp[n * 2];
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (pos[a[i]] <= 9)
                temp[l++] = pos[a[i]] + '0';
            else
            {
                int s = pos[a[i]] % 10, f = (pos[a[i]] / 10) % 10;
                temp[l++] = (char)(f + '0');
                temp[l++] = (char)(s + '0');
            }
        }

        for (int i = 0; i < l; i++)
        {
            if (temp[i] == '2')
                temp[i] = '5';
            else if (temp[i] == '5')
                temp[i] = '2';
            else if (temp[i] == '9')
                temp[i] = '6';
            else if (temp[i] == '6')
                temp[i] = '9';
        }

        for (int i = 0; i < l; i++)
            printf("%c", temp[i]);
        printf("\n");
    }
}

int main()
{

    solve();

    return 0;
}

// int temp[n];
// for (int i = 0; i < n; i++)
// {
//     temp[i] = pos[a[i]];
//     if (pos[a[i]] % 10 == 2)
//     {
//         temp[i] /= 10;
//         temp[i] = temp[i] * 10 + 5;
//     }
//     else if (pos[a[i]] % 10 == 5)
//     {
//         temp[i] /= 10;
//         temp[i] = temp[i] * 10 + 2;
//     }
//     else if (pos[a[i]] % 10 == 9)
//     {
//         temp[i] /= 10;
//         temp[i] = temp[i] * 10 + 6;
//     }
//     else if (pos[a[i]] % 10 == 6)
//     {
//         temp[i] /= 10;
//         temp[i] = temp[i] * 10 + 9;
//     }
// }

// if(ctr==2)
// pos[a[i]]=5;
// else if(ctr==5)
// pos[a[i]]=2;
// else if(ctr==9)
// pos[a[i]]=6;
// else if(ctr==6)
// pos[a[i]]=9;
