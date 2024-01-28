//accepted
//https://codeforces.com/contest/1834/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;



void solve()
{
    int n;
    cin>>n;
    vector<double>a(n);
    double sum=0;
    int ctr=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        ctr*=a[i];
    }
    if(sum>=0 && ctr==1)
    {
        cout<<0<<endl;
    }
    else if(sum>=0 && ctr!=1)
    {
        cout<<1<<endl;
    }
    else
    {
        int ans=0;
        for(int i=0; i<n; i++)
        {
            ans++;
            sum+=2;
            ctr*=-1;
            if(sum>=0 && ctr==1)
            {
                break;
            }
        }
        cout<<ans<<endl;
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