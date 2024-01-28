#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+7;


void solve()
{
    ll n, k;
    cin>>n>>k;

    vector<ll>a(n), b(n), q(n);
    map<ll,vector<ll>>p;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        q[i]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=0; i<n; i++)
    {
        p[a[i]].push_back(b[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=p[q[i]].size()-1; j>=0; j--)
        {
            cout<<p[q[i]][j]<<' ';
            p[q[i]].pop_back();
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
