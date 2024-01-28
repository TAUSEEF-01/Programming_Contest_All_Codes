//accepted
//https://vjudge.net/problem/CodeChef-SUMNCR/origin

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vsort(a) sort(a.begin(), a.end());
const int N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    int even=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        even++;
    }
    if(n%2==0)
    {
        cout<<0<<endl;
        return;
    }

    if(even!=0)
    {
        cout<<1<<endl;
        return;
    }

    ll sum=INT_MAX;
    for(int i=0; i<n; i++)
    {
    
        ll mark=1;
        while(1)
        {
            a[i]/=2;
            mark*=2;
            if(a[i]==0 || a[i]%2==0)
            {
                break;
            }
        }
        if(a[i]!=0)
        {
            sum=min(sum,mark);
        }
    }
    if(sum==INT_MAX)
    cout<<-1<<endl;
    else
    cout<<sum<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    
    while(t--)
    {
        solve();
    }

    return 0;
}