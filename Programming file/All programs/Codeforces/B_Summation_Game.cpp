#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


void solve()
{
    ll n, k, x;
    cin>>n>>k>>x;

    vector<ll> a(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    vector<ll> pre(n+1, 0);

    for(int i=0; i<n; i++)
    {
        pre[i+1]=pre[i]+a[i];
    }


    ll ans=-INT_MAX;
    for(int i=0; i<=k; i++)
    {
        ans = max(ans, pre[n] - 2LL * pre[min(i + x, n)] + pre[i]);
    }

    cout<<ans<<endl;

}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    int t=1;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}



















// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// #define vsort(a) sort(a.begin(), a.end())
// #define vmin(a) *min_element(a.begin(), a.end())
// #define vmax(a) *max_element(a.begin(), a.end())
// const ll N=1e9+7;
// const double pi=acos(-1);


// void solve()
// {
//     ll n, k, x;
//     cin>>n>>k>>x;

//     vector<ll> a(n);

//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }

//     sort(a.begin(), a.end(), greater<int>());
//     // vsort(a);


//     vector<ll> pre(n+1, 0), suf(n+1, 0);
//     pre[0]=0, suf[n]=0;



//     for(int i=0; i<n; i++)
//     {
//         pre[i+1]=pre[i]+a[i];
//     }

//     for(int i=n-1; i>=0; i--)
//     {
//         suf[i]=suf[i+1]+a[i];
//     }


//     ll ans=-INT_MAX;
//     for(int i=0; i<=k; i++)
//     {
//         ans = max(ans, pre[n] - 2LL * pre[min(i + x, n)] + pre[i]);
        
//         // ll sum=-INT_MAX;
//         // if(n-i-x>=0)
//         // {
//         //     sum=pre[n-x-i]+suf[n-i]-suf[n-x-i];
//         //     ans=max(ans, sum);
//         // }
//         // else
//         // {
//         //     if(k>x)
//         //     sum=0;
//         //     else
//         //     sum=-(suf[0]-suf[n-k]);
            
//         //     ans=max(ans, sum);
//         //     break;
//         // }       
//     }

//     cout<<ans<<endl;

// }    


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // #endif


//     int t=1;
//     cin>>t;

//     for(int i=1; i<=t; i++)
//     {
//         // cout<<"Case "<<i<<": ";
//         solve();
//     }

//     return 0;
// }



    // if(k>x)
    // {
    //     ll ans=-INT_MAX;
    //     for(int i=0; i<=k; i++)
    //     {
    //         ll sum;
    //         if(n-i-x>=0)
    //         {
    //             sum=pre[n-x-i]+suf[n-i]-suf[n-x-i];
    //         }
    //         else
    //         {
    //             // sum=0;
    //             sum=(suf[0]-suf[n-k]);
    //         }
    //         ans=max(ans, sum);
    //     }

    //     cout<<ans<<endl;
    // }
    // else
    // {
        // ll ans=-INT_MAX;
        // for(int i=0; i<=k; i++)
        // {
        //     ll sum=-INT_MAX;
        //     if(n-i-x>=0)
        //     {
        //         sum=pre[n-x-i]+suf[n-i]-suf[n-x-i];
        //         ans=max(ans, sum);
        //     }
        //     else
        //     {
        //         if(k>x)
        //         sum=0;
        //         else
        //         sum=-(suf[0]-suf[n-k]);
        //         ans=max(ans, sum);
        //         break;
        //     }       
        // }

        // cout<<ans<<endl;
    // }







    // else
    // {
    //     // ll ans=0;

    //     // for(int i=0; i<n-x; i++)
    //     // {
    //     //     ans+=a[i];
    //     // }
    //     // for(int i=0; i<n-k; i++)
    //     // {
    //     //     ans-=a[i];
    //     // }

    //     // cout<<ans<<endl;

    //     ll ans=-INT_MAX;
    //     for(int i=0; i<k; i++)
    //     {
    //         ll sum;
    //         if(n-i-x>0)
    //         sum=pre[n-x-i]+suf[n-i]-suf[n-x-i];
    //         else
    //         sum=0;
    //         ans=max(ans, sum);
    //     }

    //     cout<<ans<<endl;
    // }
















        // if(n-k*2>0)
        // {
        //     ll ans=0;
        //     for(int i=n-k*2; i<n-k; i++)
        //     {
        //         ans-=a[i];
        //     }
        // }





        // ll ans=0;
        // for(int i=0; i<n-x-k; i++)
        // {
        //     ans+=a[i];
        // }
        // for(int i=n-x-k; i<n-x; i++)
        // {
        //     if(i<0) continue;
        //     ans-=a[i];
        // }

        // cout<<ans<<endl;





        // for(int i=k-x; i<n-x; i++)
        // {
        //     ans+=a[i];
        // }
        // for(int i=0; i<n-x; i++)
        // {
        //     ans+=a[i];
        // }
        // k--;

        // for(int i=n-x; i<n-k; i++)
        // {
        //     ans-=a[i];
        // }

        // for(int i=n-k; i<n; i++)
        // {
        //     // ans=max(ans, pre[i]-suf[i]);
        // }



    // else if(k==x)
    // {

    // }



        // ll ans=-INT_MAX;
        // for(int i=0; i<k; i++)
        // {
        //     ll sum;
        //     // cout<<pre[n-x-i]<<' '<<suf[n-i]<<' '<<suf[n-x-i]<<endl;
        //     if(n-i-x>0)
        //     sum=pre[n-x-i]+suf[n-i]-suf[n-x-i];
        //     else
        //     sum=;
        //     ans=max(ans, sum);
        // }

        // cout<<n-x<<' '<<n-k<<' ';