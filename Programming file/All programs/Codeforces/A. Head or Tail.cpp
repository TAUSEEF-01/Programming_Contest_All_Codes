#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)


ll days_count_300(ll d, ll m, ll y)
{
    return ((y-1)/100)*5LL + (y-1)*300LL + (m-1)*30LL + d;
}

ll days_count_300_100th(ll d, ll m, ll y)
{
    ll days=((y-1)/100)*5LL + (y-1)*300LL + d;
    int arr_month[]={30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
    for(int i=0; i<m-1; i++) 
    {
        days+= arr_month[i];
    }
    return days;
}

ll days_count_999(ll d, ll m, ll y)
{
    ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
    int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
    for(int i=0; i<m-1; i++) 
    {
        days+= arr_month[i];
    }
    return days;
}

ll days_count_999_999th(ll d, ll m, ll y)
{
    ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
    int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
    for(int i=0; i<m-1; i++) 
    {
        days+= arr_month[i];
    }
    return days;
}



void solve()
{
    ll year_type;
    scanf("%lld daysAYear", &year_type);

    ll d, m, y;
    scanf("%lld-%lld-%lld", &d, &m, &y);

    if(year_type==300)
    {
        ll days;
        if(y%100==0 && y>0) 
        {
            days=days_count_300_100th(d, m, y);
        }
        else
        {
            days=days_count_300(d, m, (y!=0)? y:1);
        }

        ll week_day=days%7;

        ll d9=0, m9=1, y9=0;
        y9= days/999;
        days-= y9*999;
        days-= (y9/999);

        while(days<0)
        {
            if(y9%999==1 && y9>1)
            {
                days+= 1000;
            }
            else
            {
                days+= 999;
            }
            y9--;
        }

        if(y9%999!=0)
        {
            int arr_days[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
            for(int i=0; i<15; i++)
            {
                if(days>arr_days[i])
                {
                    m9++;
                    days-= arr_days[i];
                }
                else
                {
                    break;
                }
                
            }
        }
        else
        {
            int arr_days[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
            for(int i=0; i<15; i++)
            {
                if(days>arr_days[i])
                {
                    m9++;
                    days-= arr_days[i];
                }
                else
                {
                    break;
                }
            }
        }

        d9=days;
        printf("%lld-%lld-%lld\n", d9, m9, y9);
        char week[7][100]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        printf("%s\n", week[week_day]);
    }

    /*2nd part: 999 days a year*/
    else
    {
        ll days;
        if(y%999==0 && y>0) 
        {
            days=days_count_999_999th(d, m, y);
        }
        else
        {
            days=days_count_999(d, m, (y!=0)? y:1);
        }
        // printf("%lld\n", days);

        ll week_day=days%7;

        ll d3=0, m3=1, y3=0;
        y3= days/300;
        days-= y3*300;
        days-= (y3/100)*5;
        // printf("%lld\n", days);

        while(days<0)
        {
            if(y3%100==1 && y3>1)
            {
                days+= 305;
            }
            else
            {
                days+= 300;
            }
            y3--;
        }

        if(y3%100!=0)
        {
            int arr_days[]={30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
            for(int i=0; i<10; i++)
            {
                if(days>arr_days[i])
                {
                    m3++;
                    days-= arr_days[i];
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            int arr_days[]={30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
            for(int i=0; i<10; i++)
            {
                if(days>arr_days[i])
                {
                    m3++;
                    days-= arr_days[i];
                }
                else
                {
                    break;
                }
            }
        }

        d3=days;
        printf("%lld-%lld-%lld\n", d3, m3, y3);
        char week[7][100]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
        printf("%s\n", week[week_day]);
    }
}


int main()
{
    
    solve();
    
    return 0;
}

