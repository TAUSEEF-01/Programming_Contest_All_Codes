//accepted
//https://codeforces.com/contest/1873/problem/E

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
    ll n, x;
    cin>>n>>x;
    vector<ll> a(n);
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    vsort(a);
    if(a[n-1]*n-sum<=x)
    {
        cout<<a[n-1]+(x-(a[n-1]*n-sum))/n<<endl;
        return;
    }
    
    ll ans=a[0];
    ll temp=a[0];
    ll left=x;
    for(int i=1; i<n; i++)
    {
        temp+=a[i];
        if(a[i]!=a[i-1])
        {
            if(a[i]*(i+1)-temp<=x)
            {
                ans=a[i];
                left=x-(a[i]*(i+1)-temp);
            }
            else
            {
                cout<<left/i+ans<<endl;
                return;
            }
        }
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