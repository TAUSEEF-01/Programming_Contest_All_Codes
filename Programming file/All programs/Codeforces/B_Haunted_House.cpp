// accepted
// https://codeforces.com/contest/1884/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n; cin>>n;
    string a; cin>>a;

    ll cnt=0, sum=0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]=='1')
        {
            cnt++;
        }
        else
        {
            sum += cnt;
            cout<<sum<<' ';
        }
    }
    
    for(int i=0; i<cnt; i++) cout<<-1<<' ';
    
    cout<<endl;
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