//accepted
//https://codeforces.com/gym/104639/problem/D


#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+ 6;
using ll = long long;

vector<int> G[N];
vector<int> cur_grp;
vector<int> vis (N);

void dfs(int cur)
{
    vis [cur] = 1;
    cur_grp.push_back(cur);
    for (int to: G[cur])
    {
        if(!vis[to]) 
        {
            dfs(to);
        }
    }
}


int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++) 
    {
        int u, v;
        scanf("%d %d", &u, &v);
        G[u].push_back(v);
        G[v].push_back(u);
    }

    ll ans = 0;
    vector<int> szs;
    for (int i = 1; i <= n; i++) 
    {
        if(!vis[i]) 
        {
            cur_grp.clear();
            dfs(i);
            
            ll tot = 0;
            for (int x: cur_grp) 
            {
                tot+=G[x].size();
            }
            tot /= 2;
            ll sz= cur_grp.size();
            ans += (sz * (sz-1))/2 - tot;
            szs.push_back(sz);
        }
    }

    if (ans == 0) 
    {
        sort(szs.begin(), szs.end());
        ans = szs[0] * szs[1];
    }

    printf("%lld\n", ans);

    return 0;
}