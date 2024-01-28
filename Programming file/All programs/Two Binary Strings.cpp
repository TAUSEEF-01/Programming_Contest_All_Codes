//accepted
//https://codeforces.com/contest/1861/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    string a, b;
    cin>>a>>b;
    int c1=0, c0=0;
    int n=a.size();
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i] && a[i+1]==b[i+1] && a[i]=='0' && a[i+1]=='1')
        {
            c1++;
            c0++;
            break;
        }
    }
    if(c1!=0 && c0!=0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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









        // if(a[i]==b[i] && a[i]=='0') c0++;
        // if(a[i]==b[i] && a[i]=='1' && c0!=0) c1++;






    // for(int i=1; i<a.size()-1; i++)
    // {
    //     if(a[i]==b[i] && a[i+1]==b[i+1] && a[i]=='0' && a[i+1]=='1')
    //     {
    //         flag++;
    //         // for(int j=i-1; j>0; j--)
    //         // {
    //         //     if(a[i]!=b[i])
    //         //     {
    //         //         flag=0;
    //         //         break;
    //         //     }
    //         // }
    //         break;
    //     }
    // }
    // if(flag) 
    // {
    //     cout<<"YES\n";
    // }
    // else 
    // {
    //     for(int i=0; i<a.size()-1; i++)
    //     {
    //         if(a[i]==b[i] && a[i]=='1')
    //         {
    //             flag++;
    //             for(int j=i-1; j>0; j--)
    //             {
    //                 if(a[i]!=b[i])
    //                 {
    //                     flag=0;
    //                     break;
    //                 }
    //             }
    //             break;
    //         }
    //     }
    //     for(int i=a.size()-1; i>0; i--)
    //     {
    //         if(a[i]==b[i] && a[i]=='0')
    //         {
    //             flag++;
    //             for(int j=i+1; j<a.size()-1; j++)
    //             {
    //                 if(a[i]!=b[i])
    //                 {
    //                     flag=0;
    //                     break;
    //                 }
    //             }
    //             break;
    //         }

    //     }
    //     if(flag) 
    //     {
    //         cout<<"YES\n";
    //     }
    //     else
    //     {
    //         cout<<"NO\n";
    //     }
    // }