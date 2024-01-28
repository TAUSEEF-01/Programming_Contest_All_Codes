#include<bits/stdc++.h>
using namespace std;
#define ll long long


void Friendly_Arrays()
{
    ll n, m;
    cin>>n>>m;  

    vector<ll> a(n), b(m);

    ll b_or=0;
    for(auto &x: a) cin>>x;
    for(auto &x: b) cin>>x, b_or |= x;

    ll ans1=0, ans2=0;
    for(int i=0; i<n; i++)
    {
        ans1 ^= a[i];
        ans2 ^= (a[i] | b_or);
    }

    if(ans2 < ans1) swap(ans1, ans2);
    cout<<ans1<<' '<<ans2<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        Friendly_Arrays();
    }

    return 0;
}
