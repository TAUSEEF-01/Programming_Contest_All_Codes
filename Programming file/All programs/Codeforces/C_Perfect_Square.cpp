#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    int aa=0, b=0, c=n-1, d=n-1;
    for(int i=0; i<n/2; i++)
    {
        // aa=i;
        for(int j=0; j<n/2; j++)
        {
            // b=j;
            // c=b+1;
            // d=aa+1;
            // cout<<i<<' '<<j<<endl;
            // int maxi=max(max(a[i][j], a[j][i]), max(a[n-i-1][n-j-1], a[n-j-1][n-i-1]));
            // int maxi=max(max(a[i][j], a[j][i]), max(a[n-i-1][j], a[n-j-1][n-i-1]));
            // int maxi=max(max(a[i][j], a[i][]))
            int maxi=max(max(a[i][j], a[n-i-1][n-j-1]), max(a[n-j-1][i], a[j][n-i-1]));
            ans+=(maxi-a[i][j]);
            // ans+=(maxi-a[j][i]);
            ans+=(maxi-a[n-i-1][n-j-1]);

            // ans+=(maxi-a[n-i-1][n-j-1]);

            ans+=(maxi-a[n-j-1][i]);
            // ans+=(maxi-a[n-j-1][n-i-1]);

            ans+=(maxi-a[j][n-i-1]);
            // cout<<a[i][j]<<' '<<a[j][i]<<' '<<a[n-i-1][n-j-1]<<' '<<a[n-j-1][n-i-1]<<endl;
            // cout<<a[i][j]<<' '<<a[n-i-1][n-j-1]<<' '<<a[n-j-1][i]<<' '<<a[j][n-i-1]<<endl;
        }
    }
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
