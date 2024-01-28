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
    int x, y, n;
    cin>>x>>y>>n;
    if(y-x<(n*(n-1)/2))
    {
        cout<<-1<<endl;
    }
    else 
    {
        int nn=1;
        set<int> a;
        int p=y;
        for(int i=n; i>=2; i--)
        {
            a.insert(p);
            p-=nn;
            nn++;
        }
        a.insert(x);
        for(auto &p: a) cout<<p<<' ';
        cout<<endl;
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
