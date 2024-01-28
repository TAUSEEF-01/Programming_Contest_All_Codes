//accepted
//https://codeforces.com/contest/1154/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    vector<ll> a(4);
    for(int i=0; i<4; i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=0; i<3; i++)
    cout<<a[3]-a[i]<<' ';
    cout<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    answer();

    return 0;
}
