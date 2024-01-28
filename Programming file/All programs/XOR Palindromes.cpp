//accepted
//https://codeforces.com/contest/1867/problem/B


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;
    string a;
    cin>>a; 

    int must_change=0, matching_pair=0;
    for(int i=0; i<n/2; i++)
    {
        if(a[i]==a[n-1-i]) matching_pair+=2;
        else must_change+=1;
    }
    
    string ans(n+1, '0');
    for(int i=must_change; i<n+1; i+=2)
    {
        if(i>=must_change && i<=must_change+matching_pair) 
        {
            ans[i]='1';
            if(n&1) ans[i+1]='1';
        }
    }

    /*

    if(n&1)
    {
        for(int i=0; i<n+1; i++)
        {
            if(i>=must_change && i<=must_change+matching_pair+1) ans[i]='1';
        }
    }
    else
    {
        for(int i=must_change; i<n+1; i+=2)
        {
            if(i>=must_change && i<=must_change+matching_pair) ans[i]='1';
        }
    }

    */
    cout<<ans<<endl;
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