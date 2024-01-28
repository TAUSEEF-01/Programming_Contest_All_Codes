#include<bits/stdc++.h>
using namespace std;


/*dfs code: */
const int M = 1e5+10;
vector<int> g[M];
bool vis[M];

vector<vector<int>> cc;
vector<int>current_cc;

//4 sections in dfs to write code
//every section has a definition


void dfs(int vertex)
{
    /* Take action on vertex after entering the vertex */
    //if(vis[vertex]) return; //this can be written if inside for we haven't written vis child condition

    // cout<<vertex<<"\n";

    vis[vertex] = true;
    /*to check if components are connected -->
    applicable for listing of connected components*/
    current_cc.push_back(vertex);

    for(int child:g[vertex]){
        // cout<<"parent"<<vertex<<" ,child"<<child<<"\n";
        if(vis[child]) continue;
        /* Take action on child before entering the child node */
        dfs(child);
        /* Take action on child after existing the child node */
    }
    /* Take action on child before existing the vertex */
}




void graph_list_connected_components(int n)
{
    int ctr=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
    }
    //printing size or number of connected components
    cout<<"number of connected components: "<<cc.size()<<endl;

    //printing the list of connected components
    for(auto c_cc : cc)
    {
        for(int vertex : c_cc)
        {
            cout<<vertex<<' ';
        }
        cout<<endl;
    }
}




int graph_count_connected_components(int n)
{
    int ctr=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[i]) continue;
        dfs(i);
        ctr++;
    }
    return ctr;
}






bool dfs_loop_exists(int vertex, int parent)
{
    vis[vertex]= true;
    bool isLoopExists= false;
    for(int child: g[vertex])
    {
        if(vis[child] && child==parent) continue;
        if(vis[child]) return true;

        isLoopExists |= dfs_loop_exists(child, vertex); //or equal  --> |=
    }

    return isLoopExists;
}
void graph_is_loop_exists(int n)
{
    bool isLoopExists = false; //initializing with false value
                            // if at least 1 cycle exists then 
                            //replace with true value
    
    for(int i=1; i<=n; i++)
    {
        if(vis[i]) continue;
        if(dfs_loop_exists(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }
    cout<<isLoopExists<<endl;
}






void graph_input()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    // dfs(1);
    // cout<<graph_count_connected_components(n)<<endl;
    // graph_list_connected_components(n);
    // graph_is_loop_exists(n);
}


int main()
{
    graph_input();
    return 0;
}