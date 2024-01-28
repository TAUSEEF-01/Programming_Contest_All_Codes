//accepted
//https://codeforces.com/problemset/problem/1870/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{   
    int n, k, x;
    cin>>n>>k>>x;

    if(n<k || x<k-1) cout<<-1<<endl;
    else
    {
        int ans=0;
        for(int i=0; i<k; i++)
        {
            ans+=i;
            n--;
        }
        while(n--)
        {
            ans+=max(k-1, (x!=k)? x: x-1);
        }
        cout<<ans<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        solve();
    }

    return 0;
}
