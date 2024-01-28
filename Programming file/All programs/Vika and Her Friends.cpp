//accepted
//https://codeforces.com/contest/1848/problem/A

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
    int n, m, k;
    cin>>n>>m>>k;
    int x, y;
    cin>>x>>y;
    int sum=x+y, flag=0;
    vector<int>a(k);
    for(int i=0; i<k; i++)
    {
        int x1, y1;
        cin>>x1>>y1;
        if(abs((x1+y1)-sum)%2==0)
        flag++;
    }
    if(flag==0)
    cout<<"YES\n";
    else
    cout<<"NO\n";

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
