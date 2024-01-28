#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;



void solve1()
{
    int n;
    cin>>n;

    vector<ll>a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    ll maxi=vmax(a), mark=n-1;

    if(a[n-1]!=maxi)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]!=maxi)
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            }
        }
        cout<<1<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]>=a[i+1])
            {
                mark=i;
                break;
            }
        }
        for(int i=0; i<mark; i++)
        {
            cout<<0;
        }
        cout<<11;
        for(int i=mark+2; i<n; i++)
        {
            cout<<0;
        }
        cout<<endl;
    }
    // if(maxi==a[0])
    // {
        // for(int i=0; i<n; i++)
        // {
        //     if(a[i]<=a[i+1])
        //     {
        //         cout<<1;
        //     }
        //     else
        //     {
        //         // cout<<1;
        //         mark=i;
        //         break;
        //     }
        // }
        
        // for(int i=mark; i<n; i++)
        // {
        //     cout<<0;
        // }
        // cout<<endl;
    // }
    // for(int i=0; i<n; i++)
    // {
    //     if()
    // }
}


void solve2()
{
    int n;
    cin>>n;

    vector<ll>a(n), b(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // cout<<1;

    int flag=0, mark=a[0], ctr=0;

    for(int i=0; i<n-1; i++)
    {
        ctr=0;
        if(i==0)
        {
            cout<<1;
        }
        if(a[i]<=a[i+1] && flag==0)// a[i]<=a[0])
        {
            cout<<1;
            ctr++;
            // cout<<a[i];
        }
        else
        {
            flag++;
            a[i]=a[i+1];
        // }
            if(a[i]<=a[0] && a[i]>=mark)// && flag!=0 && ctr==0)
            {
                // cout<<a[i];
                cout<<1;
                mark=a[i];
                ctr++;
            }
            else if(ctr==0)
            {
                cout<<0;
                // cout<<a[i];
            }
        }

    }
    cout<<endl;

}


void solve()
{
    int n;
    cin>>n;

    vector<ll>a(n), b(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mark=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[0])
        {
            b[i]=1;
        }
        else// if(mark==0)
        {
            // mark=i;
            b[i]=0;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(b[i]==0)
        {
            mark=i;
            break;
        }
    }
    ll p=a[mark];
    for(int i=mark+1; i<n; i++)
    {
        if(a[i]>=p && a[i]<=a[0])
        {
            b[i]=1;
            p=a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<b[i];
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