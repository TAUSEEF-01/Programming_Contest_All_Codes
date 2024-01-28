//accepted
//https://codeforces.com/contest/1851/problem/A

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
    int n, m, k, h;
    cin>>n>>m>>k>>h;
    vector<ll> a(n);
    int ctr=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(abs(h-(a[i]+k*j))==0)
            {
                ctr++;
                break;
            }
            else if(abs(a[i]-h)==k*j)
            {
                ctr++;
                break;
            }
        }
    }
    cout<<ctr<<endl;
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
