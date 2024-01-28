#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    ll n, m;
    cin>>n>>m;
    vector<ll> a(n), b(m);
    // map<ll, vector<ll>> mp;
    pair<ll, vector<ll>> pr;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(!(a[i]&1))
        {
            if((a[i]&(a[i]-1))==0)
            {
                // mp[(int)log2(a[i])].push_back(a[i]);
                
            }
            else
            {
                // mp[]
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
