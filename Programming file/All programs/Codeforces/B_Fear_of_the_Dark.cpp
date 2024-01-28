//accepted
//https://codeforces.com/contest/1886/problem/B

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
#define grtsrt(a) sort(all(a), greater<ll>())
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
#define set_max(a) *(a.rbegin()) 
#define set_min(a) *a.begin() 
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
    double px, py, ax, ay, bx, by;
    cin>>px>>py>>ax>>ay>>bx>>by;

    auto dis= [](double x1, double y1, double x2, double y2)
    {
        return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    };


    double ap=dis(ax, ay, px, py),
    bp=dis(bx, by, px, py),
    ab=dis(ax, ay, bx, by),
    a0=dis(ax, ay, 0, 0),
    b0=dis(bx, by, 0, 0);


    double ans=1e9+7;
    ans=min(ans, max(ap, a0));
    ans=min(ans, max(bp, b0));
    ans=min(ans, max({ab/2, ap, b0}));
    ans=min(ans, max({ab/2, bp, a0}));
    cout<<setprecision(11)<<ans<<endl;

}   


int main()
{
    fast;
    
    // setIO();

    int test=1; 
    cin>>test;

    while(test--) 
    resoudre();

    return 0;
}