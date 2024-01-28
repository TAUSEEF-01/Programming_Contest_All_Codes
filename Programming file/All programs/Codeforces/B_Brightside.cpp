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
    int n, k;
    cin>>n>>k;

    int cnt=0, mark=0;
    for(int i=n; i>0; i--)
    {
        mark++;
        if(mark==k) 
        {
            cnt++;
            i-=(4-k);
            mark+=(4-k);
            k--;
        }

        // cout<<mark<<' '<<i<<' '<<k<<"--> "<<cnt<<endl;  
        if(k==0) 
        {
            k=4;
        }
        if(mark==4)
        {
            mark=0;
        }
        
    }

    cout<<cnt<<endl;
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
