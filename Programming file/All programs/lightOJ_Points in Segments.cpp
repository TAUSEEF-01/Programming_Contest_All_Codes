//accepted
//https://lightoj.com/problem/points-in-segments
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    int l=1;
    while (t--)
    {
        cout<<"Case "<<l++<<": "<<endl;
        ll x,y;
        cin>>x>>y;
        vector<ll>a(x);
        for(int i=0; i<x; ++i)
        {
            cin>>a[i];
        }
        for(int i=0; i<y; ++i)
        {
            int n, m;
            cin>>n>>m;
            int p= lower_bound(a.begin(), a.end(), n) - a.begin();
            int q= upper_bound(a.begin(), a.end(), m) - a.begin();
            cout<<q-p<<endl;
        }
    }
    return 0;
}
