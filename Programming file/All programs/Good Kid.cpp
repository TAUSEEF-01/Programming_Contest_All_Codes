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
    vector<int> a(n);
    int ans=1;
    int flag=0, zero=0;
    for(auto &x: a) 
    {
        cin>>x;
        if(x==0 && zero<1) 
        {
            zero++;
            continue;
        }
        ans*=x;
    }

    int maxi=vmax(a);
    if(zero)
    {
        cout<<ans<<endl;
    }
    else
    {
        int maxi=ans;
        for(int i=0; i<n; i++)
        {
            maxi=max(maxi, (ans/a[i])*(a[i]+1));
        }
        cout<<maxi<<endl;
    }
    
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







// else if(flag)
    // {
    //     if((ans/maxi)*(maxi+1)>= ans*2)
    //     cout<<(ans/maxi)*(maxi+1)<<endl;
    //     else
    //     cout<<ans*2<<endl;
    // }
    // else
    // {
    //     cout<<(ans/maxi)*(maxi+1)<<endl;
    // }