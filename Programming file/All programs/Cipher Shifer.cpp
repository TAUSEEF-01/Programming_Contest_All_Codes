//accepted
//https://codeforces.com/contest/1840/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int ctr=1, flag=0;
    cout<<a[0];
    char p=a[0];
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(p==a[j])
            {
                if(j+1<n)
                {
                    cout<<a[j+1];
                    p=a[j+1];
                    i=j;
                    break;
                }
                else
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag!=0)
        {
            break;
        }
    }
    cout<<endl;
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
