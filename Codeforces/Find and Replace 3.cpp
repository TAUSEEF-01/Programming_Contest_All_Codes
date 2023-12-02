#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)

char s[100007], k[100007], r[100007];

int strlen(char a[])
{
    int ctr=0;
    for(int i=0; ; i++)
    {
        if(a[i]=='\0')
        {
            return ctr;
        }
        ctr++;
    }
}

int min(int a, int b)
{
    if(a>b) return b;
    else return a;
}
    
void solve()
{
    scanf(" %s", s);
    scanf(" %s", k);
    scanf(" %s", r);
    
    int sz=strlen(s), n=strlen(k), p=strlen(r);

    int done=0;
    for(int i=0; i<sz; i++)
    {
        int flag=0;
        if(s[i]==k[0] && done==0)
        {
            for(int j=0, l=i; j<n; j++, l++)
            {
                if(s[l]!=k[j])
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                for(int j=0, l=i; j<p; j++, l++)
                {
                    printf("%c", r[j]);
                }
                i+=n;
                done++;
                i--;
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}


int main()
{

    solve();

    return 0;
}