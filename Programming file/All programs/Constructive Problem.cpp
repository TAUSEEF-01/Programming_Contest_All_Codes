#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n), b(n);
    unordered_map<ll,int>x;
    set<ll>c;
    ll maxi=-1, l=0;
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
        maxi=max(maxi, a[i]);
        c.insert(a[i]);
        if(x[a[i]]!=1)
        {
            b[l++]=a[i];
        }
        x[a[i]]=1;
    }
    int mark=-1, ctr=0;
    for(auto &p: c)
    {
        if(p!=ctr)
        {
            mark=ctr;
            break;
        }
        ctr++;
    }
    if(mark==-1)
    {
        if(maxi==0 && n==1)
        {
            cout<<"No\n";
        }
        else if((maxi!=0 && n==2) || (maxi==n-1))
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    else
    {
        int flag1=0, flag2=0;
        ctr=0;
        for(int i=0; i<b.size(); ++i)
        {
            if(b[i]<mark)
            {
                ctr++;
            }
            else
            {
                break;
            }
        }
        if(ctr==mark || n<=2 || maxi>=n)
        {
            cout<<"Yes\n";
        }
        else
        {
            ctr=0;
            for(int i=b.size()-1; i>=0; i--)
            {
                if(b[i]<mark)
                {
                    ctr++;
                }
                else
                {
                    break;
                }
            }
            if(ctr==mark || n<=2 || maxi>=n)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
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



























#include <bits/stdc++.h>
// using namespace std;
// #define ll long long


// solve()
// {
//     int n;
//     cin>>n;
//     vector<ll>a(n), b(n);//, c(n);
//     unordered_map<ll,int>x;
//     set<ll>c;
//     ll maxi=-1, l=0;
//     for(int i=0; i<n; ++i)
//     {
//         cin>>a[i];
//         // b[i]=a[i];
        // maxi=max(maxi, a[i]);
//         c.insert(a[i]);
//         if(x[a[i]]!=1)
//         {
//             b[l++]=a[i];
//         }
//         x[a[i]]=1;
//     }
//     // sort(b.begin(), b.end());
//     // sort(c.begin(), c.end());
//     int mark=-1, ctr=0;
//     // for(int i=0; i<c.size(); ++i)
//     for(auto &p: c)
//     {
//         if(p!=ctr)
//         {
//             mark=ctr;
//             break;
//         }
//         ctr++;
//     }
//     if(mark==-1 && n==1)
//     {
//         cout<<"No\n";
//     }
//     else if(mark==-1 && n>1)
//     {
//         cout<<"Yes\n";
//     }
//     else
//     {
//         int flag1=0, flag2=0;//, ctr=mark;
//         ctr=0;
//         for(int i=0; i<b.size(); ++i)
//         {
//             if(b[i]<mark)
//             {
//                 ctr++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         // cout<<ctr<<' '<<mark<<' ';
//         if(ctr==mark)
//         {
//             cout<<"Yes\n";
//         }
//         else
//         {
//             cout<<"No\n";
//         }
//     }
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin>>t;

//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }