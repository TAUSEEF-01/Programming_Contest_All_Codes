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
    ll n, p, q;
    cin>>n>>p>>q;
    
    vector<ll> a(n);
    vector<ll> all;
    
    ll maxi=-INT_MAX, mini=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        all.push_back(a[i]);
    }

    vsort(all);

    ll sum=0, sz=min(n-2, p+q);
    for(int i=0, l=n-2; i<sz; i++, l--)
    {
        sum+=abs(all[l]);
    }
    cout<<sum+all[n-1]-all[0]<<endl;
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
//     ll n, p, q;
//     cin>>n>>p>>q;
    
//     vector<ll> a(n);
//     vector<ll> minus, plus, all;
//     // ll sum=0;
//     // ll maxi=-INT_MAX, mini=INT_MAX;
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         all.push_back(abs(a[i]));
//         // maxi=max(maxi, a[i]);
//         // mini=min(mini, a[i]);
//         // if(a[i]>=0) plus.push_back(a[i]);
//         // else minus.push_back(a[i]);
//     }

//     // vsort(minus);
//     // vsort(plus);
    
//     // ll summ=0, sump=0, ms=minus.size(), ps=plus.size();
        
//     // if(plus.size()==0)
//     // {
        
//     //     cout<<minus[ms-1]-minus[0]<<endl;
//     //     return;
//     // }
//     // else if(minus.size()==0)
//     // {
//     //     if(p==0 && q==0)
//     //     {
//     //         cout<<plus[ps-1]-plus[0]<<endl;
//     //         return;
//     //     }
//     //     ll sump=0;
//     //     for(int i=0; i<min(ps, p)-1; i++)
//     //     {
//     //         // cout<<plus[ps-1-i]<<' ';
//     //         sump+=plus[ps-1-i];
//     //     }
//     //     cout<<sump-plus[0]<<endl;
//     //     return;
//     // }

    
//     // for(int i=0; i<min(q, ms); i++)
//     // {
//     //     summ+=minus[i];
//     // }

//     // for(int i=0; i<min(ps, p); i++)
//     // {
//     //     sump+=plus[ps-1-i];
//     // }

//     // if(min(ps, p))

//     // cout<<sump-summ<<endl;
    
//     vsort(all);

//     ll sum=0, sz=min(n-2, p+q);
//     for(int i=0, l=n-1; i<sz; i++, l--)
//     {
//         sum+=all[l];
//     }

//     // if(sum==0) cout<<all[all.size()-1]-all[0]<<endl;
//     // else 
//     // cout<<sum-all[0]<<endl;
//     cout<<sum+all[n-1]-all[0]<<endl;
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















    
    // if(plus.size()>1 && minus.size()>0)
    // {
    //     ll ps=plus.size(), ms=minus.size();
    //     ll q=min(q, ps-1), l=ps-1;
    //     for(int i=0; i<q; i++)
    //     {
    //         mini-=plus[l];
    //         l--;
    //     }
    //     ll p=min(p, l);
    //     // for(int i=0; i<p; i++)
    //     for(int i=0; i<l; i++)
    //     {
    //         // maxi+=
    //         maxi+=plus[l-i];
    //     }

    // }

    // vsort(all);
    // ll as=all.size();
    // ll sum=0, sz=min(as, p+q);
    // for(int i=0; i<sz; i++)
    // {
    //     sum+=all[as-i-1];
    // }
    // cout<<sum<<endl;