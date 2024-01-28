//accepted
//https://vjudge.net/problem/AtCoder-abc141_d/origin

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
    int n, m;
    cin>>n>>m;
    priority_queue<ll>a;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        a.push(x);
    }
    while(m--)
    {
        ll x=a.top()/2;
        a.pop();
        a.push(x);
    }
    ll sum=0;
    while(!a.empty())
    {
        ll x=a.top();
        a.pop();
        sum+=x;
    }
    cout<<sum<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    

    solve();


    return 0;
}
