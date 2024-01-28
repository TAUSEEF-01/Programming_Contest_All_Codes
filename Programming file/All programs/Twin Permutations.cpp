//accepted
//https://codeforces.com/contest/1831/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int mini=INT_MAX, maxi=-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<mini+maxi-a[i]<<' ';
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
    {
        solve();
    }

    return 0;
}