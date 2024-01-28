//accepted
//https://codeforces.com/contest/919/problem/B


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int count_10(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}


void Perfect_Number()
{
    int n;
    cin>>n;

    int ans=0;
    while(n)
    {
        ans++;
        if(count_10(ans)==10) n--;
    }
    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;

    for(int i=0; i<t; i++)
    {
        Perfect_Number();
    }

    return 0;
}
