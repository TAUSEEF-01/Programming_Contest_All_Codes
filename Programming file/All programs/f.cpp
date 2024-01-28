#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, x;
    cin>>a>>b>>x;
    if(a+b>x)
    {
        cout<<0<<endl;
        return;
    }

    ll p=log10(x);
    ll q=1;
    ll n;//=(x-b*q)/a;
    while(1)
    {
        n=pow(10,q);
        if(a*n+b*q>x)
        {
            break;
        }
        else
        {
            q++;
            // if(log10(n)>p || a*n+b*(log10(n))>x)
            // {
            //     break;
            // }
        }
    }
    q--;
    n=pow(q,10);
    cout<<n<<endl;
}

int main()
{
    solve();

    return 0;
}