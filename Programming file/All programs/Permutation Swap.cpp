#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin>>n;
    vector<int>a(n+1), b(n+1);
    int mini=INT_MAX, ans=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]!=i)
        {
            // mini=min(mini, abs(a[i]-i));
            ans=__gcd(ans, abs(a[i]-i));
            // cout<<abs(a[i]-i)<<' ';
        }
    }
    // cout<<endl;
    cout<<ans<<endl;
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

