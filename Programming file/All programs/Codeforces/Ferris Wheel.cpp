// accepted
// https://cses.fi/problemset/task/1090/

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
    for(int i=0; i<n; i++) cin>>a[i];

    vsort(a);
    map<int, int> mp;

    int ctr=0, mark=n;
    for(int i=0; i<n; i++)
    {
        if(mp[i]!=0) continue;
        if(a[i]==x && mp[i]==0)
        {
            ctr++;
            mp[i]++;
        }
        else
        {
            int flag=0;
            auto it = upper_bound(a.begin(), a.begin()+mark, x-a[i]);
            if(it==a.end()) it--;
            int pos = it - a.begin();

            while(i<pos)
            {
                if((a[i]+a[pos])<=x && mp[pos]==0)
                {
                    flag++;
                    ctr++;
                    mp[pos]++;
                    mp[i]++;
                    mark=pos+1;
                    break;
                }
                pos--;
            }
            if(flag==0)
            {
                ctr++;
                mp[i]++;
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

