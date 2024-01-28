#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    if(n<=3)
    {
        cout<<"YES\n";
        return;
    }
    else if(a[3]>a[4])
    {
        cout<<"NO\n";
        return;
    }

    int prev=a[4];

    for(int i=4; i<n; i++)
    {
        if((i&(i-1))==0)
        {
            continue;
        }
        else
        {
            if(a[i]>a[i+1])
            {
                cout<<"NO\n";
                return;
            }
        }
    }

    cout<<"YES\n";
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

