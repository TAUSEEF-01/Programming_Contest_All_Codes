//accepted
//https://codeforces.com/problemset/problem/1372/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<' '<<n-n/2<<endl;
    }
    else
    {
        ll flag=0, mark=1;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                flag++;
                mark=i;
                break;
            }
        }
        if(flag==0)
        {
            cout<<1<<' '<<n-1<<endl;
        }
        else
        {
            cout<<n/mark<<' '<<n-n/mark<<endl;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}

