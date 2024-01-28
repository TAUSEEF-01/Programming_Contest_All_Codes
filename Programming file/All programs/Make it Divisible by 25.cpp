//accepted
//https://codeforces.com/contest/1593/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    string a; cin>>a;
    int ctr=0, mark=0, mini=INT_MAX;

    for(int i=a.size()-1; i>=0; i--)
    {
        if(a[i]=='0' && mark==0)
        {
            mark++;
        }
        else if(mark!=0 && (a[i]=='0' || a[i]=='5'))
        {
            mini=min(mini, ctr);
            break;
        }
        else
        {
            ctr++;
        }
    }
    
    mark=ctr=0;

    for(int i=a.size()-1; i>=0; i--)
    {
        if(a[i]=='5' && mark==0)
        {
            mark++;
        }
        else if(mark!=0 && (a[i]=='2' || a[i]=='7'))
        {
            break;
        }
        else
        {
            ctr++;
        }
    }
    cout<<min(mini, ctr)<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin>>t;

    for(int i=0; i<t; i++) answer();

    return 0;
}