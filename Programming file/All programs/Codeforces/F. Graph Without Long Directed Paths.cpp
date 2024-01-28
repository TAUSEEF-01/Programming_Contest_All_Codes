//accepted
//https://codeforces.com/contest/1144/problem/F

//very good editorial:
//https://codeforces.com/blog/entry/66307

#include <bits/stdc++.h>
using namespace std;
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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


const int M = 2e5+10;
vvi adj(M);
vi col(M, -1); //initialize to -1 so that a 0 value is not wrongly considered
vi vis(M);

bool dfs(int u)
{
    vis[u]=1;
    for(int &v: adj[u])
    {
        if(col[v]==col[u])
        {
            return false;
        }
        else if(!vis[v])
        {
            col[v]=!col[u];
            if(dfs(v)==false) return false;
        }
    }
    return true;
}


void graph_input()
{
    int n, m;
    cin>>n>>m;

    vvi el;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        el.push_back({x, y});
    }

    col[1]=true;
    if(dfs(1))
    {
        cout<<"YES\n";
        string ans="";
        for(int i=0; i<m; i++) //iterating over all edges
        {
            int u=el[i][0], v=el[i][1];
            if(col[u]) //u is an outgoing node
            ans+='1';
            else 
            ans+='0';
        }
        cout<<ans<<endl;
    }
    else
    {
        cout<<"NO\n";
    }
}

void resoudre()
{  
    graph_input();
}


int main()
{
    fast;
    
    // setIO();

    int test=1; 
    // cin>>test;

    while(test--) resoudre();

    return 0;
}
