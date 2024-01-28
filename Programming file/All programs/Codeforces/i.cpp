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

    multiset<ll> a;
    while(n--)
    {
        int q;
        cin>>q;

        if(q==1)
        {
            ll x;
            cin>>x;
            a.insert(x);
        }
        else if(q==2)
        {
            ll x, k;
            cin>>x>>k;

            ll p=k;
            auto pos=lower_bound(a.begin(), a.end(), x);
            for(auto it=pos;  ;it--)
            {
                if(p==0) 
                {
                    cout<<*(it)<<endl;
                    break;
                }
                p--;
                if(it==a.begin()) 
                {
                    cout<<"-1"<<endl; 
                    break;
                }
            }
        }
        else if(q==3)
        {
            ll x, k;
            cin>>x>>k;

            // cout<<k<<' ';
            ll p=k, flag=0;
            auto pos=lower_bound(a.begin(), a.end(), x);
            if(*(pos)!=x && pos!=a.begin()) pos--;
            // else if(*(pos)!=x && pos==a.begin()) 
            for(auto it=pos; it!=a.end(); it++)
            {
                if(p==0) 
                {
                    cout<<*(it)<<endl;
                    flag++;
                    break;
                }
                p--;
            }
            if(p>0)
            {
                cout<<"-1"<<endl;
            }
            // cout<<endl;
            else
            {
                if(flag==0) cout<<"-1"<<endl;
            }
        }
    }
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
