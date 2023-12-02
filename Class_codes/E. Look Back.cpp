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


class solution {
public:

    void solve() 
    {
        int n;
        cin>>n;
        
        vl a(n);
        ll ans=0;
        ll cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i==0)
            {
                continue;
            }

            if(a[i]<=a[i-1])
            {
                ll temp=0;
                while(a[i]*(1LL<<temp)<a[i-1])
                {
                    temp++;
                }
                cnt+=temp;
                ans+=cnt;
                // cout<<a[i]<<' '<<a[i-1]<<' ';
                // cout<<ans<<endl;
            }
            else
            {
                ll temp=0;
                while(a[i-1]*(1LL<<temp)<=a[i])
                {
                    temp++;
                }
                temp--;
                cnt-=temp;
                cnt=max(cnt, 0LL);
                // cout<<temp<<endl;
                ans+=cnt;
                // cout<<ans<<' ';

            }
            


        }
        // ans+=cnt;
        cout<<ans<<endl;
    }
};


int main()
{
    fast;
    
    setIO();

    int test=1; 
    cin>>test;

    solution obj;
    for(int i=1; i<=test; i++)
    {
        // cout << "Case " << i << ": ";
        obj.solve();
    }

    return 0;
}





/*

7 1 --> 2, 4, 8 temp=3; cnt=3; ans=3
1 5 --> 2, 4 temp=2; cnt=3-temp=1; ans=4
5 3 --> 6 temp=1; cnt=2; ans=6


*/











            // else if(a[i]<a[i-1])
            // {
            //     while(a[i]*(1LL<<cnt)<a[i-1])
            //     {
            //         cnt++;
            //     }
            //     ans+=cnt;
            // }
            // else if(i>2 && a[i]>=a[i-1])
            // {
            //     while(a[i-1]*(1LL<<cnt)>a[i])// && cnt>0)
            //     {
            //         cnt--;
            //     }
            //     cnt=max(cnt, 0LL);
            //     ans+=cnt;
            // }

            // ll curr;

            // else if(a[i]<a[i-1])
            // {
                // ll cnt=temp;
                // while(a[i]*(1LL<<cnt)<a[i-1])
                // {
                //     // cnt++;
                //     cnt++;
                // }
                // while(a[i]*(1LL<<cnt)>a[i-1] && cnt>0)
                // {
                //     cnt--;
                // }
                // cnt++;
                // ans+=(temp-cnt);
                // mn=a[i];
            // }
            // else
            // {
            //     while(a[i-1]*(1LL<<cnt)>a[i] && cnt>)
            //     {
            //         cnt--;
        //     }
            //     mn=a[i]*(1LL<<cnt);
            //     ans+=cnt;
            // }