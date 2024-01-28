//accepted
//https://codeforces.com/contest/1843/problem/B

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
    ll n;
    cin>>n;
    vector<ll>a(n), b;
    ull ctr=0;
    ull sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>=0)
        sum+=a[i];
        else
        sum+=-a[i];
        if(a[i]!=0)
        {
            b.push_back(a[i]);
        }

    }
    if(sum==0)
    {
        cout<<0<<' '<<0<<endl;
        return;
    }
    else
    {
        for(int i=0; i<b.size()-1; i++)
        {
            if(b[i]>0 && b[i+1]<0)
            {
                ctr++;
            }
        }
        if(b[0]<0)
        ctr++;
    }
    cout<<sum<<' '<<ctr<<endl;
    
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
