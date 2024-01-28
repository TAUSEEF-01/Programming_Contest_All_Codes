#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int cnt=0, ans=0, flag=0, pos=-1;
    // vector<int> v;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]=='A' && pos==-1) 
        {
            pos=i;
        }
        if(a[i]=='A' && a[i+1]=='B')
        {
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<0<<endl;
        return;
    }
    int pos2=-1;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]=='B')
        {
            pos2=i;
            break;
        }
    }
    // int vs=v.size();
    // for(int i=1; i<vs; i++)
    // {
    //     ans+=(v[i]-
    // }
    
    for(int i=pos; i<pos2; i++)
    {
        if(a[i]=='A')
        {
            ans+=(i-pos);
            pos=i;
        }

    }
    // if(a[n-1]!='A')
    // {
        ans+=(pos2-pos);
        // ans--;
    // }
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
