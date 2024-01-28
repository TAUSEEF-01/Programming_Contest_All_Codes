//accepted
//https://codeforces.com/contest/217/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(a) a.begin(), a.end()
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


const int M = 1010;
vector<int> g[M];
bool vis[M]={false};


void dfs(int num)
{
    vis[num]=true;
    for(auto &deep: g[num])
    {
        if(vis[deep]) continue;
        dfs(deep);
    }
}


void sigma()
{
    int n;
    cin>>n;
    vector<int> x(n), y(n);
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(x[i]==x[j] || y[i]==y[j])
            {
                g[i].pb(j);
                g[j].pb(i);
            }
        }
    }

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cnt++;
        }
    }

    cout<<cnt -1 <<endl;
}




int main()
{
    fastio;

    int t=1; 

    while(t--) sigma();

    return 0;
}
