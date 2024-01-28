//accepted
//https://atcoder.jp/contests/abc231/tasks/abc231_d?lang=en


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


const int M = 1e5+10;
vector<int> g[M];
bool vis[M];


bool dfs_loop_exists(int vertex, int parent)
{
    vis[vertex]= true;
    bool isLoopExists= false;
    for(int child: g[vertex])
    {
        if(vis[child] && child==parent) continue;
        if(vis[child]) return true;

        isLoopExists |= dfs_loop_exists(child, vertex);
    }

    return isLoopExists;
}


void graph_is_loop_exists(int n)
{
    bool isLoopExists = false; 
    
    for(int i=1; i<=n; i++)
    {
        if(vis[i]) continue;
        if(dfs_loop_exists(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }
    if(!isLoopExists)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}


void solve()
{
    ll n, m;
    cin>>n>>m;

    vector<int> mark(1e5+10, 0);
    int flag=0;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        mark[x]++;
        mark[y]++;
        if(mark[x]>2 || mark[y]>2) flag++;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if(flag!=0)
    {
        cout<<"No\n";
    }
    else
    {
        graph_is_loop_exists(n);
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}
