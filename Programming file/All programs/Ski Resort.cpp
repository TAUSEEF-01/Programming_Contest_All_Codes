//accepted
//https://codeforces.com/contest/1840/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


// ll combination(ll n, ll r)
// {
//     ll ans1=1, ans2=1, ans3=1;
//     for(int i=1; i<=n; i++)
//     {
//         ans1*=i;
//     }
//     for(int i=1; i<=r; i++)
//     {
//         ans2*=i;
//     }
//     for(int i=1; i<=n-r; i++)
//     {
//         ans3*=i;
//     }
//     return ans1/(ans2*ans3);
// }


void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(n), b;
    int ctr=0, flag=0;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=q)
        {
            ctr++;
        }
        else
        {
            if(ctr/k>=1)
            {
                ll p=ctr-k+1;
                ans+=p*(p+1)/2;
                flag++;
            }
            ctr=0;
        }
    }
    if(ctr/k>=1)
    {
        ll p=ctr-k+1;
        ans+=p*(p+1)/2;
        flag++;
    }

    if(flag==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<ans<<endl;
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