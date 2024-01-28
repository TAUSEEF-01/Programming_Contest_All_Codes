//accepted
//https://codeforces.com/contest/758/problem/A


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



void resoudre()
{
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto &x: a) cin>>x;
    ll emax= *max_element(a.begin(), a.end());
    ll ans=0;
    for(int i=0; i<n; i++) ans+=emax- a[i];
    cout<<ans<<endl;
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

