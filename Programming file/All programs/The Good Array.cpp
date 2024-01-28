//accepted
//https://codeforces.com/contest/1839/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    double n, k;
    cin>>n>>k;
    /*
    if(k==1)
    {
        cout<<n<<endl;
    }
    else if((int)n%(int)k!=1)
    {
        cout<<ceil(n/k)+1<<endl;
    }
    else
    {
        cout<<ceil(n/k)<<endl;
    }
    */
    cout<<ceil((n-1)/k)+1<<endl; // tutorial sln
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