// accepted
// https://cses.fi/problemset/task/1645/

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
    int n;
    cin>>n;
    vector<ll> a(n+1);
    map<ll, int> mp;
    ll mini=INT_MAX, pos=0, last_min=0;
    deque<ll> mn;
    for(int i=1; i<=n; i++) 
    {
        cin>>a[i];
        mp[a[i]]=i;
        if(i==1)
        {
            cout<<0<<' ';
            mn.push_front(a[i]);
            mini=a[i];
        }
        else
        {   
            if(a[i]<=mini)
            {
                cout<<0<<' ';
                mini=min(mini, a[i]);
                mn.push_front(a[i]);
                continue;
            }

            while(a[i]<=mn.front() && !mn.empty())
            {
                mn.pop_front();
            }
            cout<<mp[mn.front()]<<' ';
            mn.push_front(a[i]);
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
