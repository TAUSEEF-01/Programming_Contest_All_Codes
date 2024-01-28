//accepted
//https://codeforces.com/contest/724/problem/B

//sln watched, code written by me

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
const int N=1e9+7;



void solve()
{
    int n, m;
    cin>>n>>m;
    // int a[n+2][m+2];
    vector<vector<int>> a(n + 2, vector<int>(m + 2));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    int flag=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int x=0; x<n; x++)
            {
                swap(a[x][i], a[x][j]);
            }
            int check=0;
            for(int y=0; y<n; y++)
            {
                int ctr=0;
                for(int z=0; z<m; z++)
                {
                    if(a[y][z]!=z+1)
                    {
                        ctr++;
                    }
                }
                if(ctr>2)
                {
                    check++;
                }
            }
            if(check==0)
            {
                flag++;
            }
            for(int x=0; x<n; x++)
            {
                swap(a[x][i], a[x][j]);
            }
        }
    }
    if(flag!=0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}





/*YouKn0wWho sln: */

// // #pragma comment(linker, "/stack:200000000")
// // #pragma GCC optimize("Ofast")
// // #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// // #pragma GCC optimize("unroll-loops")

// #include<bits/stdc++.h>
// // #include<ext/pb_ds/assoc_container.hpp>
// // #include<ext/pb_ds/tree_policy.hpp>
// // using namespace __gnu_pbds;
// using namespace std;

// // #define ll       long long
// // #define ull      unsigned long long
// // #define ld       long double
// // #define pii      pair<int,int>
// // #define pll      pair<ll,ll>
// // #define vi       vector<int>
// // #define vll      vector<ll>
// // #define vc       vector<char>
// // #define vs       vector<string>
// // #define vpii     vector< pair<int,int> >
// // #define vpll     vector< pair<ll,ll> >
// // #define ppll     pair< ll,pll >
// // #define pllp     pair< pll,ll >
// // #define stll     stack<ll>
// // #define qll      queue<ll>
// // #define pqll     priority_queue<ll>
// // #define umap     unordered_map
// // #define uset     unordered_set
// // #define PQ       priority_queue

// // #define rep(i,n)        for(i=0;i<n;i++)
// // #define itfor(i, c)     for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
// // #define printa(a,L,R)   for(int i=L;i<R;i++) cout<<a[i]<<(i==R-1?'\n':' ')
// // #define printv(a)       printa(a,0,a.size())
// // #define print2d(a,r,c)  for(int i=0;i<r;i++) for(int j=0;j<c;j++) cout<<a[i][j]<<(j==c-1?'\n':' ')
// // #define pb              push_back
// // #define MP              make_pair
// // #define UB              upper_bound
// // #define LB              lower_bound
// // #define SQ(x)           ((x)*(x))
// // #define issq(x)         (((ll)(sqrt((x))))*((ll)(sqrt((x))))==(x))
// // #define F               first
// // #define S               second
// // #define mem(a,x)        memset(a,x,sizeof(a))
// // #define inf             0x3f3f3f3f
// // #define PI              3.14159265358979323846
// // #define E               2.71828182845904523536
// // #define gamma           0.5772156649
// // #define nl              "\n"
// // #define lg(r,n)         (int)(log2(n)/log2(r))
// // #define sf(a)           scanf("%d",&a)
// // #define sfl(a)          scanf("%I64d",&a)
// // #define sfc(a)          scanf("%c",&a)
// // #define sff(a,b)        scanf("%d %d",&a,&b)
// // #define sffl(a,b)       scanf("%I64d %I64d",&a,&b)
// // #define sfff(a,b,c)     scanf("%d %d %d",&a,&b,&c)
// // #define sfffl(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c)
// // #define pf              printf
// // #define pfi(a)          pf("%d\n",&a)
// // #define pfl(a)          pf("%I64d\n",&a)
// // #define _ccase          printf("Case %d: ",++cs)
// // #define _case           cout<<"Case "<<++cs<<": "
// // #define debug(x)        cout<<#x"="<<(x)<<nl

// // #define rev(v)              reverse(v.begin(),v.end())
// // #define srt(v)              sort(v.begin(),v.end())
// // #define grtsrt(v)           sort(v.begin(),v.end(),greater<int>())
// // #define all(v)              v.begin(),v.end()
// // #define mnv(v)              *min_element(v.begin(),v.end())
// // #define mxv(v)              *max_element(v.begin(),v.end())
// // #define countv(v,a)         count(v.begin(),v.end(),a)
// // #define toint(a)            atoi(a.c_str())
// // #define midlr               mid=b+((e-b)>>1),l=n<<1,r=n<<11
// // #define fast                ios_base::sync_with_stdio(false),cin.tie(NULL)
// // string  tostr(int n)        {stringstream rr;rr<<n;return rr.str();}
// // template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// #define ll long long
// // const int mod=1e9+7;
// // //ll qpow(ll n,ll k)          {ll ans=1;n%=mod;while(k){if(k&1) ans=(ans*n)%mod;n=(n*n)%mod;k>>=1;}return ans%mod;}
// // const int mxn=1e5+9;
// // const ld  eps=1e-9;



// ll a[30][30],n,m;


// bool yo()
// {
//     ll i,j,k,cnt;
//     for(i=1;i<=n;i++)
//     {
//         cnt=0;
//         for(j=1;j<=m;j++) 
//         {
//             if(a[i][j]!=j) cnt++;
//         }
//         if(cnt>2) 
//         return 0;
//     }
//     return 1;
// }

// int main()
// {
//     // fast;
//     ll i,j,k;
//     cin>>n>>m;

//     for(i=1;i<=n;i++) 
//     {
//         for(j=1;j<=m;j++) 
//         {
//             cin>>a[i][j];
//         }
        
//     }

//     for(i=1;i<=m;i++)
//     {
//         for(j=i;j<=m;j++)
//         {
//             for(k=1;k<=n;k++) 
//             {
//                 swap(a[k][i],a[k][j]); //swapping every elements between i and j columns for each rows
//             }
//             if(yo()) 
//             {
//                 return cout<<"YES\n",0;
//             }
//             for(k=1;k<=n;k++) 
//             {
//                 swap(a[k][i],a[k][j]); //swapping every elements between i and j columns for each rows thus restoring the previous array
//             }
//         }
//     }
//     cout<<"NO\n";
//     return 0;
// }
