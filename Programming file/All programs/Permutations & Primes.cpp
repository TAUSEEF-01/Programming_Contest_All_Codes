//accepted
//https://codeforces.com/contest/1844/problem/B

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
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n==2)
    {
        cout<<1<<' '<<2<<endl;
        return;
    }
    else
    {
        for(int i=2; i<=n/2+2; i++)
        {
            if(i==3)
            continue;
            else
            cout<<i<<' ';
        }
        cout<<1<<' ';
        for(int i=n/2+3; i<=n; i++)
        {
            if(i==3)
            continue;
            else
            cout<<i<<' ';
        }
        cout<<3<<endl;
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