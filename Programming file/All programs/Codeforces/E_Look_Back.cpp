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
        ll mn=0, cnt=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i==0) 
            {
                mn= a[i];
            }
            else
            {
                if(a[i]<mn) 
                {
                    ll p= (ll)ceil(mn/(double)a[i]);
                    // ll k= (ll)ceil(log2((double)p));
                    ll k=0;
                    // while

                    // ll j=k;
                    if((a[i]*(1LL<<k))>mn)
                    {
                        while((a[i]*(1LL<<k))>=mn && k>0)
                        {
                            k--;
                        }
                        k++;
                    }
                    else if((a[i]*(1LL<<k))<mn)
                    {
                        while((a[i]*(1LL<<k))<mn)
                        {
                            k++;
                        }
                    }
                    cnt += k;
                    mn=a[i]*(ll)(1LL<<k);
                }
                else
                {
                    mn= a[i];
                }
            }
        }
        cout<<cnt<<endl;
    }
};


int main()
{
    fast;
    
    // setIO();

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


















// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <ctype.h>
// #include <queue>
// #include <cstring>
// #include <set>
// #include <bitset>
// #include <map>
// #include <chrono>
// #include <random>
// #include <unordered_map>
// #include <stdio.h>
// #include <bits/stdc++.h>

// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>


// using namespace std;
// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 


// using ll = long long;
// using vb = vector<bool>;
// using vvb = vector<vb>;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vl = vector<ll>;
// using vvl = vector<vl>;
// using vc = vector<char>;
// using vvc = vector<vc>;
// using vs = vector<string>;
// #define takeinput(a) for(auto &x: a) cin>>x;
// #define pb push_back
// #define all(a) a.begin(), a.end()
// #define asort(a) sort(all(a))
// #define amin(a) *min_element(all(a))
// #define amax(a) *max_element(all(a))
// #define smax(a) *(a.rbegin())
// #define smin(a) *a.begin()
// const double pi= 3.141592653589793238462643383279502884197;
// const ll mod = 1e9 + 7, inf = 1e18;
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'


// void setIO()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
//     #endif
// }


// class solution {
// public:

//     void solve() 
//     {
//         int n;
//         cin>>n;
        
//         vl a(n);
//         ll mn=0, cnt=0;

//         for(int i=0; i<n; i++)
//         {
//             cin>>a[i];
//             if(i==0) 
//             {
//                 mn= a[i];
//             }
//             else
//             {
//                 if(a[i]<mn) 
//                 {
//                     int kk=0;
//                     int p= (int)ceil(mn/(double)a[i]);
//                     int k= (int)ceil(log2(p));
//                     // while(a[i]<mn)
//                     // {
//                     //     a[i]*= (1LL<<1);
//                     //     // cnt++;
//                     //     kk++;
//                     // }
//                     // cnt+= (ceil(log2(mn))-ceil(log2(a[i])));
//                     // mn= a[i]*(ceil(log2(mn))-ceil(log2(a[i])));
//                     // int p= (int)ceil(mn/(double)a[i]);
//                     // int k= (int)ceil(log2(p));
//                     // cout<<k<<' '<<kk<<endl;
//                     cnt += k;
//                     mn=a[i]*pow(2, k);
//                 }
//                 else
//                 {
//                     mn= a[i];
//                 }
//             }
//         }
//         cout<<cnt<<endl;
//     }
// };


// int main()
// {
//     fast;
    
//     // setIO();

//     int test=1; 
//     cin>>test;

//     solution obj;
//     for(int i=1; i<=test; i++)
//     {
//         // cout << "Case " << i << ": ";
//         obj.solve();
//     }

//     return 0;
// }

















                    // cnt+= (int)ceil(mn/(double)a[i]);
                    // mn= (int)ceil(mn/(double)a[i])*a[i];
                    // cout<<mn<<' ';