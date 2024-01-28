// accepted
// https://cses.fi/problemset/task/1662/

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
    
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    ll totalCount = 0;

    unordered_map<int, int> map;
    map[0] = 1;

    ll sum = 0;
    ll rem = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        rem = (sum % n + n) % n;
        if(map[rem] != 0)
        {
            totalCount += map[rem];
            map[rem]++;
        }
        else 
        {
            map[rem] = 1;
        }
    }
    
    cout<<totalCount<<endl;
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
