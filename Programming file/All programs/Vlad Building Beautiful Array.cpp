#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    ll ans=INT_MAX, ctr=0;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        ans=min(a, ans);
        if(a%2!=0)
        {
            ctr++;
        }
    }
    if(ans%2!=0)
    {
        cout<<"YES\n";
    }
    else if(ctr==0 && ans%2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
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

