//accepted
//https://codeforces.com/contest/34/problem/B

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
    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x<0) a.push_back(x);
    }
    vsort(a);
    int sum=0;
    int p=min((int)a.size(), m);
    for(int i=0; i<p; i++)
    {
        sum+=a[i];
    }
    cout<<-sum<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    

    return 0;
}
