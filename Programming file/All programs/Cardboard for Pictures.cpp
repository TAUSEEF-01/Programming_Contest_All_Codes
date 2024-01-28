//accepted
//https://codeforces.com/contest/1850/problem/E

#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#define ll long long
#define ull unsigned long long


void solve()
{
    ll n, c;
    cin>>n>>c;

    ll a=4LL*n, b=0LL, cc=0LL;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        b+=x;
        cc+=x*x;
    }

    ll lo=0, hi=1000000000+7, ans=0;
    while(hi>=lo)
    {
        ll mid=lo+(hi-lo)/2;
        if(__int128(n)*mid*mid*4+__int128(b)*mid*4+cc==c) //this compiler is not going to support it 
                                                          //because 64 bit processor and here int128() is being called
        {
            ans=mid;
            break;
        }
        else if(__int128(n)*mid*mid*4+__int128(b)*mid*4+cc<c)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    cout<<ans<<endl;
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
