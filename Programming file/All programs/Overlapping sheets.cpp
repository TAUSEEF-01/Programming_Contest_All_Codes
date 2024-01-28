//accepted
//https://atcoder.jp/contests/abc318/tasks/abc318_b

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
    int n;
    cin>>n;
    set<pair<int, int>> p;
    for(int i=0; i<n; i++)
    {
        int x1, x2, y1, y2;
        cin>>x1>>x2>>y1>>y2;
        for(int j=x1+1; j<=x2; j++)
        {
            for(int k=y1+1; k<=y2; k++)
            {
                p.insert({j, k});
            }
        }
    }
    cout<<p.size()<<endl;

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
