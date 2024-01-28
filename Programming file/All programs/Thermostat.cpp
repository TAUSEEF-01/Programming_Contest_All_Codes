//accepted
//https://codeforces.com/problemset/problem/1759/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll low, hi, x, a, b;
        cin>>low>>hi>>x>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if(a==b)
        {
            cout<<0;
        }
        else if(a+x==b)
        {
            cout<<1;
        }
        else if(b+x>hi && b-x<low)
        {
            cout<<-1;
        }
        else if(a+x>b)
        {
            if((b+x>hi && b-x<low) || (a+x>hi && a-x<low))
            {
                cout<<-1;
            }
            else if(b+x>hi && b-x>=low)
            {
                if(a-x>=low)
                {
                    cout<<2;
                }
                else
                {
                    cout<<3;
                }
            }
            else if(b+x<=hi && b-x<low)
            {
                if(a+x<=hi)
                {
                    cout<<2;
                }
                else
                {
                    cout<<3;
                }
            }
            else if(b+x<=hi && b-x>=low)
            {
                cout<<2;
            }
            else
            {
                cout<<3;
            }
        }
        else if(a+x<b)
        {
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}