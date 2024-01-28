//accepted
//https://codeforces.com/contest/1020/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> g[1010];
bool vis[1010];
ll ans=-1;

void dfs(ll vertex)
{
    vis[vertex]=true;
    
    for(ll child: g[vertex])
    {
        if(vis[child]) 
        {
            ans = child;
            return;
        }
        dfs(child);
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        ll p;
        cin>>p;
        g[i].push_back(p);
    }
    for(int i=1; i<=n; i++)
    {
        memset(vis, false, sizeof(vis));
        ans=-1;
        dfs(i);
        cout<<ans<<' ';
    }
    cout<<endl;

    return 0;
}
