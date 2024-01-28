//accepted
//https://codeforces.com/contest/760/problem/B

//sln watched

#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	
	ll high=m, low=1, sm, mid, ans=0;
	
	while(high>=low)
	{
	    mid=(high+low)/2;
        sm=0;
        ll y=k-1, x=mid-1;

        if(y>x)
        {
            sm=sm+((x+1)*x)/2+(y-x);
        }
        else 
        {
            sm=sm+(x*(x+1))/2-((x-y)*(x-y+1))/2;
        }

        y=(n-k);
        
        if(y>x)
        {
            sm=sm+(x*(x+1))/2+(y-x);
        }
        else 
        {
            sm=sm+(x*(x+1))/2-((x-y)*(x-y+1))/2;
        }
        sm+=mid;

        if(sm>m)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
            ans=mid;
        }
	}
	cout<<ans;

    return 0;
}





/* 
//my sln:

//sln watched

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())



ll fnc(ll x, ll n, ll m, ll k)
{
    ll ans=0;
    ll y1=k-1, y2=n-k;  
    if(y1>x-1)
    {
        ans+= (x*(x-1))/2+y1-(x-1);
    }
    else
    {
        ans+=(x-1)*x/2-((x-1-y1)*(x-1-y1+1))/2;  //this is the wrong statement --> // ans+= ((x-1+x-y1)*y2/2)*(y1/2); 
    }
    if(y2>x-1)
    {
        ans+= (x*(x-1))/2+y2-(x-1);
    }
    else
    {
        ans+=(x-1)*x/2-((x-1-y2)*(x-1-y2+1))/2;
    }
    ans+=x;
    return ans;
}



ll binarySearch(ll n, ll m, ll k)
{
    ll r=m+1, l=0;
    ll ans=0;
    while (l<=r) 
    {
        ll mid= l+(r-l)/2;

        if(fnc(mid, n, m, k)>m)
        {
            r= mid-1;
        }
        else
        {
            l= mid+1;
            ans=mid;
        }
    }
    
    return ans;
}



void solve()
{
    ll n, m, k;
    cin>>n>>m>>k;
    
    if(n==m)
    {
        cout<<1<<endl;
        return;
    }
    else if(n==1)
    {
        cout<<m<<endl;
        return;
    }
    else
    {
        ll ans=binarySearch(n, m, k);
        cout<<ans<<endl;
    }

}




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    solve();

    return 0;
}

*/
