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
    ll n, x;
    cin>>n>>x;

    /**/

    ll y=x, ctr=0, sum=0;
    vector<ll>ss, sss;
    map<ll, ll>xp;
    while(y>0)
    {
        ll pp=y%2;
        sum=pow(pp*2, ctr++);
        ss.push_back(sum);
        y/=2;
    }
    sss=ss;
    ll pp=0;
    if(x%2!=0)
    pp=1;

    for(int i=0; i<ss.size(); i++)
    {
        pp=pp|ss[i];
        sss.push_back(pp);
    }
    pp=0;
    if(x%2!=0)
    pp=1;

    for(int i=ss.size()-1; i>=0; i--)
    {
        pp=pp|ss[i];
        sss.push_back(pp);
    }

    for(int i=0; i<sss.size(); i++)
    {
        xp[sss[i]]=1;
    }

    /**/

    vector<ll>a(n), b(n), c(n), p;
    ll ans=0, c1=0, c2=0, c3=0, flag=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=x && c1==i && xp[a[i]]==1)
        {
            p.push_back(a[i]);
            c1++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        if(b[i]<=x && c2==i && xp[b[i]]==1)
        {
            p.push_back(b[i]);
            c2++;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
        if(c[i]<=x && c3==i && xp[c[i]]==1)
        {
            p.push_back(c[i]);
            c3++;
        }
    }
    
    /**/

    for(int i=0; i<p.size(); i++)
    {
        ans=ans|p[i];
        if(ans==x)
        {
            flag++;
            break;
        }
    }
    if(ans==x || x==0 || flag!=0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }

    for(int i=0; i<sss.size(); i++)
    cout<<sss[i]<<' ';
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





    // for(int i=0; i<sss.size(); i++)
    // cout<<sss[i]<<' ';
    // cout<<endl;




//void solve()
// {
//     ll n, x;
//     cin>>n>>x;
//     vector<ll>a(n), b(n), c(n), p;
//     ll ans=0, c1=0, c2=0, c3=0, flag=0;
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         if(a[i]<=x && c1==i)
//         {
//             p.push_back(a[i]);
//             c1++;
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         cin>>b[i];
//         if(b[i]<=x && c2==i)
//         {
//             p.push_back(b[i]);
//             c2++;
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         cin>>c[i];
//         if(c[i]<=x && c3==i)
//         {
//             p.push_back(c[i]);
//             c3++;
//         }
//     }
//     for(int i=0; i<p.size(); i++)
//     {
//         ans=ans|p[i];
//         if(ans==x)
//         {
//             flag++;
//             break;
//         }
//     }
//     if(ans==x || x==0 || flag!=0)
//     {
//         cout<<"Yes\n";
//     }
//     else
//     {
//         cout<<"No\n";
//     }
// }












//void solve()
// {
//     ll n, x;
//     cin>>n>>x;
//     vector<ll>a(n), b(n), c(n);
//     ll ans=0, c1=0, c2=0, c3=0, flag=0;
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         if(a[i]<=x && ans<x && (ans|a[i])<=x && c1==i)
//         {
//             ans=ans|a[i];
//             c1++;
//             if(ans==x)
//             flag++;
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         cin>>b[i];
//         if(b[i]<=x && ans<x && (ans|b[i])<=x && c2==i)
//         {
//             ans=ans|b[i];
//             c2++;
//             if(ans==x)
//             flag++;
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         cin>>c[i];
//         if(c[i]<=x && ans<x && (ans|c[i])<=x && c3==i)
//         {
//             ans=ans|c[i];
//             c3++;
//             if(ans==x)
//             flag++;
//         }
//     }
//     if(ans==x || x==0 || flag!=0)
//     {
//         cout<<"Yes\n";
//     }
//     else
//     {
//         cout<<"No\n";
//     }
// }