#include <stdio.h>

// Defines the two calendar systems.
typedef enum
{
    CALENDAR_300DAYS_AYEAR,
    CALENDAR_999DAYS_AYEAR
} Calendar;

// Calculates the number of days in the given month in the given calendar system.
int calculate_days_in_month(Calendar calendar, int year, int month)
{
    switch (calendar)
    {
    case CALENDAR_300DAYS_AYEAR:
        if (month == 10)
        {
            return 30;
        }
        else
        {
            return 31;
        }
    case CALENDAR_999DAYS_AYEAR:
        if (month == 12 || month == 13 || month == 14 || month == 15)
        {
            return 31;
        }
        else
        {
            return 29;
        }
    default:
        return 0;
    }
}

// Calculates the number of days that have passed since the start of the given
// calendar system.
int calculate_days_passed(Calendar calendar, int year, int month, int day)
{
    int days_passed = 0;
    switch (calendar)
    {
    case CALENDAR_300DAYS_AYEAR:
        days_passed = (year - 1) * 300 + month * 30 + day;
        break;
    case CALENDAR_999DAYS_AYEAR:
        days_passed = (year - 1) * 999 + month * 29 + day;
        break;
    }
    return days_passed;
}

// Converts the given date from the source calendar system to the destination
// calendar system.
void convert_date(Calendar source_calendar, int source_year, int source_month,
                  int source_day, Calendar destination_calendar, int *destination_year,
                  int *destination_month, int *destination_day)
{
    // Calculate the number of days that have passed since the start of both
    // calendar systems.
    int source_days_passed = calculate_days_passed(
        source_calendar, source_year, source_month, source_day);
    int destination_days_passed = calculate_days_passed(
        destination_calendar, *destination_year, *destination_month,
        *destination_day);

    // Calculate the difference in the number of days that have passed.
    int days_difference = source_days_passed - destination_days_passed;

    // Update the destination date.
    *destination_day += days_difference;
    while (*destination_day < 1)
    {
        *destination_month--;
        if (*destination_month < 1)
        {
            *destination_year--;
            *destination_month = 12;
        }
        *destination_day += calculate_days_in_month(
            destination_calendar, *destination_year, *destination_month);
    }

    while (*destination_day > calculate_days_in_month(
                                  destination_calendar, *destination_year, *destination_month))
    {
        *destination_day -= calculate_days_in_month(
            destination_calendar, *destination_year, *destination_month);
        *destination_month++;
        if (*destination_month > 12)
        {
            *destination_year++;
            *destination_month = 1;
        }
    }
}

// Calculates the day of the week of the given date.
int calculate_day_of_week(int days_passed)
{
    return (days_passed % 7 + 1) % 7;
}

int main()
{
    // Get the input date and calendar system from the user.
    Calendar source_calendar;
    int source_year, source_month, source_day;
    printf("Enter the source calendar system (300 or 999): ");
    scanf("%d", &source_calendar);
    printf("Enter the source date (day-month-year): ");
    scanf("%d-%d-%d", &source_day, &source_month, &source_year);

    // Get the destination calendar system from the user.
    Calendar destination_calendar;
    printf("Enter the destination calendar system (300 or 999): ");
    scanf("%d", &destination_calendar);

    // Convert the date.
    int destination_year, destination_month, destination_day;
    convert_date(source_calendar, source_year, source_month, source_day,
                 destination_calendar, &destination_year, &destination_month,
                 &destination_day);

    // Calculate the day of the week of the converted date.
    int day_of_week = calculate_day_of_week(destination_year);

    // Print the converted date and the day of the week.
    printf("The converted date is %d-%d-%d. The day of the week is %d.\n",
           destination_day, destination_month, destination_year, day_of_week);

    return 0;
}

#include <stdio.h>
#include <string.h>

// A function to check if a year is a holyPrayer year in the 300daysAYear calendar
int is_holyPrayer(int year)
{
    return year % 100 == 0;
}

// A function to check if a year is a blackCutter year in the 999daysAYear calendar
int is_blackCutter(int year)
{
    return year % 999 == 0;
}

