//accepted
//https://codeforces.com/contest/1843/problem/A

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
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vsort(a);
    int sum=0;
    for(int i=0; i<n/2; i++)
    {
        sum+=a[n-i-1]-a[i];
    }
    cout<<sum<<endl;
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
