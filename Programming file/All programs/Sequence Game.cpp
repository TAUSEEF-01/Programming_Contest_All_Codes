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



void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n), b;
    for(auto &x: a) cin>>x;
    for(int i=0; i<n-1; i++)
    {
        b.push_back(a[i]);
        if(a[i+1]<a[i]) b.push_back(a[i+1]);
    }
    b.push_back(a[n-1]);
    cout<<b.size()<<endl;
    for(auto &x: b) cout<<x<<' ';
    cout<<endl;

}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) 
    solve();

    return 0;
}

