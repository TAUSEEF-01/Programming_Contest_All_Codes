#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    ll a, b;
    cin>>a>>b;
    if((a+b)&1) cout<<"Alice\n";
    else cout<<"Bob\n";
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
