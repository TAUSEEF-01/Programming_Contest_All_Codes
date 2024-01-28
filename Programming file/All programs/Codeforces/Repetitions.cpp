// accepted
// https://vjudge.net/problem/CSES-1069/origin

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


void solve()
{
    string a;
    cin>>a;
    int ctr=1, maxi=-INT_MAX, n=a.size();
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            maxi=max(ctr, maxi);
            ctr=1;
        }
        else
        {
            ctr++;
        }
    }
    maxi=max(ctr, maxi);
    cout<<maxi<<endl;
}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    int t=1;
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

