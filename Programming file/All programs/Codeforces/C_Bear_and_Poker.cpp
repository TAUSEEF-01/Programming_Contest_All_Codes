// accepted

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


void solve()
{
    ll n;
    cin>>n;

    ll GCD=0;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        GCD=__gcd(GCD, a[i]);
    }

    vector<ll> store;
    for(int i=0; i<n; i++)
    {
        store.push_back(a[i]/GCD);
    }


    for(int i=0; i<n; i++)
    {
        while(store[i]%2==0)
        {
            store[i]/=2;
        }
        while(store[i]%3==0)
        {
            store[i]/=3;
        }

        if(store[i]!=1)
        {
            cout<<"No\n";
            return;
        }
    }

    cout<<"Yes\n";
}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    int t=1;
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

