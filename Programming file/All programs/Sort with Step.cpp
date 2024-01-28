//accepted
//https://codeforces.com/contest/1823/problem/B
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
        int n, k;
        cin>>n>>k;
        vector<int>a(n), b(n);
        int ctr=0, sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=abs(a[i]-(i+1));
        }
        for(int i=0; i<n; i++)
        {
            if(b[i]%k!=0)
            ctr++;
        }
        if(ctr==0)
        {
            cout<<0<<endl;
        }
        else if(ctr==2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}