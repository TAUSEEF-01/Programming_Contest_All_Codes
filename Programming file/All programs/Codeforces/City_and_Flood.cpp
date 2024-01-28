// accepted
// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;
const double pi=acos(-1);

const int val_dsu=1e5+10;

int parent[val_dsu];
int dsu_size[val_dsu];

void make(int v)
{
    parent[v]= v;
    dsu_size[v]= 1;
}

int find(int v)
{
    if(v == parent[v]) return v;
    // path compression:
    return parent[v]= find(parent[v]);
}

void Union(int a, int b)
{
    a= find(a);
    b= find(b);
    if(a != b)
    {
        // union by size:
        if(dsu_size[a] < dsu_size[b]) swap(a, b);
        parent[b]= a;
        dsu_size[a] += dsu_size[b];
    }
}


void solve()
{   
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        make(i);
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int x, y;
        cin>>x>>y;
        Union(x, y);
    }

    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(parent[i] == i) cnt++;
    }
    cout<<cnt<<endl;
}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    int t=1;
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
