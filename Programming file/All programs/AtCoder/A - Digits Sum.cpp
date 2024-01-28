//accepted
//https://atcoder.jp/contests/agc025/tasks/agc025_a

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

    if(ceil(log10((double)n))==floor(log10((double)n)))
    {
        n=n/2;
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        cout<<sum*2<<endl;
    }
    else
    {
        int sum=0;
        while(n>0)
        {
            sum+=n%10;
            n/=10;
        }
        cout<<sum<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}
