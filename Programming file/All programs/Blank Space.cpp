#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    int ans=1;
    vector<int>a(n);
    int zero=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
        zero++;
    }

    if(zero==0)
    {
        cout<<0<<endl;
        return;
    }

    int ctr=1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1] && a[i]==0)
        {
            ctr++;
        }
        else
        {
            ans=max(ans, ctr);
            ctr=1;
        }
    }
    ans=max(ctr, ans);
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

