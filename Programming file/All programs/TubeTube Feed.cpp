//accepted
//https://codeforces.com/contest/1822/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tp;
    cin >> tp;  

    while (tp--)
    {
            int n, t;
        cin>>n>>t;
        vector<int>a(n),b(n),p(n);
        int l=0, m=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            p[i]=x+i;
        }
        int mark=0, maxi=0;
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]>maxi && p[i]<=t)
            {
                mark=i+1;
                maxi=max(b[i],maxi);
            }
        }
        if(mark!=0)Karina and Array
        {
            cout<<mark<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}

