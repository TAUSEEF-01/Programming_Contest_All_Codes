#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int N=1e7+10;


void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n+1);
    ll ans=0;
    
    for(int i=1; i<n; i++)
    {
        cout<<i*2<<' ';
        ans+=i*2;
    }
    for(int i=n; i<=1000; i++)
    {
        if(i%n==0 && (ans+i)%n==0)
        {
            cout<<i;
            break;
        }
    }
    cout<<endl;
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

