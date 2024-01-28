//accepted
//https://mirror.codeforces.com/contest/260/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    double a,b,n;
    cin>>a>>b>>n;
    int x,y,z;
    x=a;
    y=ceil(a*10/b)*b;
    string p=to_string(x);
    string q=to_string(y);
    if(q.size()>p.size()+n)
    {
        cout<<-1<<endl;
        return;
    }
    int flag=0;
    for(int i=0; i<p.size(); i++)
    {
        if(p[i]!=q[i])
        {
            flag++;
            break;
        }
    }
    if(flag!=0)
    {
        cout<<-1;
    }
    else
    {
        cout<<q;
        for(int i=0; i<n-(q.size()-p.size()); i++)
        {
            cout<<'0';
        }
    }
    cout<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}