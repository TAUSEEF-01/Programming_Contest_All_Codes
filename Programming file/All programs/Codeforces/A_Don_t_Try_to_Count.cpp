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
    string x, s;
    cin>>x>>s;
    int p=ceil(log2(m))+1;
    int ctr=0;
    while(p--)
    {
        // cout<<x.find(s)<<endl;
        if(x.find(s)<x.size())
        {
            cout<<ctr<<endl;
            return;
        }
        ctr++;
        x+=x;
    }
    cout<<-1<<endl;
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
