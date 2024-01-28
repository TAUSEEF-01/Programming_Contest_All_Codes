#include <stdio.h>
#include <string.h>
#include <math.h>
#define lli long long int

lli Decode300(lli dd, lli mm, lli yyy)
{
    lli dayCount = 0;
    bool isHoly = (yyy % 100 == 0) ? true : false;
    dayCount += (yyy - 1) * 300;
    dayCount += 5 * ((yyy - 1) / 100);
    lli daysInMonths[] = {0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    lli daysInHolyMonths[] = {0, 30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
    for (lli i = 0; i < mm; i++)
        dayCount += isHoly ? daysInHolyMonths[i] : daysInMonths[i];
    dayCount += dd;
    return dayCount;
}

void Encode300(lli dayCount)
{
    lli yyy = dayCount / 300;
    dayCount %= 300;
    dayCount -= ((yyy - 1) / 100) * 5; // negating leap years.
    lli daysInMonths[] = {0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    lli daysInHolyMonths[] = {0, 30, 31, 30, 31, 30, 31, 31, 31, 30, 30};

    /**/
    while (dayCount < 0)
    {
        if (yyy % 100 == 1 && yyy > 1)
            dayCount += 305;
        else
            dayCount += 300;
        yyy--;
    }
    lli mm = 1;
    if (yyy % 100 == 0)
    {
        for (lli i = 1; i < 11; i++)
            if (dayCount - daysInHolyMonths[i] > 0)
            {
                mm++;
                dayCount -= daysInHolyMonths[i];
            }
    }
    else
    {
        for (lli i = 1; i < 11; i++)
            if (dayCount - daysInMonths[i] > 0)
            {
                mm++;
                dayCount -= daysInMonths[i];
            }
    }
    printf("%lld-%lld-%lld\n", dayCount, mm, yyy);
}

lli Decode999(lli dd, lli mm, lli yyy)
{
    lli dayCount = 0;
    bool isBlackCutter = (yyy % 999 == 0) ? true : false;
    dayCount += (yyy - 1) * 999;
    dayCount += 1 * ((yyy - 1) / 999);
    lli daysInMonths[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
    lli daysInBlackMonths[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
    for (lli i = 0; i < mm; i++)
        dayCount += isBlackCutter ? daysInBlackMonths[i] : daysInMonths[i];
    dayCount += dd;
    return dayCount;
}

void Encode999(lli dayCount)
{
    lli yyy = dayCount / 999;
    dayCount %= 999;
    dayCount -= ((yyy - 1) / 999) * 1; // negating leap year days
    lli daysInMonths[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
    lli daysInBlackMonths[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};

    /**/
    while (dayCount < 0)
    {
        if (yyy % 999 == 1 && yyy > 1)
            dayCount += 1000;
        else
            dayCount += 999;
        yyy--;
    }
    lli mm = 1;
    if (yyy % 999 == 0)
    {
        for (lli i = 1; i < 16; i++)
            if (dayCount - daysInBlackMonths[i] > 0)
            {
                mm++;
                dayCount -= daysInBlackMonths[i];
            }
    }
    else
    {
        for (lli i = 1; i < 16; i++)
            if (dayCount - daysInMonths[i] > 0)
            {
                mm++;
                dayCount -= daysInMonths[i];
            }
    }
    printf("%lld-%lld-%lld\n", dayCount, mm, yyy);
}


void hehe()
{
    char s[100];
    scanf("%s", s);
    lli dd, mm, yyy;
    scanf("%lld-%lld-%lld", &dd, &mm, &yyy);
    char days[][100] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    lli dayCount = 0;
    if (s[0] == '3')
    {
        dayCount = Decode300(dd, mm, yyy);
        Encode999(dayCount);
    }
    if (s[0] == '9')
    {
        dayCount = Decode999(dd, mm, yyy);
        Encode300(dayCount);
    }
    printf("%s\n", days[dayCount % 7]);
    // printf("%lld\n", dayCount);
}
int main()
{
    // lli t;
    // scanf("%lld", &t);
    // while (t--)
        hehe();
}