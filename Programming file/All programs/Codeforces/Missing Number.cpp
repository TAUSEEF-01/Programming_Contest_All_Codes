// accepted
// https://vjudge.net/problem/CSES-1083/origin

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
    int n;
    cin>>n;
    vector<int> mark(n+1, 0);
    for(int i=0; i<n-1; i++)
    {
        int p;
        cin>>p;
        mark[p]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(mark[i]==0)
        {
            cout<<i<<endl;
            return;
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


    int t=1;
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

