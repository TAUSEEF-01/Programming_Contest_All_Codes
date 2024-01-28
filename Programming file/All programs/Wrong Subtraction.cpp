//accepted
//https://codeforces.com/contest/977/problem/A

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
    ll n, k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    solve();


    return 0;
}
