//accepted
//https://atcoder.jp/contests/abc318/tasks/abc318_c

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
    ll n, d, p;
    cin>>n>>d>>p;
    vector<ll> f(n);
    for(auto &x: f) 
    {
        cin>>x;
    }

    ll sum=0, ctr=0, temp=0;

    sort(f.begin(), f.end(), greater<ll>());

    for(int i=0; i<n; i++)
    {
        temp+=f[i];
        ctr++;
        if(ctr==d)
        {
            if(temp>=p)
            {
                sum+=p;
            }
            else
            {
                sum+=temp;
            }
            ctr=0;
            temp=0;
        }
        else if(temp>=p && ctr<=d)
        {
            sum+=p;
            i=i+abs(d-ctr);
            ctr=0;
            temp=0;
        } 
    }

    sum+=temp;
    cout<<sum<<endl;

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