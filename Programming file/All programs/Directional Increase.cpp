//accepted
//https://codeforces.com/contest/1694/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vrev(a) reverse(a.begin(), a.end())

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n), b(n);
        int flag=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(sum<0)
            flag++;
            b[i]=sum;
        }

        for(int i=0; i<n-1; i++)
        {
            if(b[i]==0 && b[i+1]!=0)
            {
                flag++;
                break;
            }
        }
        if(sum!=0 || flag!=0)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
    return 0;
}