#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n, m;
    cin>>n>>m;
    string a, b;
    cin>>a>>b;

    int f=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            f++;
            break;
        }
    }
    if(f==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        int f2=0;
        for(int i=0; i<m-1; i++)
        {
            if(b[i]==b[i+1])
            {
                f2++;
                break;
            }
        }
        if(f2)
        {
            cout<<"No\n";
        }
        else
        {
            int flag=0;
            char chf=b[0], chl=b[m-1];
            for(int i=0; i<n-1; i++)
            {
                if(a[i]==a[i+1])
                {
                    if(a[i]==chf || a[i+1]==chl)
                    {
                        flag++;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"Yes\n";
            }
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
