#include<bits/stdc++.h>
using namespace std;
#define ll long long


struct Line
{
    int A, B, C;
};

struct FloatPoint
{
    double x, y;
};

double area(FloatPoint A, FloatPoint B, FloatPoint C)
{

    double triangle_area = 0.5 * fabs(A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y));
    return triangle_area;
}

int line_line_intersection(Line M, Line N, FloatPoint &f)
{
    int flag = 1;
    int determinant = M.A * N.B - M.B * N.A;

    if (determinant == 0)
    {
        flag = 0;
    }
    else
    {
        f.x = (M.C * N.B - M.B * N.C) / static_cast<double>(determinant);
        f.y = (M.A * N.C - M.C * N.A) / static_cast<double>(determinant);
    }

    return flag;
}

void answer()
{

    Line one, two, three;

    cin >> one.A >> one.B >> one.C;
    cin >> two.A >> two.B >> two.C;
    cin >> three.A >> three.B >> three.C;


    int flag;
    FloatPoint X, Y, Z;

    flag = line_line_intersection(one, two, X);
    flag &= line_line_intersection(two, three, Y);
    flag &= line_line_intersection(three, one, Z);

    if (flag)
    {
        double triangle_area = area(X, Y, Z);

        printf("%0.3lf\n", triangle_area);
    }
    else
    {
        printf("0.000\n");
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}