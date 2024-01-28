#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    double x, y, r;
    cin>>x>>y>>r;
    cout<<ceil((ceil(r/30)+x)/y)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    solve();

    return 0;
}
