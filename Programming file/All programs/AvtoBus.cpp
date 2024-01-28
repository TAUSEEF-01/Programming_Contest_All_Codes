//accepted
//https://codeforces.com/contest/1679/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void answer()
{
    ll n;
    cin>>n;

    if(n&1 || n<4)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll ans=n/6;
        if(ans*6<n)
        {
            if(n%6==4) ans++;
            else if(n%6==2) ans++;
        }
        cout<<ans<<' '<<n/4<<endl;
    }
}


int main()
{
    fast;

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
