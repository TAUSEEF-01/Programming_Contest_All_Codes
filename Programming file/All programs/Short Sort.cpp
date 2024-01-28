#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    string a, b="abc";
    cin>>a;
    int ctr=0;
    for(int i=0; i<3; i++)
    {
        if(a[i]!=b[i]) ctr++;
    }
    if(ctr>2) cout<<"NO\n";
    else cout<<"YES\n";
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
