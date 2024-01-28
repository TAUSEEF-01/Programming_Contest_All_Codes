#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int a[3], f1=0, f2=0, f3=0;
    a[0]=1000000, a[1]=1000000, a[2]=10000000;
    while(n--)
    {
        int m;
        cin>>m;
        char x, y;
        cin>>x>>y;
        if(x=='1' && y=='1')
        {
            a[0]=min(a[0], m);
            f1++;
        }
        else if(x=='1' && y=='0')
        {
            a[1]=min(a[1], m);
            f2++;
        }
        else if(y=='1' && x=='0')
        {
            a[2]=min(a[2], m);
            f3++;
        }
    }
    if(f1==0 && ((f2==0 && f3==0) ||(f2!=0 && f3==0) || (f2==0 && f3!=0)))
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<min(a[0], a[1]+a[2])<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    
    return 0;
}

