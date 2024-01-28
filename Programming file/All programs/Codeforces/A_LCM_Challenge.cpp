//accepted
//https://codeforces.com/contest/235/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;
    if(n<=2) cout<<n<<endl;
    else if(n&1) cout<<1LL*n*(n-1)*(n-2)<<endl;
    else
    {  
        if(n%3==0) cout<<1LL*(n-1)*(n-2)*(n-3)<<endl;
        else cout<<1LL*n*(n-1)*(n-3)<<endl;
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
        answer();
    }

    return 0;
}