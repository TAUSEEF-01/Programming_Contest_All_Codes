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
    int n, m;
    cin>>n>>m;

    vector<ll> a(n), b(m);
    // ll sum1=0, sum2=0;

    multiset<ll> aa, bb;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        aa.insert(a[i]);
        // sum1+=a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
        bb.insert(b[i]);
        // sum2+=b[i];
    }   

    ll ans=0;

    while(!aa.empty())
    {
        auto ita_min=aa.begin();
        auto ita_max=aa.rbegin();

        auto itb_min=bb.begin();
        auto itb_max=bb.rbegin();

        if(abs(*ita_min-*itb_max)>=abs(*ita_max-*itb_min))
        {
            ans+=abs(*ita_min-*itb_max);
            // aa.erase(ita_min);
            // bb.erase(itb_max);
            aa.erase(aa.find(*ita_min));
            bb.erase(bb.find(*itb_max));
        }
        else
        {
            ans+=abs(*ita_max-*itb_min);
            aa.erase(aa.find(*ita_max));
            bb.erase(bb.find(*itb_min));
        }
    }

    cout<<ans<<endl;

    // vsort(a);
    // vsort(b);
    // // sort(b.rbegin(), b.rend());

    
    // ll ans=0, f=0, l=m-1;
    // for(int i=n-1; i>=0; i--)
    // {

    //     if(abs(a[i]-b[f])>=abs(a[i]-b[l]))
    //     {
    //         ans+=abs(a[i]-b[f]);
    //         f++;
    //     }
    //     else
    //     {
    //         ans+=abs(a[i]-b[l]);
    //         l--;
    //     }
    // }

    // cout<<ans<<endl;











    // ll ans2=abs(sum2-sum1);


    // for(int i=0; i<m-n; i++)
    // {
    //     ans-=b[i];
    // }

    // for(int i=0; i<n; i++)
    // {
    //     ans+=abs(b[i]-a[i]);
    // }

    // for(int i=0; i<n-1; i++)
    // {
    //     // ans+=b[i]-a[i];
    //     sum2+=b[i];
    // }

    // ll ans=-INT_MAX;
    // for(int i=n-1; i<m; i++)
    // {
    //     ans2=max(ans2, sum2+b[i]-sum1);
    // }

    // cout<<max(ans, ans2)<<endl;
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
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
