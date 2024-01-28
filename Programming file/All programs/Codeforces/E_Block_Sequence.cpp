//accepted
//https://codeforces.com/contest/1881/problem/E

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
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int dp[n+1]={0};
    for(int i=n-1; i>=0; i--)
    {
        dp[i] = dp[i+1] + 1;
        if(a[i] + i < n)
        {
            dp[i] = min(dp[a[i] + i + 1], dp[i+1] + 1);
            /*
            index-->   0 1 2 3 4 5 --> dp[5+1]
            numbers--> 1 2 3 4 5
                           ^ --> dp[a[i]+i+1] --> dp[3+2+1] --> 6<5 --> false
                         ^ --> dp[a[i]+i+1] --> dp[2+1+1] --> 4<5 --> true --> dp[2]=min(dp[4], d[3]+1)
            */
        }
    }
    cout<<dp[0]<<endl;
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
