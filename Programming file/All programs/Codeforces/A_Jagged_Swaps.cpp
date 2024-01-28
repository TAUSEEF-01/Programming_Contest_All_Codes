#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;
    vector<int> a(n), b;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    b=a;
    int flag=1;
    while(flag)
    {
        for(int i=1; i<n-1; i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1]) swap(a[i], a[i+1]);
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i]) 
            {
                flag=0;
                break;
            }
        }
        if(flag==0) 
        {
            for(int i=0; i<n; i++)
            {
                b[i]=a[i];
            }
            flag++;
        }
        else flag=0;
    }
    int ans=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            ans++;
            break;
        }
    }
    if(ans) cout<<"NO\n";
    else cout<<"YES\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
