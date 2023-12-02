#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    string a;
    cin>>a;
    int r;
    cin>>r;

    int n=a.size();
    int p=(r)%n;

    for(int i=p; i<n; i++)
    cout<<a[i];
    for(int i=0; i<p; i++)
    cout<<a[i];
    cout<<endl;
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
