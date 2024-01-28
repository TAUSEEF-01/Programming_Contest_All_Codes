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
    ll n, k, g;
    cin>>n>>k>>g;
    ll gg=g;
    if(gg%2) gg--;
    if(n*(gg/2)>=k*g)
    {
        cout<<k*g<<endl;
        return;
    }
    cout<<n*(gg/2)<<endl;
    // if(gg/2 == 1)
    // {
    //     cout<<k*g<<endl;
    //     return;
    // }
    // else if(k*g<=n) 
    // {
    //     cout<<g*k<<endl;
    //     return;
    // }
    // else 
    // {
    //     if((ceil((double)(k*g)/(double)n)==(gg/2)) && (floor((double)(k*g)/(double)n)==(gg/2)))
    //     {
    //         cout<<0<<endl;
    //     }
    //     else if((ceil((double)(k*g)/(double)n)==(gg/2)) && (floor((double)(k*g)/(double)n)<(gg/2)))
    //     {
    //         cout<<n*2<<endl;
    //     }
    //     else if((ceil((double)(k*g)/(double)n)>(gg/2)))
    //     {
    //         cout<<g<<endl;
    //     }
    //     else
    //     {
    //         cout<<g*k<<endl;
    //     }
    // }

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
