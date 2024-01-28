//accepted
//https://codeforces.com/contest/1837/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;

    int ans=0, ctr1=2, ctr2=2;

    set<int>x;
    int p=0;
    x.insert(p);

    int mini=0, maxi=0;
    
    for(int i=0; i<n; i++)
    {
        if(a[i]=='>' && a[i+1]=='>')
        {
            p--;
        }
        else if(a[i]=='>' && a[i+1]=='<')
        {
            p=mini;
        }
        else if(a[i]=='<' && a[i+1]=='<')
        {
            p++;
        }
        else
        {
            p=maxi;
        }
        mini=min(mini,p);
        maxi=max(maxi,p);

        x.insert(p);
    }
    
    ans=x.size();

    cout<<ans+1<<endl;

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