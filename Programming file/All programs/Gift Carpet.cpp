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
    int n, m;
    cin>>n>>m;
    vector<string> a(n);
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        a[i]=s;
    }
    int v=0, ii=0, aa=0, k=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[j][i]=='v' && v==0) {v++; break;}
            else if(v!=0 && a[j][i]=='i' && ii==0) {ii++; break;}
            else if(ii!=0 && a[j][i]=='k' && k==0) {k++; break;}
            else if(k!=0 && a[j][i]=='a' && aa==0) {aa++; break;}
        }
    }

    if(v!=0 && ii!=0 && k!=0 && aa!=0)
    cout<<"YES\n";
    else 
    cout<<"NO\n";

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

