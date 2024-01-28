#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    int n;
    cin>>n;
    map<int, int> a;
    int maxi=-100, ctr=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a[x]++;
        if(a[x]%2!=0)
        {
            ctr++;
        }
        else
        {
            ctr--;
        }
        maxi=max(maxi, ctr);
    }
    cout<<maxi<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    solve();

    return 0;
}
