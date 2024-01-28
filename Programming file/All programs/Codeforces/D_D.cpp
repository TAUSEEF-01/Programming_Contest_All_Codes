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
    ll n; cin>>n;
    ll a[]={1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    int ctr=0;
    while(n>0)
    {
        for(int i=9; i>=0; i--)
        {
            if(n>=a[i])
            {
                n-=a[i];
                ctr++;
                break;
            }
        }
    }
    cout<<ctr<<endl;
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











    // ll ans=1;
    // for(int i=1; i<11; i++)
    // {
    //     ans*=i;
    //     cout<<ans<<", ";
    // }
