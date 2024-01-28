#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 


using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
#define takeinput(a) for(auto &x: a) cin>>x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
const ll mod = 1e9 + 7, inf = 1e18;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


const int M = 1e3;
vector<vector<pair<int, int>>> g(M);
bool vis[M];

// void dfs(int vertex, int &sum)
// {
//     // vis[vertex] = true;
//     for(auto &child: g[vertex])
//     {
//         if(vis[child]) continue;
//         dfs(child);
//     }
// }


void resoudre()
{
    int n;
    cin>>n;

    int sum=0;
    for(int i=0; i<n; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        a--, b--;
        sum += c;
        g[a].push_back({b, 0});
        g[b].push_back({a, c});
    }

    int sum1=0;
    dfs(0, sum1);
}


int main()
{
    fast;
    
    // setIO();

    int test=1; 
    // cin>>test;

    while(test--) 
    resoudre();

    return 0;
}
