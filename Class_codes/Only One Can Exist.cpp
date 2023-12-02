#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;

    vector<string> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int curr=0;
    while(1)
    {
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(a[i].size()>curr)
            {
                flag++;
                cout<<a[i][curr];
            }
        }
        curr++;
        if(flag==0) break;
    }
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
