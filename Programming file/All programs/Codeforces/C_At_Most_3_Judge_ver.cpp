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
    int n, w;
    cin>>n>>w;

    vector<int> a;
    set<int> st;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x<=w) a.push_back(x), st.insert(x);
    }

    int sz=a.size(), dis=st.size();
    if(sz>=3)
    {
        cout<<sz*(sz-1)*(sz-2)/6 + sz*(sz-1)/2 - 2*(sz-dis) - ((sz!=dis)? sz-dis:0) <<endl;
    }
    else
    {
        cout<<sz*(sz+1)/2 - ((sz!=dis)? sz-dis:0)<<endl; 
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
