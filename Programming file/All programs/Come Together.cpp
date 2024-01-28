//accepted
//https://codeforces.com/contest/1845/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


void solve()
{
    ll x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x2>x3)
    {
        swap(x2,x3);
        swap(y2,y3);
    }
    if((y1<=y2 && y1<=y3) || (y1>=y2 && y1>=y3))
    {
        if((x2<=x1 && x3>=x1) || (x3<=x1 && x2>=x1))
        {
            cout<<min(abs(y1-y2), abs(y1-y3))+1<<endl;
        }
        else
        {
            cout<<min(abs(y1-y2), abs(y1-y3)) + min(abs(x1-x2), abs(x1-x3))+1<<endl;
        }
    }
    else
    {
        if((x2<=x1 && x3>=x1) || (x3<=x1 && x2>=x1))
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<min(abs(x1-x2), abs(x1-x3))+1<<endl;
        }
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
