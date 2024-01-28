//accepted
//https://codeforces.com/contest/1836/problem/B

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



void resoudre()
{
    ll n, k, g; cin>>n>>k>>g;

    ll hg=ceil((g)/(double)2);
    hg--;
    if((n-1)*hg>k*g) 
    {
        cout<<k*g<<endl;
    }
    else
    {
        ll remain=k*g-(n-1)*hg;
        ll ans, r=remain%g;
        if(r>=hg+1) ans=k*g-(remain+g-r);
        else ans=k*g-(remain-r);
        cout<<ans<<endl;
    }
}


int main()
{
    fast;
    
    setIO();

    int test=1; 
    cin>>test;

    while(test--) 
    resoudre();

    return 0;
}


/*

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



void resoudre()
{
    ll n, k, g; cin>>n>>k>>g;

    if(k*g<(n-1)*((g-1)/2))
    {
        cout<<g*k<<endl;
        return;
    } 

 
    ll remain=g*k-(n-1)*((g-1)/2); 
    ll r=remain%g;
    if(r>=((g-1)/2)+1) cout<<g*k-(remain+g-r)<<endl;
    else cout<<g*k-(remain-r)<<endl;
}


int main()
{
    fast;
    
    setIO();

    int test=1; 
    cin>>test;

    while(test--) 
    resoudre();

    return 0;
}

*/