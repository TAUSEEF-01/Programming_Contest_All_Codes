#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    string a;
    cin>>a;
    int n=a.size();
    if(n%2!=0)
    {
        n/=2;
        n--;
    }
    else
    {
        n/=2;
    }
    int ctr=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
        {
            ctr++;
            break;
        }
    }
    if(ctr!=0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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

