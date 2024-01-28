// accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin>> n>> q;
        vector<ll> a(n+10), mark(n+10);
        ll l, r, k;
        ll sumt=0;
        for(int i=1; i<=n; ++i)
        {
            cin>>a[i];
            sumt+= a[i];
            mark[i]=sumt;
        }
        for(int i=1; i<=q; ++i)
        {
            ll sum = sumt;
            cin>> l>> r >> k;
            sum= sum - (mark[r] - mark[l-1]) + (r-l+1)*k;

            if(sum %2 !=0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }

    return 0;
}