// A function to convert a date from the 300daysAYear calendar to the number of days since the start of the common era
int to_days_300(int day, int month, int year)
{
    int days = 0;
    // Add the days for each year
    for (int i = 1; i < year; i++)
    {
        if (is_holyPrayer(i))
        {
            days += 305;
        }
        else
        {
            days += 300;
        }
    }
    // Add the days for each month
    for (int i = 1; i < month; i++)
    {
        if (is_holyPrayer(year) && (i == 2 || i == 4 || i == 6 || i == 7 || i == 8))
        {
            days += 31;
        }
        else
        {
            days += 30;
        }
    }
    // Add the days for the current month
    days += day;
    return days;
}

// A function to convert a date from the 999daysAYear calendar to the number of days since the start of the common era
int to_days_999(int day, int month, int year)
{
    int days = 0;
    // Add the days for each year
    for (int i = 1; i < year; i++)
    {
        if (is_blackCutter(i))
        {
            days += 1000;
        }
        else
        {
            days += 999;
        }
    }
    // Add the days for each month
    int month_days[] = {3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
    for (int i = 0; i < month - 1; i++)
    {
        days += month_days[i];
    }
    // Add the extra day for the blackCutter year
    if (is_blackCutter(year) && month > 10)
    {
        days++;
    }
    // Add the days for the current month
    days += day;
    return days;
}

// A function to convert a number of days since the start of the common era to a date in the 300daysAYear calendar
void from_days_300(int days, int *day, int *month, int *year)
{
    *year = *month = *day = 1;
    // Subtract the days for each year
    while (days > (is_holyPrayer(*year) ? 305 : 300))
    {
        if (is_holyPrayer(*year))
        {
            days -= 305;
        }
        else
        {
            days -= 300;
        }
        (*year)++;
    }
    // Subtract the days for each month
    while (days > (is_holyPrayer(*year) && (*month == 2 || *month == 4 || *month == 6 || *month == 7 || *month == 8) ? 31 : 30))
    {
        if (is_holyPrayer(*year) && (*month == 2 || *month == 4 || *month == 6 || *month == 7 || *month == 8))
        {
            days -= 31;
        }
        else
        {
            days -= 30;
        }
        (*month)++;
    }
    // The remaining days are the current day
    *day = days;
}

// A function to convert a number of days since the start of the common era to a date in the999daysAYear calendar
void from_days_999(int days, int *day, int *month, int *year)
{
    *year = *month = *day = 1;
    // Subtract the days for each year
    while (days > (is_blackCutter(*year) ? 1000 : 999))
    {
        if (is_blackCutter(*year))
        {
            days -= 1000;
        }
        else
        {
            days -= 999;
        }
        (*year)++;
    }
    // Subtract the days for each month
    int month_days[] = {3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
    while (days > month_days[*month - 1])
    {
        days -= month_days[*month - 1];
        (*month)++;
    }
    // Subtract the extra day for the blackCutter year
    if (is_blackCutter(*year) && *month > 10)
    {
        days--;
    }
    // The remaining days are the current day
    *day = days;
}

// A function to convert a date from one calendar system to another
void convert_date(char *calendar, int day, int month, int year)
{
    int days;
    int new_day, new_month, new_year;
    // Convert the date to the number of days since the start of the common era
    if (strcmp(calendar, "300daysAYear") == 0)
    {
        days = to_days_300(day, month, year);
    }
    else if (strcmp(calendar, "999daysAYear") == 0)
    {
        days = to_days_999(day, month, year);
    }
    else
    {
        printf("Invalid calendar system.\n");
        return;
    }
    // Convert the number of days to the date in the alternate calendar system
    if (strcmp(calendar, "300daysAYear") == 0)
    {
        from_days_999(days, &new_day, &new_month, &new_year);
        printf("999daysAYear %d-%d-%d\n", new_day, new_month, new_year);
    }
    else if (strcmp(calendar, "999daysAYear") == 0)
    {
        from_days_300(days, &new_day, &new_month, &new_year);
        printf("300daysAYear %d-%d-%d\n", new_day, new_month, new_year);
    }
    // Calculate the day of the week using Zeller's formula
    int q = new_day;
    int m = new_month;
    int y = new_year;
    if (m == 1 || m == 2)
    {
        m += 12;
        y--;
    }
    int h = (q + 13 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    char *weekdays[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    printf("%s\n", weekdays[h]);
}

// The main function to read the input and call the convert_date function
int main()
{
    char calendar[20];
    int day, month, year;
    scanf("%s %d-%d-%d", calendar, &day, &month, &year);
    convert_date(calendar, day, month, year);
    return 0;
}
// ```

// Source: Conversation with Bing, 10/27/2023
// (1) Solve C | HackerRank. https://www.hackerrank.com/domains/c.
// (2) Problem Solving Through Programming in C - Learnprogramo. https://learnprogramo.com/problem-solving-through-programming-in-c-1/.
// (3) Program for Tower of Hanoi Algorithm - GeeksforGeeks. https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/.
// (4) N Queens Problem in C Using Backtracking - The Crazy Programmer. https://www.thecrazyprogrammer.com/2015/03/c-program-for-n-queens-problem-using-backtracking.html.
// (5) 1000+ C Programs (C Programming Examples) - Includehelp.com. https://www.includehelp.com/c-programming-examples-solved-c-programs.aspx.






















    // ll total_days=0;
    // int h=y/100;
    // printf("%d\n", h);
    // total_days+=h*5;
    // total_days+=y*300;
    // total_days+=d;
    // ll total_days = (y/100)*5LL + y*300LL + (m-1)*30LL + d; 
    // int arr_month[]={30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    // for(int i=0; i<m-1; i++) 
    // {
    //     // printf("%d ", arr_month[i]);
    //     total_days+= arr_month[i];
    // }

    // return total_days;








/*





























// #include<stdio.h>
// #include<math.h>
// #define ll long long
// #define inpi(n) scanf("%d", &n)
// #define inpl(n) scanf("%lld", &n)
// #define inpc(n) scanf("%c", &n)
// #define inpd(n) scanf("%lf", &n)


// // lli Decode300(lli dd, lli mm, lli yyy)
// // {
// //     lli dayCount = 0;
// //     bool isHoly = (yyy % 100 == 0) ? true : false;
// //     dayCount += (yyy - 1) * 300;
// //     dayCount += 5 * ((yyy - 1) / 100);
// //     lli daysInMonths[] = {0, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
// //     lli daysInHolyMonths[] = {0, 30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
// //     for (lli i = 0; i < mm; i++)
// //         dayCount += isHoly ? daysInHolyMonths[i] : daysInMonths[i];
// //     dayCount += dd;
// //     return dayCount;
// // }


// ll days_count_300(ll d, ll m, ll y)
// {
//     return ((y-1)/100)*5LL + (y-1)*300LL + (m-1)*30LL + d;
// }

// ll days_count_300_100th(ll d, ll m, ll y)
// {
//     ll days=((y-1)/100)*5LL + (y-1)*300LL + d;
//     int arr_month[]={30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }

// // lli Decode999(lli dd, lli mm, lli yyy)
// // {
// //     lli dayCount = 0;
// //     bool isBlackCutter = (yyy % 999 == 0) ? true : false;
// //     dayCount += (yyy - 1) * 999;
// //     dayCount += 1 * ((yyy - 1) / 999);
// //     lli daysInMonths[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
// //     lli daysInBlackMonths[] = {0, 3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
// //     for (lli i = 0; i < mm; i++)
// //         dayCount += isBlackCutter ? daysInBlackMonths[i] : daysInMonths[i];
// //     dayCount += dd;
// //     return dayCount;
// // }


// ll days_count_999(ll d, ll m, ll y)
// {
//     ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
//     int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }

// ll days_count_999_999th(ll d, ll m, ll y)
// {
//     ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
//     int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }



// void solve()
// {
//     ll year_type;
//     scanf("%lld daysAYear", &year_type);

//     ll d, m, y;
//     scanf("%lld-%lld-%lld", &d, &m, &y);

//     if(year_type==300)
//     {
//         ll days;
//         if(y%100==0 && y>0) 
//         {
//             days=days_count_300_100th(d, m, y);
//         }
//         else
//         {
//             days=days_count_300(d, m, (y!=0)? y:1);
//         }
//         // printf("%d\n", days);
//         // ll week_day=(days-1)%7;
//         ll week_day=days%7;
//         if(week_day!=0) week_day--;

//         ll d9=0, m9=1, y9=0;
//         y9= days/999;
//         days-= y9*999;
//         days-= (y9/999);

//         while(days<0)
//         {
//             if(y9%999==1 && y9>1)
//             {
//                 days+= 1000;
//             }
//             else
//             {
//                 days+= 999;
//             }
//             y9--;
//         }

        

//         // if(days<0)
//         // {
//         //     y9--;
//         //     days+=999;
//         // }

//         if(y9%999!=0)
//         {
//             int arr_days[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
//             for(int i=0; i<15; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m9++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
//         }
//         else
//         {
//             int arr_days[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
//             for(int i=0; i<15; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m9++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
//         }

//         d9=days;
//         printf("%lld-%lld-%lld\n", d9, m9, y9);
//         char week[7][100]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//         printf("%s\n", week[week_day]);
//     }

//     /*2nd part: 999 days a year*/
//     else
//     {
//         ll days;
//         if(y%999==0 && y>0) 
//         {
//             days=days_count_999_999th(d, m, y);
//         }
//         else
//         {
//             days=days_count_999(d, m, (y!=0)? y:1);
//         }
//         // printf("%d\n", days);
//         // ll week_day=(days-1)%7;
//         // if(week_day!=0) week_day--;

//         ll week_day=days%7;
//         if(week_day!=0) week_day--;

//         ll d3=0, m3=1, y3=0;
//         y3= days/300;
//         days-= y3*300;
//         // y3++;
//         // printf("%d\n", days);
//         days-= (y3/100)*5;
//         // printf("%d\n", days);

//         while(days<0)
//         {
//             if(y3%100==1 && y3>1)
//             {
//                 days+= 305;
//             }
//             else
//             {
//                 days+= 300;
//             }
//             y3--;
//         }


        

//         // if(days<0)
//         // {
//         //     y3--;
//         //     days+=300;
//         // }

//         if(y3%100!=0)
//         {
//             int arr_days[]={30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
//             for(int i=0; i<10; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m3++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             int arr_days[]={30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
//             for(int i=0; i<10; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m3++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//         }

//         d3=days;
//         printf("%lld-%lld-%lld\n", d3, m3, y3);
//         char week[8][100]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//         // for(int i=0; i<7; i++) 
//         // {
//         //     printf("%d %s\n", i, week[i]);
//         // }
//         printf("%s\n", week[week_day]);
//     }
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



// ll days_count_300(ll d, ll m, ll y)
// {
//     return ((y-1)/100)*5LL + (y-1)*300LL + (m-1)*30LL + d;
// }

// ll days_count_300_100th(ll d, ll m, ll y)
// {
//     ll days=((y-1)/100)*5LL + (y-1)*300LL + d;
//     int arr_month[]={30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }

// ll days_count_999(ll d, ll m, ll y)
// {
//     ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
//     int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }

// ll days_count_999_999th(ll d, ll m, ll y)
// {
//     ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
//     int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }



// void solve()
// {
//     ll year_type;
//     scanf("%lld daysAYear", &year_type);

//     ll d, m, y;
//     scanf("%lld-%lld-%lld", &d, &m, &y);

//     if(year_type==300)
//     {
//         ll days;
//         if(y%100==0 && y>0) 
//         {
//             days=days_count_300_100th(d, m, y);
//         }
//         else
//         {
//             days=days_count_300(d, m, (y!=0)? y:1);
//         }

//         printf("%d\n", days);
//         ll week_day=(days-1)%7;
//         // if(week_day!=0) week_day--;

//         ll d9=0, m9=1, y9=0;
//         y9= days/999;
//         days-= y9*999;
//         days-= (y9/999);

//         if(days<0)
//         {
//             y9--;
//             days+=999;
//         }

//         if(y9%999!=0)
//         {
//             int arr_days[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
//             for(int i=0; i<15; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m9++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
//         }
//         else
//         {
//             int arr_days[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
//             for(int i=0; i<15; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m9++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
//         }

//         d9=days;
//         printf("%lld-%lld-%lld\n", d9, m9, y9);
//         char week[7][100]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//         printf("%s\n", week[week_day]);
//     }

//     /*2nd part: 999 days a year*/
//     else
//     {
//         ll days;
//         if(y%999==0 && y>0) 
//         {
//             days=days_count_999_999th(d, m, y);
//         }
//         else
//         {
//             days=days_count_999(d, m, (y!=0)? y:1);
//         }
        
//         // printf("%d\n", days);
//         ll week_day=(days-1)%7;
//         // if(week_day!=0) week_day--;

//         ll d3=0, m3=1, y3=0;
//         y3= days/300;
//         days-= y3*300;
//         // y3++;
//         // printf("%d\n", days);
//         days-= (y3/100)*5;
//         // printf("%d\n", days);

//         if(days<0)
//         {
//             y3--;
//             days+=300;
//         }

//         if(y3%100!=0)
//         {
//             int arr_days[]={30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
//             for(int i=0; i<10; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m3++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//         }
//         else
//         {
//             int arr_days[]={30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
//             for(int i=0; i<10; i++)
//             {
//                 if(days>arr_days[i])
//                 {
//                     m3++;
//                     days-= arr_days[i];
//                 }
//                 else
//                 {
//                     break;
//                 }
//             }
//         }

//         d3=days;
//         printf("%lld-%lld-%lld\n", d3, m3, y3);
//         char week[8][100]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//         // for(int i=0; i<7; i++) 
//         // {
//         //     printf("%d %s\n", i, week[i]);
//         // }
//         printf("%s\n", week[week_day]);
//     }
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

// ll days_count_300(ll d, ll m, ll y)
// {
//     return ((y-1)/100)*5LL + (y-1)*300LL + (m-1)*30LL + d;
// }

// ll days_count_300_100th(ll d, ll m, ll y)
// {
//     ll days=((y-1)/100)*5LL + (y-1)*300LL + d;
//     int arr_month[]={30, 31, 30, 31, 30, 31, 31, 31, 30, 30};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }

// ll days_count_999(ll d, ll m, ll y)
// {
//     ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
//     int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }

// ll days_count_999_999th(ll d, ll m, ll y)
// {
//     ll days= ((y-1)/999)*1LL + (y-1)*999LL + d;
//     int arr_month[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 90, 103, 113, 131, 151, 163};
//     for(int i=0; i<m-1; i++) 
//     {
//         days+= arr_month[i];
//     }
//     return days;
// }



// void solve()
// {
//     ll year_type;
//     scanf("%lld daysAYear", &year_type);

//     ll d, m, y;
//     scanf("%lld-%lld-%lld", &d, &m, &y);

//     if(year_type==300)
//     {
//         ll days;
//         if(y%100==0) 
//         {
//             days=days_count_300_100th(d, m, y);
//         }
//         else
//         {
//             days=days_count_300(d, m, y);
//         }

//         ll week_day=days%7-1;
//         // printf("%lld", days);

//         ll d9=0, m9=1, y9=0;
//         y9= days/999;
//         days-= y9*999;
        
//         // printf("%d\n", days);
//         days-= (y9/999);
//         // printf("%d\n", days);

//         int arr_days[]={3, 5, 7, 13, 29, 31, 47, 53, 61, 89, 103, 113, 131, 151, 163};

//         for(int i=0; i<15; i++)
//         {
//             if(days>arr_days[i])
//             {
//                 m9++;
//                 days-= arr_days[i];
//             }
//             else
//             {
//                 break;
//             }
//             // printf("%d\n", m9);
//         }

//         d9=days;
//         printf("%lld-%lld-%lld\n", d9, m9, y9);
//         char week[8][100]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//         printf("%s\n", week[week_day]);
//     }
//     else
//     {
//         ll days;
//         if(y%100==0) 
//         {
//             days=days_count_999_999th(d, m, y);
//         }
//         else
//         {
//             days=days_count_999(d, m, y);
//         }
//         ll week_day=days%7-1;
//         // printf("%lld", days);

//         ll d3=0, m3=1, y3=0;
//         y3= days/300;
//         days-= y3*300;
        
//         // printf("%d\n", days);
//         days-= (y3/100)*5;

//         // printf("%d\n", days);
//         int arr_days[]={30, 30, 30, 30, 30, 30, 30, 30, 30, 30};

//         for(int i=0; i<10; i++)
//         {
//             if(days>arr_days[i])
//             {
//                 m3++;
//                 days-= arr_days[i];
//             }
//             else
//             {
//                 break;
//             }
//             // printf("%d\n", m9);
//         }

//         d3=days;
//         printf("%lld-%lld-%lld\n", d3, m3, y3);
//         char week[8][100]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
//         printf("%s\n", week[week_day]);
//     }
// }


// int main()
// {
    
//     solve();
    
//     return 0;
// }






