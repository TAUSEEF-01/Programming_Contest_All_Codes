#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


const int M = 1e5+10;
vector<int> g[M];
int depth[M];


void dfs_for_trees(int vertex, int parent)
{
    for(int child:g[vertex])
    {
        if(child==parent) continue;
        depth[child]=depth[vertex] + 1;
        dfs_for_trees(child, vertex);
    }
}


void graph_input()
{
    int n;
    cin>>n;

    for(int i=1; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    depth[1]=1;
    dfs_for_trees(1, 0);
    ll ans=0;

    for(int i=1; i<=n; i++)
    {
        ans+=depth[i];
    }

    cout<<ans<<endl;
}


void solve()
{
    graph_input();
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}