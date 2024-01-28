#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    unordered_map<string, int>b;
    for(int i=0; i<n-1; i++)
    {
        string p = string() + a[i] + a[i+1];
        b[p]++;
    }

    cout<<b.size()<<endl;
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

