//accepted
//https://codeforces.com/contest/1843/problem/D

//sln watched

/* main thing to learn in this problem is how to calculate the number of leaves form a given node */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


vector<vector<ll>> g;
vector<ll> children;


void dfs(int node, int parent)
{
    if(g[node].size()==1 && g[node][0] == parent) //parent is the only node connected to current node then this must be the leaf
                                                  //as the leaf of a tree is connected to only one node that is its parent node
    {
        children[node]=1; //here we assign the value 1 to the leaf node as the leaf is to be counted
    }
    else
    {
        for(auto child:g[node])
        {
            if(child!=parent)
            {
                dfs(child, node);
                children[node] += children[child]; //here we calculate the number of leaves we can get 
                                                   //if we traverse through the tree till reach the bottom or leaf
            }
        }
    }
}


void solve()
{
    int n;
    cin>>n;

    g.assign(n, vector<ll>());
    
    for(int i=0; i<n-1; i++)
    {
        ll v1,v2;
        cin>>v1>>v2;
        v1--; //here we decrement the values to make it compatible with the 0 based indexing of the vector
        v2--;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    children.assign(n, 0);
    dfs(0, -1);

    int q;
    cin>>q;
    
    for(int i=0; i<q; i++)
    {
        ll v1, v2;
        cin>>v1>>v2;
        v1--;
        v2--;
        ll ans=children[v1]*children[v2]; //by using the product rule 
        cout<<ans<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}

