// accepted
// https://cses.fi/problemset/task/2431/

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
    ll k;
    cin >> k;
    ll aux = 9;
    ll digit = 1;
    while (k > aux * digit) 
    {
        k -= aux * digit;
        aux *= 10;
        digit++;
    }

    ll ans = 1;
    for (int i = 0; i < digit - 1; i++) 
    {
        ans *= 10;
    }

    ans += (k - 1) / digit;
    k -= (k - 1) / digit * digit;
    ll helper = 1;

    for (int i = 0; i < digit - k; i++) 
    {
        helper *= 10;
    }
    cout << ans / helper % 10 << '\n';
    
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
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
