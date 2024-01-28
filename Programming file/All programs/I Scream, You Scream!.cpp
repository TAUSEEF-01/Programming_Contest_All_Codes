//accepted
//https://vjudge.net/problem/Toph-i-scream-you-scream/origin

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=3.141592653589793238462643383279502884197;


void solve()
{
    double r;
    cin>>r;
    cout<<setprecision(15)<<4*pi*r*r*r/3<<endl;
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
