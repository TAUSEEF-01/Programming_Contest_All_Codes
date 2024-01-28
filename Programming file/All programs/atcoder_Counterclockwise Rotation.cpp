//accepted
//https://atcoder.jp/contests/abc259/tasks/abc259_b?lang=en
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const double pi=3.14159265358979323846264338327950288419716939937510;

void solve()
{
    double a, b, d;
    cin>>a>>b>>d;
    if(a==0 && b==0)
    {
        cout<<setprecision(22)<<0<<' '<<setprecision(22)<<0<<endl;
        return;
    }
    double r=sqrt(a*a+b*b);
    d=d*pi/(double)180;
    double ang=atan(b/a);
    if(a==0 && b>0)
    {
        cout<<setprecision(22)<<r*cos(d+pi/2)<<' '<<setprecision(22)<<r*sin(d+pi/2)<<endl;
        return;
    }
    else if(a==0 && b<0)
    {
        cout<<setprecision(22)<<r*cos(d+3*pi/2)<<' '<<setprecision(22)<<r*sin(d+3*pi/2)<<endl;
        return;
    }
    else if(a>0 && b==0)
    {
        cout<<setprecision(22)<<r*cos(d)<<' '<<setprecision(22)<<r*sin(d)<<endl;
        return;
    }
    else if(a<0 && b==0)
    {
        cout<<setprecision(22)<<r*cos(d+pi)<<' '<<setprecision(22)<<r*sin(d+pi)<<endl;
        return;
    }
    else if(b<0 && a<0)
    {
        ang=pi+ang;
    }
    else if(b>0 && a<0)
    {
        ang=ang+pi;
    }
    else if(a>0 && b<0)
    {
        ang=2*pi+ang;
    }

    ang+=d;
    cout<<setprecision(22)<<r*cos(ang)<<' '<<setprecision(22)<<r*sin(ang)<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    
    return 0;
}