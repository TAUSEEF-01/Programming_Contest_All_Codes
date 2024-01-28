//accepted
//https://codeforces.com/contest/1837/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    int x, k;
    cin>>x>>k;

    if(x%k!=0)
    {
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<x+1<<' '<<-1<<endl;
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

