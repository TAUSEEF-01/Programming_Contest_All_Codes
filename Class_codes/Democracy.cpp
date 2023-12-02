#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;

    unordered_map<string, int> mp;
    int maxi=-INT_MAX;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        mp[a]++;
        maxi=max(maxi, mp[a]);
    }

    cout<<maxi<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
