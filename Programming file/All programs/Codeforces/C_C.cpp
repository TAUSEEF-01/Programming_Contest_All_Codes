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
    ll a[3];
    for(int  i=0; i<3; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a, a+3);
    while(k--)
    {
        a[2]*=2;
    }
    ll sum=0;
    for(int i=0; i<3; i++) sum+=a[i];
    cout<<sum<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
