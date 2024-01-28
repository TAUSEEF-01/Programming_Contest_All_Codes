#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll number(int n)
{
    ll ans=1;
    for(int i=n; i>0; i--)
    {
        ans*=i;
    }
    return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    cin>>a;
    sort(a.begin(), a.end());

    vector<string>x;
    x.push_back(a);
    while(next_permutation(a.begin(), a.end()))
    {
        x.push_back(a);
    }

    cout<<x.size()<<endl;


    for(auto &r: x)
    {
        cout<<r<<endl;
    }
    
    return 0;
}