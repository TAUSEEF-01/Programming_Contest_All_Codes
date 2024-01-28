//accepted
//https://codeforces.com/problemset/problem/1491/B
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
    int l=1;
    while (t--)
    {
        ll n, u, v;
        cin>>n>>u>>v;
        vector<ll>a(n);
        ll dif=0;
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
            if(i>0)
            dif=max(dif,abs(a[i]-a[i-1]));
        }
        if(dif>=2)
        {
            cout<<0<<endl;
        }
        else if(dif==1)
        {
            ll ans=min(u,v);
            cout<<ans<<endl;
        }
        else if(dif==0)
        {
            ll ans=v+min(u,v);
            cout<<ans<<endl;
        }
    }
    return 0;
}