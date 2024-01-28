//accepted
//https://codeforces.com/contest/1822/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        if(n==1)
        cout<<1<<endl;
        else if(n==2)
        cout<<2<<' '<<1<<endl;
        else if(n%2!=0)
        cout<<-1<<endl;
        else
        {
            cout<<n<<' ';
            int p=2, q=n-1;
            for(int i=0; i<(n-2)/2; i++)
            {
                cout<<q<<' '<<p<<' ';
                q-=2;
                p+=2;
            }
            cout<<1<<endl;
        }

    }
    return 0;
}

