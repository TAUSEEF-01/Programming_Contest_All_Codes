#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);



const int mxn=1e5+9;
vector<ll> adj[mxn];
vector<ll> col(mxn), sz(mxn), cnt(mxn), ans(mxn);
bool big[mxn];
ll sum, mxcolcnt;

void dfs(ll u, ll p) // counting the total number of nodes in a subtree
{
    sz[u]=1;

    for(auto &v: adj[u])
    {
        if(v==p) 
        continue;

        dfs(v, u);
        sz[u]+=sz[v];
    }
}

void add(ll u, ll p, ll x) 
{
    cnt[col[u]]+=x;

    if(cnt[col[u]] > mxcolcnt)
    {
        mxcolcnt=cnt[col[u]];
        sum=col[u];
    }
    else if(cnt[col[u]]==mxcolcnt)
    {
        sum+=col[u];
    }

    for(auto &v: adj[u])
    {
        if(v==p || big[v]==1)
        continue;

        add(v, u, x);
    }
}

void dsu(ll u, ll p, bool keep)
{
    ll bigChild= -1, mx= -1;
    for(auto &v: adj[u])
    {
        if(v==p)
        continue;

        if(sz[v] > mx)
        {
            mx=sz[v];
            bigChild=v;
        }
    }

    for(auto &v: adj[u])
    {
        if(v==p || v==bigChild)
        continue;
        
        dsu(v, u, 0); // keep 0
    }

    if(bigChild != -1)
    {
        dsu(bigChild, u, 1); // keep 1
        big[bigChild]=1;
    }

    add(u, p, 1);

    ans[u]=sum;

    if(bigChild != -1)
    {
        big[bigChild] = 0;
    }

    if(keep==0)
    {
        add(u, p, -1);
        mxcolcnt=0;
        sum=0;
    }
}

void solve()
{
    int n;
    cin>> n;   

    for(int i=1; i<=n; i++)
    {
        cin>>col[i];
    }
    
    for(int i=1; i<n; i++)
    {
        ll u, v;
        cin>>u>>v;

        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    dfs(1, 0);
    dsu(1, 0, 1);



    // for(int i=1; i<=n; i++)
    // cout<<i<<' '<<sz[i]<<endl;
    // cout<<col[i] <<' '<<cnt[col[i]]<<endl;

    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]<<' ';
    }
    cout<<endl;
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
