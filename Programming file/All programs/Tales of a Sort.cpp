//accepted
//https://codeforces.com/contest/1856/problem/A

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
    int n; cin>>n;
    vector<ll> a(n);
    ll flag=0, maxi=-INT_MAX, mini=INT_MAX;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        if(i>0)
        {
            if(a[i-1]>a[i])
            flag++;
        }
    }
    if(flag==0) cout<<0<<endl;
    else 
    {
        for(int i=n-1; i>0; i--)
        {
            if(a[i-1]>a[i])
            {
                maxi=max(maxi, a[i-1]);
            }
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
