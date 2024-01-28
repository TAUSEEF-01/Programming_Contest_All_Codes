//accepted
//https://codeforces.com/problemset/problem/489/B

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
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>m;
    vector<int>b(m);
    for(int i=0; i<m; i++) cin>>b[i];
    vsort(a); vsort(b);
    int ctr=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(b[j]-a[i])<=1)
            {
                ctr++;
                b[j]=INT_MAX;
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
    
    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}
