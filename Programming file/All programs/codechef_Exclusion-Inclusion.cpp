#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(), a.end());
    cout<<sum<<' ';
    for(int i=0; i<n-1; i++)
    {
        sum-=a[i];
        cout<<sum<<' ';
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    solve();

    return 0;
}
