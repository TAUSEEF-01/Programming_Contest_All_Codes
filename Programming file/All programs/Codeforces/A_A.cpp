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
    int n, h, x;
    cin>>n>>h>>x;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(a[i]+h>=x)
        {
            cout<<i+1<<endl;
            return;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
