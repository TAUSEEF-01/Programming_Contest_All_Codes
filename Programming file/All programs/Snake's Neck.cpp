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
    int l1, l2;

    map<pair<int, int>, int> s1, s2;
    vector<pair<int, int>> a, b;

    cin>>l1;
    for(int i=0; i<l1; i++)
    {
        int x, y;
        cin>>x>>y;
        a.push_back({x, y});
    }

    cin>>l2;
    for(int i=0; i<l2; i++)
    {
        int x, y;
        cin>>x>>y;
        s2[{x, y}]=i;
    }
    
    int ans=0;
    int ctr=1;
    for(int i=0; i<l1-1; i++)
    {
        if(abs(s2[a[i]]-s2[a[i+1]])==1)
        {
            ctr++;
            ans=max(ans, ctr);
        }
        else 
        {
            ans=max(ans, ctr);
            ctr=1;
        }
    }

    if(ans==1) ans=0;
    cout<<ans<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}