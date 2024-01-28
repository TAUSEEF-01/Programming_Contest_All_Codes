//accepted
//https://codeforces.com/contest/1834/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;



void solve()
{
    string a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }

    ll x=a.size(), y=b.size();
    ll mark=x, sum=0;
    if(x==y)
    {
        for(int i=0; i<x; i++)
        {
            if(a[i]!=b[i])
            {
                sum+=abs(b[i]-a[i]);
                mark=i+1;
                break;
            }
        }
        cout<<sum+(x-mark)*9<<endl;
    }
    else
    {
        for(int i=0; i<y-x; i++)
        {   
            sum+=b[i]-'0';
        }
        
        ll pp=(b[0]-'0');

        cout<<pp+(y-1)*9<<endl;
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