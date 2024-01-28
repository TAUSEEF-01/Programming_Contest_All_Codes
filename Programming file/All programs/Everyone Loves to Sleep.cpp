//accepted
//https://codeforces.com/contest/1714/problem/A

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
    int n, h, m;
    cin>>n>>h>>m;
    int sleep=h*60+m;
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        a.push_back(x*60+y);
    }

    vsort(a);
    int mini=vmin(a), maxi=vmax(a);
    int time=abs(sleep-mini);
    auto it=find(a.begin(), a.end(), sleep);

    if(it!=a.end())
    {
        cout<<0<<' '<<0<<endl;
    }
    else if(sleep<=maxi)
    {
        int mark=sleep;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>=sleep)
            {
                mark=a[i];
                break;
            }
        }
        time=mark-sleep;
        cout<<time/60<<' '<<time%60<<endl;
    }
    else
    {
        int extra=24*60-sleep;
        time=mini+extra;
        cout<<time/60<<' '<<time%60<<endl;
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