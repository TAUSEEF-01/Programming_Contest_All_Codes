#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty()) 
const ll N=1e9+7;


void solve()
{
    int n, m;
    cin>>n>>m;

    set<int> a;
    for(int i=0; i<m; i++) 
    {
        int num;
        cin>>num;
        a.insert(num);
    }

    if(a.size()<=n)
    {
        cout<<0<<endl;
    }
    else
    {
        vector<int> b, store;
        for(auto &x: a) b.push_back(x);
        for(int i=1; i<b.size(); i++) 
        {
            store.push_back(b[i]-b[i-1]);
        }
        vsort(store);
        int ans=0;
        
        for(int i=0; i<store.size()-n+1; i++)
        {
            ans+=store[i];
        }
        cout<<ans<<endl;
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

















        // int p1=n/2, p2=n/2+1;



        // cout<<a[m-1]-a[n-1]<<endl;
        // int nn=n, store_min, store_max;
        // // int x=0, y=m-1;
        // while(nn-- && !a.empty())
        // {
        //     if(nn&1)
        //     {
        //         // a[y--]=0;
        //         int maxi=smax(a);
        //         store_max=maxi;
        //         a.erase(maxi);
        //     }
        //     else
        //     {
        //         int mini=smin(a);
        //         store_min=mini;
        //         a.erase(mini);
        //     }
        // }
        // // cout<<smax(a)-smin(a)<<endl;
        // cout<<store_max-store_min<<endl;