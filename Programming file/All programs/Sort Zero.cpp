#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;
    vector<int>a(100000), b(100000,0), c(100000,0);
    set<int>x;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
        x.insert(a[i]);
    }
    if(x.size()==1)
    {
        cout<<0<<endl;
        return;
    }
    int mark=n-1;
    int ctr=0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]>=a[i-1] && b[a[i]]==1)
        {
            mark=i-1;
        }
        else
        break;
    }
    mark--;
    for(int i=mark; i>=0; i--)
    {
        if(c[a[i]]==0)
        {
            ctr++;
        }
        c[a[i]]++;
    }
    cout<<ctr<<endl;
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