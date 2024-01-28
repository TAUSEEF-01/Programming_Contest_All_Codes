//accepted
//https://codeforces.com/contest/1875/problem/B


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
#define takeinput(a) for(auto &x: a) cin>>x;
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
    ll n, m, k;
    cin>>n>>m>>k;

    vl a(n), b(m); 
    takeinput(a);
    takeinput(b);


    for(int i=1; i<=min(k, 2LL+(k&1)); i++)
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(i&1)
        {
            if(a[0]<b[m-1]) swap(a[0], b[m-1]);
        }
        else
        {
            if(a[n-1]>b[0]) swap(a[n-1], b[0]);
        }
    }

    ll sum=0;
    for(int i=0; i<n; i++) sum+=a[i];
    cout<<sum<<endl;
}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}
