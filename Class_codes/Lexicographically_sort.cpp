#include <stdio.h>
#include <math.h>

int strsize(char a[]);

void swap(char a[], char b[]);

int check_lexiocographically(char a[], char b[]);

int main()
{
    // int n;
    // scanf("%d", &n);

    // char str[n][1000];
    // for(int i=0; i<n; i++)
    // {
    //     scanf(" %[^\n]", str[i]);
    // }
    char a[100000];
    char str[100][1000];

    scanf(" %[^\n]", a);
    int l = 0, asz = strsize(a);
    int n = 0, pos = 0;
    for (int i = 0; i < asz; i++)
    {
        if (a[i] == ' ' || a[i] == '.')
        {
            n++;
            str[l][pos] = '\0';
            l++;
            pos = 0;
            continue;
        }
        str[l][pos++] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (check_lexiocographically(str[i], str[j]))
            {
                swap(str[i], str[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%s\n", str[i]);

    return 0;
}

int strsize(char a[])
{
    int ctr = 0;
    for (int i = 0;; i++)
    {
        if (a[i] == '\0')
        {
            return ctr;
        }
        ctr++;
    }
}

void swap(char a[], char b[])
{
    int s1 = strsize(a) + 1, s2 = strsize(b) + 1;
    char temp[s1 + s2];
    for (int i = 0; i < s1 + 1; i++)
    {
        temp[i] = a[i];
        if (a[i] == '\0')
            break;
    }

    for (int i = 0; i < s2 + 1; i++)
    {
        a[i] = b[i];
        if (b[i] == '\0')
            break;
    }

    for (int i = 0; i < s1 + 1; i++)
    {
        b[i] = temp[i];
        if (temp[i] == '\0')
            break;
    }
}

int check_lexiocographically(char a[], char b[])
{
    int s1 = strsize(a), s2 = strsize(b);
    int x = s1, y = s2;

    if (s1 > s2)
    {
        int temp = s1;
        s1 = s2;
        s2 = temp;
    }

    for (int i = 0; i < s1 + 1; i++)
    {
        if (a[i] < b[i])
        {
            return 0;
        }
        else if (a[i] > b[i])
        {
            return 1;
        }
    }

    return 0;
}