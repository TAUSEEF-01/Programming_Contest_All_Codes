//accepted
//https://codeforces.com/problemset/problem/1791/D
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
        string a;
        cin>>a;
        vector<int>b(250), c(250), x(n,0), y(n,0);
        int ctr=0;
        for(int i=0; i<n; ++i)
        {
            if(b[a[i]]==0)
            {
                ctr++;
                x[i]=ctr;
            }
            else
            {
                x[i]=ctr;
            }
            b[a[i]]++;
        }
        ctr=0;
        for(int i=n-1; i>=0; i--)
        {
            if(c[a[i]]==0)
            {
                ctr++;
                y[i]=ctr;
            }
            else
            {
                y[i]=ctr;
            }
            c[a[i]]++;
        }
        int ans=0;
        for(int i=0; i<n-1; ++i)
        {
            ans=max(ans, x[i]+y[i+1]);
        }
        cout<<ans<<endl;

    }
    return 0;
}