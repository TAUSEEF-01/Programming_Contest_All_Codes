//accepted
//https://codeforces.com/contest/1141/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int>a(n), b(n), c(n);
    int l=0, mark=0, mini=1000000;
    for(int i=0; i<n-1; ++i)
    {
        cin>>a[i];
        if(i==0)
        {
            if(a[i]<=0)
            {
                b[l++]=1+abs(a[i]);
                b[l++]=1;
                mark=1;
                mini=1;
            }
            else
            {
                b[l++]=1;
                b[l++]=1+abs(a[i]);
                mark=1+abs(a[i]);
                mini=1;
            }
        }
        else
        {
            b[l++]=mark+a[i];
            mark+=a[i];
            mini=min(mini, mark);
        }
    }
    if(mini<=0)
    {
        for(int i=0; i<l; ++i)
        {
            b[i]+=abs(mini)+1;
        }
    }
    c=b;
    sort(c.begin(), c.end());
    int flag=0;
    for(int i=0; i<l; ++i)
    {
        if(c[i]!=i+1)
        {
            flag++;
            break;
        }
    }

    if(flag!=0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0; i<l; ++i)
        {
            cout<<b[i]<<' ';
        }
    }


    return 0;
}
