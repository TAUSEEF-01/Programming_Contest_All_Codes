// accepted
// https://codeforces.com/contest/1903/problem/B

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
    int n;
    cin>>n;

    vector<vector<int>> a(n, vector<int>(n, 0)), b(n, vector<int>(n, 0));
    vector<int> ans(n, (1<<30)-1);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(i!=j)
            ans[i] &=a[i][j];
        }
    }
    

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j) continue;
            if((ans[i]|ans[j])!=a[i][j])
            {
                cout<<"NO\n";
                return;
            }
        }
    }

    cout<<"YES\n";
    for(auto &num: ans) cout<<num<<' ';
    cout<<endl;

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
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

