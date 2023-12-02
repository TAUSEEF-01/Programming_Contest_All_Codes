#include <stdio.h>
#include <math.h>

typedef struct Point
{
    int x, y;
} Point;

double distance(Point a, Point b)
{
    double dist1 = sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
    return dist1;
}

int main()
{
    int radius1, radius2;
    Point centre1, centre2;
    scanf("%d%d%d", &centre1.x, &centre1.y, &radius1);
    scanf("%d%d%d", &centre2.x, &centre2.y, &radius2);
    double dist1 = distance(centre1, centre2);
    if (dist1 == (radius1 + radius2))
    {
        printf("Touched\n");
    }
    else if (dist1 > (radius1 + radius2))
    {
        printf("No Intersection\n");    
    }
    else
        printf("Intersection\n");
    return 0;
}