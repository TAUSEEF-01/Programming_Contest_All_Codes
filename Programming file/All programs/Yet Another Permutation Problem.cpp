#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vrev(a) reverse(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    vector<int> a;
    vector<int> x(n+2, 0);
    x[1]=1;

    cout<<1<<' ';

    for(int i=2; i<=n; i++)
    {
        if(x[i]==0)
        {
            int ans=i;
            while(ans<=n)
            {
                if(x[ans]==0) cout<<ans<<' ';
                x[ans]=1;
                ans*=2;
            }
        }
    }

    cout<<endl;
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





















// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// #define vsort(a) sort(a.begin(), a.end())
// #define vrev(a) reverse(a.begin(), a.end())
// #define vmin(a) *min_element(a.begin(), a.end())
// #define vmax(a) *max_element(a.begin(), a.end())
// const ll N=1e9+7;


// // vector<bool> prime(100007, true);
// // vector<int> store;

// void solve()
// {
//     int n;
//     cin>>n;
//     vector<int> a;
//     vector<int> x(1000007, 0);
//     x[1]=1;
//     a.push_back(1);

//     for(int i=2; i<=n; i++)
//     {
//         int ans=i;
//         while(ans<=n)
//         {
//             if(x[ans]==0) a.push_back(ans);
//             x[ans]=1;
//             ans*=2;
//         }
//     }
//     // int sz=min((ll)n, (ll)store.size());

//     // for(int i=1; i<sz; i++)
//     // {
//     //     int k=1;
//     //     while(store[i]*k<=n)
//     //     {
//     //         if(x[store[i]*k]==0)
//     //         a.push_back(store[i]*k);
//     //         x[store[i]*k]=1;
//     //         k++;
//     //     }
//     // }
//     // for(int i=0; i<1; i++)
//     // {
//     //     int k=1;
//     //     while(store[i]*k<=n)
//     //     {
//     //         if(x[store[i]*k]==0)
//     //         a.push_back(store[i]*k);
//     //         x[store[i]*k]=1;
//     //         k++;
//     //     }
//     // }

//     for(auto &p: a) cout<<p<<' ';
//     // for(int i=1; i<=n; i++)
//     // {
//     //     if(x[i]==0) cout<<i<<' ';
//     // }
//     cout<<endl;
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//     // prime[0]=prime[1]=false;
//     // for(int i=2; i<100007; i++)
//     // {
//     //     if(prime[i])
//     //     {
//     //         store.push_back(i);
//     //         for(int j=i*2; j<100007; j+=i)
//     //         {
//     //             prime[j]=false;
//     //         }
//     //     }
//     // }

//     int t;
//     cin>>t;

//     while(t--)
//     {
//         solve();
//     }

//     return 0;
// }

















    // for(int i=n; i>=2; i--)
    // {
    //     if(x[i]==0)
    //     {
    //         a.push_back(i);
    //         // x[i]=1;
    //         for(int j=i*2; j<=n; j+=i)
    //         {
    //             if(x[j]==0)
    //             {
    //                 a.push_back(j);
    //                 x[j]=1;
    //                 // x[i]=1;
    //             }
    //         }
    //     }
    // }




        // for(int j=0; ; j++)
        // {
        //     if(prime[j]*2>n) break;
        //     a.push_back(j)
        // }
        // ll ans=i;
        // while(ans<=n)
        // {
        //     if(x[ans]==0) a.push_back(ans);
        //     x[ans]=1;
        //     ans*=i;
        // }
        // if(x[i]==0)
        // {
        //     a.push_back(i);
        //     // x[i]=1;
        //     for(int j=i*2; j<=n; j+=i)
        //     {
        //         if(x[j]==0)
        //         {
        //             a.push_back(j);
        //             x[j]=1;
        //             // x[i]=1;
        //         }
        //     }
        // }