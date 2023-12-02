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
    ll n, x;
    cin>>n>>x;

    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vsort(a);

    ll ans=0, mark=n-1, flag=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]+a[i+1]<=x && i+1<n)
        {
            ans++;
            i++;
        }
        else
        {
            ans++;
        }
        // if(a[i]==-1) 
        // {
        //     continue;
        //     flag++;
        // }
        // if(flag==0)
        // {
        //     if(a[i]==x)
        //     {
        //         ans++;
        //     }
        //     else
        //     {
                
        //         if(a[i]+a[mark]<=x)
        //         {
        //             a[mark]=-1;
        //             mark--;
        //         }
        //         else if(a[i]+a[i+1]<=x && i+1<n)
        //         {
        //             a[i+1]=-1;
        //         }
                
        //         ans++;
        //     }
        // }
        // else
        // {
        //     ans++;
        // }
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
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}





















// if(i==j)
        // {
        //     ans++;
        //     break;
        // }
        // else if(i>j) break;
        // if(a[i]+a[j]<=x)
        // {
        //     ans++;
        //     j--;
        // }
        // for(int j=mark; j>i; j--)
        // {
        //     if(a[i]+a[j]<=x)
        //     {
        //         ans++;
        //         break;
        //     }
        // }

        // if(mp[i]!=0) continue;

        // if(a[i]==x)
        // {
        //     ans++;
        //     mp[i]++;
        // }
        // else if(x-a[i]>=a[i])
        // {
        //     auto pos=lower_bound(a.begin(), a.end(), x-a[i]);
        //     auto ind=pos - a.begin();

        //     if(ind>i && a[i]+*pos==x && mp[ind]==0)
        //     {
        //         ans++;
        //         mp[ind]++;
        //     }
        // }
        // else
        // {
        //     ans++;
        //     mp[i]++;
        // }







    // vsort(a);

    // ll ans=0, sum=0;
    // for(int i=0; i<n; i++)
    // {
    //     sum+=a[i];
    //     if(sum==x)
    //     {
    //         ans++;
    //         sum=0;
    //     }
    //     else if(sum>x)
    //     {
    //         ans++;
    //         sum=a[i];
    //     }        
    // }
    // if(sum!=0) ans++;
    // cout<<ans<<endl;




    // cout<<sum/x+1<<endl;
    // if(sum%x==0) cout<<sum/x<<endl;
    // else cout<<sum/x+1<<endl;
    // cout<<(sum+x-1)/x<<endl;

    // vsort(a);

    // for(int i=n-1; i>=0; i--)
    // {
    //     if()
    // }

    // ll ans=0, sum=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]==-1) continue;
    //     sum+=a[i];
    //     if(sum==x) 
    //     {
    //         ans++;
    //         sum=0;
    //     }
    //     else if(sum>x)
    //     {
    //         ans++;
    //         sum=a[i];
    //     }
    //     else
    //     {
    //         for(int j=n-1; j>i; j--)
    //         {
    //             if(a[j]==-1) continue;
    //             else if(x-sum>a[j]) break;
    //             else if(x-sum==a[j]) 
    //             {
    //                 ans++;
    //                 a[j]=-1;
    //                 sum=0;
    //                 break;
    //             }
    //         }
    //     }
    // }
    // if(sum!=x) ans++;
    // cout<<ans<<endl;












    // if(sum%x!=0)
    // {
    //     cout<<sum/x+1<<endl;
    // }
    // else
    // {
    //     cout<<sum/x<<endl;
    // }

    // vsort(a);

    

    // for(int i=0; i<n; i++)
    // for(int i=n-1; i>=0; i--)
    // {
    //     if(a[i]==-1) break;
    //     sum+=a[i];
    //     auto pos=lower_bound(a.begin(), a.end(), x-sum);
    //     if(sum+*pos<=x)
    //     {
    //         sum+=*pos;
    //         *pos=-1;
    //     }
    //     else
    //     {
    //         sum=a[i];
    //         ans++;
    //     }


    //     // if(sum+a[i]>x)
    //     // {
    //     //     sum=a[i];
    //     //     ans++;
    //     // }
    //     // else
    //     // {
    //     //     sum+=a[i];
    //     // }
    // }

    // if(sum<=x) ans++;
    // for(int i=n-1; i>=0; i--)
    // {
    //     int j=0;
    //     sum=a[i];
    //     while(i>j)
    //     {

    //     }
    // }
    // cout<<ans<<endl;