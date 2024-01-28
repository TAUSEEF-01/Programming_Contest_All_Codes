//accepted
//https://codeforces.com/contest/1867/problem/C


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


ll MAX_element_not_in_array(vector<ll> a, ll n)
{
    vector<ll> cnt(n+1);
    for(int i=0; i<n; i++)
    {
        if(a[i]<=n) 
        cnt[a[i]]++;
    }

    ll mex=0;
    while (cnt[mex]) 
    {
        mex++;
    }
    return mex;
}


void resoudre()
{
    ll n;
    cin>>n;

    vl a(n+10, 0);
    for(int i=0; i<n; i++)
    cin>>a[i];

    ll num= MAX_element_not_in_array(a, n);
    
    while(1)
    {
        cout<<num<<endl;

        ll x;
        cin>>x;
        if(x==-1) break;
        else if(x==-2) break;

        num=x;
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
