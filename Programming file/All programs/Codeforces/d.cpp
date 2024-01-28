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
    string a, b;
    cin>>a>>b;
    if(a.size()!=b.size()) cout<<"No\n";
    else
    {
        int n=a.size();
        set<int> st;
        for(int i=0; i<n; i++)
        {
            st.insert(a[i]-b[i]);
        }

        if(st.size()==1) cout<<"Yes\n";
        else if(st.size()==2)
        {
            int x=*st.begin(), y=*st.rbegin();
            if(x+26==y || x-26==y) cout<<"Yes\n";
            else cout<<"No\n";
        }
        else cout<<"No\n";
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
