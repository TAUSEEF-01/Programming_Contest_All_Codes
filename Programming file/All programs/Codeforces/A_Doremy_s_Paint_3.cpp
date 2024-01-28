#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;
    vector<int> a(n);
    ll sum=0;
    set<int> st;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
        mp[a[i]]++;
    }
    
    if(st.size()>2)
    {
        cout<<"No\n";
        return;
    }   
    else
    {   
        if(abs(mp[*(st.begin())]-mp[*(st.rbegin())])<=1)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
