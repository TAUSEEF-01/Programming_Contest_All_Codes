//accepted
//https://codeforces.com/contest/1850/problem/B

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

    vector<int>a;
    int maxi=-INT_MAX, ans=1;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        if(x<=10)
        {
            if(y>=maxi)
            {
                ans=i+1;
            }
            maxi=max(maxi, y);
        }
    }
    cout<<ans<<endl;
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