#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)



void solve()
{
    int x1, y1, r1, x2, y2, r2;
    inpi(x1), inpi(y1), inpi(r1);
    inpi(x2), inpi(y2), inpi(r2);

    double d1=sqrt((((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2))));

    if(d1==(r1+r2))
    {
        printf("Touched\n");
    }
    else if(d1>(r1+r2))
    {
        printf("No Intersection\n");
    }
    else
    {
        printf("Intersection\n");
    }
}


int main()
{
    int t=1;
    // inpi(t);

    for(int i=1; i<=t; i++)
    {
        solve();
    }

    return 0;
}












// #include <stdio.h>
// #include <math.h>

// #define EPS 1e-3

// struct Circle 
// {
//     int x, y, r;
// };

// double _distance(Circle a, Circle b) 
// {
//     int dx=abs(a.x-b.x);
//     int dy=abs(a.y-b.y);
//     return sqrt(dx * dx + dy * dy);
// }

// Circle circle_input() 
// {
//     Circle temp;
//     scanf("%d %d %d", &temp.x, &temp.y, &temp.r);
//     temp.x=abs(temp.x);
//     temp.y=abs(temp.y);
//     temp.r=abs(temp.r);
//     return temp;
// }

// void circle_circle_intersection(Circle a, Circle b) 
// {
//     double d= _distance(a, b);
//     int r1=a.r;
//     int r2=b.r;

//     if(fabs(r1 - r2) < EPS && fabs(d - r1 - r2) < EPS) 
//     {
//         printf("Touched\n");
//     } 
//     else if(d<r1+r2-EPS && d>fabs(r1-r2)+EPS) 
//     {
//         printf("Intersection\n");
//     } 
//     else 
//     {
//         printf("No Intersection\n");
//     }
// }

// int main(void) 
// {

//     Circle a, b;
//     a = circle_input();
//     b = circle_input();
//     circle_circle_intersection(a, b);
    
//     return 0;
// }
