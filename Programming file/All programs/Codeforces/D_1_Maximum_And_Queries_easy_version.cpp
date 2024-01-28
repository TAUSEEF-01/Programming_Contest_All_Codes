#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 


using ll = long long;
using ull = unsigned long long;
using vb = vector<bool>;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vs = vector<string>;
#define pb push_back
#define all(vec) vec.begin(), vec.end()
#define asort(vec) sort(all(vec))
#define vec_min(vec) *min_element(all(vec))
#define vec_max(vec) *max_element(all(vec))
#define ub(vec, x) upper_bound(all(vec), x)
#define ub(vec, x) upper_bound(all(vec), x)
const double pi=acos(-1);
const ll MOD = 1e9 + 7;



void solve()
{
    ll n, q;
    cin>>n>>q;
    
    vl a(n);
    for(auto &x: a) cin>>x;

    while(q--)
    {
        auto b= a;

        ll k;
        cin>>k;

        ll ans=0;
        for(int i=60; i>=0; i--)
        {
            for(auto x: b)
            {
                if(x&(1LL<<i)) continue;

            }
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


    int test=1;
    // cin>>test;

    for(int i=1; i<=test; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}


