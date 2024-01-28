#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            if(a[i]!=a[j])
            {
                for(int k=j+1; k<n; k++)
                {
                    if(a[k]!=a[j] && a[k]!=a[i])
                    {
                        ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}