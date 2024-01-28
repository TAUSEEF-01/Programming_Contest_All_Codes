// accepted
// https://cses.fi/problemset/task/1640/

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
    ll n, x;
    cin>>n>>x;
    vector<ll> a(n);
    map<ll, vector<ll>> mp;
    map<ll, ll> cnt;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]].push_back(i+1);
        cnt[a[i]]++;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]*2==x)
        {
            if(cnt[a[i]]>=2)
            {
                cout<<mp[a[i]][0]<<' '<<mp[x-a[i]][1]<<endl;
                return;
            }
        }
        else if(mp[x-a[i]].size()!=0)
        {
            cout<<mp[a[i]][0]<<' '<<mp[x-a[i]][0]<<endl;
            return;
        }
    }

    cout<<"IMPOSSIBLE\n";
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
