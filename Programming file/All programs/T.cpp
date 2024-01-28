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
    int m, n;
    cin>>m>>n;
    unordered_map<string, int> a;
    
    for(int i=0; i<m; i++)
    {
        string s;
        int num;
        cin>>s>>num;
        a[s]=num;
    }
    for(int i=0; i<n; i++)
    {
        ll sum=0;
        while(1)
        {
            string s;
            cin>>s;
            if(s==".") break;
            else 
            {
                for(auto &x: a)
                {
                    if(s==x.first)
                    {
                        sum+=x.second;
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
