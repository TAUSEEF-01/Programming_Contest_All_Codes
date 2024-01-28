#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <set>
#include <bitset>
#include <map>
#include <chrono>
#include <random>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 


using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
#define takeinput(a) for(auto &x: a) cin>>x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
#define smax(a) *(a.rbegin())
#define smin(a) *a.begin()
const double pi= 3.141592653589793238462643383279502884197;
const ll mod = 1e9 + 7, inf = 1e18;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'


void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


void resoudre()
{
    int n, k; 
    cin>>n>>k;
    
    vi a(n);

    int flag=0;
	for(int i = 0; i < n; i++) 
    {   
        cin>>a[i];
        if(a[i]%k==0) flag++;
	}
    if(flag)
    {
        cout<<'0'<<endl;
        return;
    }
    else if(k!=4)
    {
        int ans=100;
        for(int i=0; i<n; i++)
        {
            ans=min(ans, k-a[i]%k);
        }
        cout<<ans<<endl;
    }
    else if(k==4)
    {
        int ans=100;
        int odd=0, even=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]&1) odd++;
            else even++;

            ans=min(ans, k-a[i]%k);
        }

        if(even>0) ans=max(0, 2-even);
        else ans=min(ans, 2);

        cout<<ans<<endl;
    }
}


int main()
{
    fast;
    
    // setIO();

    int test=1; 
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        // cout << "Case " << i << ": ";
        resoudre();
    }

    return 0;
}




/*

void resoudre()
{
    int n, k; cin>>n>>k;
    vi a(n);
    int flag=0;    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%k==0) flag++;
    }
 
    if(flag)
    {
        cout<<0<<endl;
    }
    else if(k!=4)
    {
        int ans=100;
        for(int i=0; i<n; i++)
        {
            int res=1;
            for(int j=1; j<k; j++)
            {
                if((a[i]+j)%k==0)
                {
                    res=j;
                    break;
                }
            }
 
            ans=min(ans, res);
        }
        cout<<ans<<endl;
    }
    else if(k==4)
    {
        int ans=100, odd=0, even=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]&1) odd++;
            else even++;
            int res=1;
            for(int j=1; j<k; j++)
            {
                if((a[i]+j)%k==0)
                {
                    res=j;
                    break;
                }
            }
 
            ans=min(ans, res);
        }
        if(even>0) ans=max(0, 2-even);
        else ans=min(ans, 2);
        cout<<ans<<endl;
    }
}

*/

/*

void resoudre()
{
    int n, k; 
    cin>>n>>k;
    
    vi a(n);
 
    int ans = INT_MAX;
	for(int i = 0; i < n; i++) 
    {   
        cin>>a[i];
		int r=a[i] % k;
		if(r==0) ans = 0;
		else ans=min(ans, k - r);
	}
 
	if(k!=4 || ans==0) 
    {
        cout<<ans<<'\n';
    }
    else if(k==4)
    {
        ans=100;
        int odd=0, even=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]&1) odd++;
            else even++;
 
            ans=min(ans, k-a[i]%k);
        }
 
        if(even>0) ans=max(0, 2-even);
        else ans=min(ans, 2);
 
        cout<<ans<<endl;
    }
}
 

*/