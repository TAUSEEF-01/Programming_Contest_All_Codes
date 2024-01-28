//accepted
//https://codeforces.com/contest/1842/problem/A

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
    ll n, m;
    cin>>n>>m;
    vector<ll>a(n), b(m);
    ll sum1=0, sum2=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
        sum2+=b[i];
    }
    if(sum1>sum2)
    {
        cout<<"Tsondu\n";
    }
    else if(sum1<sum2)
    {
        cout<<"Tenzing\n";
    }
    else
    {
        cout<<"Draw\n";
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
