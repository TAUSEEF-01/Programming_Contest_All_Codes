// accepted
// https://vjudge.net/problem/AtCoder-abc151_b/origin

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


void solve()
{
    int n, k, m;
    cin>>n>>k>>m;

    int sum=0, target=n*m;
    vector<int> a(n-1);
    for(int i=0; i<n-1; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if(sum >=target) cout<<0<<endl;
    else if(target-sum <= k) cout<<target-sum<<endl;
    else cout<<-1<<endl;

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


    int t=1;
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
