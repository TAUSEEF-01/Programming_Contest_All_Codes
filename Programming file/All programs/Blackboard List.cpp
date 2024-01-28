//accepted
//https://codeforces.com/contest/1838/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    ll mini=INT_MAX, maxi=-INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        maxi=max(maxi, a[i]);
        mini=min(mini, a[i]);
    }
    if(mini<0)
    {
        cout<<mini<<endl;
    }
    else
    {
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