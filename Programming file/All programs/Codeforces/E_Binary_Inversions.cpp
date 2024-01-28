//accepted
//https://codeforces.com/contest/1760/problem/E

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
    int n; 
    cin>>n;
    vector<int> a(n), b(n);
    ll ctr=0, p1=-1, p0=-1, f1=-1, f0=-1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1) ctr++;
        b[i]=ctr;
        if(a[i]==1) p1=i;
        else p0=i;
        if(a[i]==1 && f1==-1) f1=i;
        else if(a[i]==0 && f0==-1) f0=i;
    }

    ll ans=0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]==0) ans+=b[i];
    }

    ll sum=0;
    if(p1!=-1)
    {
        a[p1]=0;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==0) 
            {
                if(i>=p1)
                sum+=b[i]-1;
                else
                sum+=b[i];
            }
        }
        a[p1]=1;
        ans=max(ans, sum);
        sum=0;
        if(f1!=-1)
        {
            a[f1]=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]==0)
                {
                    if(i>=f1)
                    sum+=b[i]-1;
                    else 
                    sum+=b[i];
                }
            }
            a[f1]=1;
            ans=max(ans, sum);
        }
    }
    
    sum=0;
    if(p0!=-1)
    {
        a[p0]=1;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==0)
            {
                if(i>=p0)
                sum+=b[i]+1;
                else 
                sum+=b[i];
            }
        }
        a[p0]=0;
        ans=max(ans, sum);
        sum=0;
        if(f0!=-1)
        {
            a[f0]=1;
            for(int i=0; i<n; i++)
            {
                if(a[i]==0)
                {
                    if(i>=f0)
                    sum+=b[i]+1;
                    else 
                    sum+=b[i];
                }
            }
            ans=max(ans, sum);
        }
    }
    
    cout<<ans<<endl;
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
