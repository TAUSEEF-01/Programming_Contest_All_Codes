//accepted
//https://codeforces.com/contest/1294/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void Collecting_Coins()
{
    ll a, b, c, n; cin>>a>>b>>c>>n;
    ll avg=(a+b+c+n)/3;
    if((a+b+c+n)%3==0 && a<=avg && b<=avg && c<=avg){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
        Collecting_Coins();
    }

    return 0;
}
