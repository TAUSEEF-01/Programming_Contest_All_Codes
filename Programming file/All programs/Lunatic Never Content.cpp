//accepted
//https://codeforces.com/contest/1826/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define bnsrch(a,x) binary_search(a.begin() , a.end() , x)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n+100);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        int flag=0;
        for(int i=0; i<n/2; i++)
        {
            ans=__gcd((abs(a[i]-a[n-i-1])), ans);
            if(a[i]!=a[n-i-1])
            {
                flag++;
            }
        }
        if(flag==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    
    return 0;
}
