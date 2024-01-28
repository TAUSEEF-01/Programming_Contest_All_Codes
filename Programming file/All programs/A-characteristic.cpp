//accepted
//https://codeforces.com/contest/1823/problem/A
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
        int n,k;
        cin>>n>>k;
        ll p=n*(n-1)/2;
        int ctr=n/2+1, flag=0, q=n-1, rr;
        rr=n;
        for(int i=0; i<ctr; i++)
        {
            if(p==k)
            {
                flag++;
                break;
            }
            p-=q;
            q-=2;
            rr--;
        }
        if(flag!=0)
        {
            cout<<"YES\n";
            for(int i=0; i<rr; i++)
            {
                cout<<1<<' ';
            }
            for(int i=0; i<n-rr; i++)
            {
                cout<<-1<<' ';
            }
            cout<<endl;
        }
        else 
        {
            cout<<"NO\n";
        }
    }
    return 0;
}