// accepted
// https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;
const double pi=acos(-1);

const int val_dsu=1e5+10;

int parent[val_dsu];
int dsu_size[val_dsu];

multiset<int> dsu_sizes;

void make(int v)
{
    parent[v]= v;
    dsu_size[v]= 1;
    dsu_sizes.insert(1);
}

int find(int v)
{
    if(v == parent[v]) return v;
    // path compression:
    return parent[v]= find(parent[v]);
}

void merge(int a, int b)
{
    dsu_sizes.erase(dsu_sizes.find(dsu_size[a]));
    dsu_sizes.erase(dsu_sizes.find(dsu_size[b]));

    dsu_sizes.insert(dsu_size[a] + dsu_size[b]);
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
        merge(a, b);
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

        if(dsu_sizes.size()==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int mn= *(dsu_sizes.begin());
            int mx= *(--dsu_sizes.end());
            cout<<mx-mn<<endl;
        }
    }

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
