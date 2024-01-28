//accepted
//https://atcoder.jp/contests/abc213/tasks/abc213_d

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())


const int M = 2e5+10;
vector<int> g[M];
bool vis[M];

vector<int> store;


void dfs(int vertex)
{
    vis[vertex] = true;
    store.push_back(vertex);
    for(int child:g[vertex])
    {
        if(vis[child]) continue;
        dfs(child);
        store.push_back(vertex);
    }    
}



void solve()
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

    for(int i=1; i<=n; i++)
    {
        if(g[i].size()!=0)
        {
            vsort(g[i]);
        }
    }

    dfs(1);

    for(auto &x: store) cout<<x<<' ';
    cout<<endl;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}
