#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k;
    cin>>n>>k;
    if(k==0)
    {
        if(n&1) cout<<1<<endl;
        else cout<<0<<endl;
    }
    else if(n==0) 
    {
        cout<<k<<endl;
    }
    else if(n==k)
    {
        cout<<0<<endl;
    }
    else
    {
        if((abs(n-k)+(abs(n-k)%2))/2 <= n)
        {
            cout<<n-(abs(n-k)+(abs(n-k)%2))/2<<endl;
        }
        else
        {
            cout<<k<<endl;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}











        // int hi=1e9, lo=0, ans=-1;
        // while(lo<=hi)
        // {
        //     int mid=(hi+lo)/2;
        //     if(abs((n-mid)-mid)==k)
        //     {
        //         ans=0;
        //         break;
        //     }
        //     if((n-mid)-mid<k)
        //     {
        //         lo=mid+1;
        //     }
        //     else
        //     {
        //         hi=mid-1;
        //     }
        // }
        // if(ans==-1)
        // {
        //     hi=1e9, lo=0, ans=-1;
        //     while(lo<=hi)
        //     {
        //         int mid=(hi+lo)/2;
        //         if(abs((n-mid)-mid)==k)
        //         {
        //             ans=0;
        //             break;
        //         }
        //         if(mid-(mid-n)<k)
        //         {
        //             lo=mid+1;
        //         }
        //         else
        //         {
        //             hi=mid-1;
        //         }
        //     }
        // }
        // if(ans==-1)
        // ans=min(abs(n-k), n);
        // cout<<ans<<endl;















        // cout<<min(abs(n-k), (k+n+(k+n)%2)/2+())<<endl;









    // if(abs(n-k)%2==0) cout<<0<<endl;
    // else cout<<abs(n-k)<<endl;
    // if(k==0) cout<<0<<endl;
    // else cout<<abs(n-k)<<endl;