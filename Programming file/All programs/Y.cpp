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
    int n;
    cin>>n;
    unordered_map<int, unordered_map<int, string>> a;
    for(int i=0; i<n; i++)
    {
        int x, y;
        string s;
        cin>>x>>y>>s;
        a[x][y]=s;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int x, y;
        cin>>x>>y;
        cout<<a[x][y]<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    

    return 0;
}
