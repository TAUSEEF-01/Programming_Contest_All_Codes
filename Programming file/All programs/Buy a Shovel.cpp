//accepted
//https://codeforces.com/contest/732/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void Buy_a_Shovel()
{
    int k, r; 
    cin>>k>>r;
    int ans=1;
    while(1)
    {
        if(((k*ans-r) % 10 == 0) || ((k*ans) % 10 == 0)) 
        {
            cout<<ans<<endl;
            return;
        }
        ans++;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;

    for(int i=0; i<t; i++)
    {
        Buy_a_Shovel();
    }

    return 0;
}
