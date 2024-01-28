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
    int n;
    cin>>n;
    vector<int> g[n+1];

    int cnt=0;
    for(int i=1; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }


    for(int i=1; i<=n; i++)
    {
        if(g[i].size()==1) cnt++;
    }

    cout<<(int)ceil(cnt/(double)2)<<endl;
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
// const double pi=acos(-1);


// ll getCount(vector<ll> arr, ll k){
//     // storing total number of subarrays
//     ll totalCount = 0;

//     // hash map
//     unordered_map<int, int> map;
    
//     // increasing the count of 0 by 1 in our hashmap
//     map[0] = 1;

//     ll sum = 0;
//     ll rem = 0;

//     // iterating through whole array
//     for(int i = 0; i < arr.size(); i++){

//         // adding the array element into our sum
//         sum += arr[i];

//         // getting remainder
//         rem = (sum % k + k) % k;

//         // if the value of remainder inside our hashmap is not zero
//         // increment the totalCount by rem
//         // and increment the value of remainder inside our hashmap by 1
//         // else initialize the remainder inside our hashmap to 1
//         if(map[rem] != 0){
//             totalCount += map[rem];
//             map[rem]++;
//         }
//         else {
//             map[rem] = 1;
//         }
//     }

//     // returning the total count
//     return totalCount;
// }


// void solve()
// {
//     int n;
//     cin>>n;
//     vector<ll> a(n);
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
    
//     cout<<getCount(a, n)<<endl;
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
//     // cin>>t;

//     for(int i=1; i<=t; i++)
//     {
//         // cout<<"Case "<<i<<": ";
//         solve();
//     }

//     return 0;
// }





// map<ll, ll> fact;

// void precalc()
// {
//     fact[0]=1;
//     ll ans=1;
//     for(int i=1; i<1000007; i++)
//     {
//         ans= (ans*i)%N;
//         fact[i]=ans;
//     }
// } 

// ll powmod(ll a, ll b, ll p)
// {
//     a %= p;
//     if (a == 0) return 0;
//     ll product = 1;
//     while(b > 0)
//     {
//         if (b&1)
//         {    
//             product *= a;
//             product %= p;
//             --b;
//         }
//         a *= a;
//         a %= p;
//         b /= 2;    
//     }
//     return product;
// }

// ll inv(ll a, ll p)
// {
//     return powmod(a, p-2, p);
// }

// ll nCk(ll n, ll k, ll p)
// {
//     return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n-k], p)) % p;
// }


// void solve()
// {
//     ll a, b;
//     cin>>a>>b;

//     cout<<nCk(a, b, N)<<endl;
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


//     precalc();

//     int t=1;
//     cin>>t;

//     for(int i=1; i<=t; i++)
//     {
//         // cout<<"Case "<<i<<": ";
//         solve();
//     }

//     return 0;
// }
