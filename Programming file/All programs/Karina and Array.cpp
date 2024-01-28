//accepted
//https://codeforces.com/contest/1822/problem/B
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

    while (t--)
    {
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        cout<<max(a[0]*a[1], a[n-1]*a[n-2])<<endl;
    }
    return 0;
}

