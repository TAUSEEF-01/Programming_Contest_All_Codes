//accepted
//https://codeforces.com/gym/104639/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


const int M= 1e6+5;
vector<int> g[M]; // An adjacency list to represent the graph.
vector<int> vis(M); // A vector to keep track of visited nodes.
vector<int> cur_grp; // A vector to store the current connected component.


void dfs(int u)
{
    vis[u]=1;
    cur_grp.push_back(u);
    for(auto v: g[u])
    {
        if(vis[v]) continue;
        dfs(v);
    }
}


void solve()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    ll ans= 0;
    vector<int> store_size;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            cur_grp.clear();
            dfs(i); // Find the connected component containing node i.

            ll total=0;
            for(auto &x: cur_grp)
            {
                total += g[x].size(); // Calculate the total number of edges within the component.
            }
            total /= 2; // Divide by 2 because each edge is counted twice.
            ll sz= cur_grp.size(); // Size of the current connected component.
            ans += (sz * (sz-1))/2 - total; // (sz * (sz-1))/2  --> This is equivalent to finding the binomial coefficient 
                                            // "n choose 2" or "combinations of n items taken 2 at a time." 
                                            // It's a common mathematical formula used to calculate the number of ways 
                                            // you can choose 2 items from a set of n items.
                                            
            /* (sz * (sz-1))/2 - total  -->  This difference is basically about the possible combination 
            minus the current combinations.
            If difference is not 0 then there must have missed some combination of 2 meaning that 
            some nodes are not connected with other nodes which will lead us to our desired answer
            */
            store_size.push_back(sz);
        }
    }

    if(ans==0)
    {
        vsort(store_size);
        ans= store_size[0] * store_size[1];
    }

    cout<<ans<<endl;
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
