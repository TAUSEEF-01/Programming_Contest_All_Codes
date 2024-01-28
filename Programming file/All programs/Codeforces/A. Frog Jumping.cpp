//accepted
//https://codeforces.com/contest/1077/problem/A

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
    ll a, b, k;
    cin>>a>>b>>k;

    if(k%2==0)
    cout<<(a-b)*k/2<<endl;
    else
    cout<<(a-b)*(k-1)/2 + a<<endl;
}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}

