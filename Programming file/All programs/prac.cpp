#include<bits/stdc++.h>
using namespace std;
using i64 = long long;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())


void solve()
{
    ll n, c;
    cin>>n>>c;

    ll a=4LL*n, b=0LL, cc=0LL;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        b+=x;
        cc+=x*x;
    }
    c-=cc;
    c/=4;
    ll lo=0, hi=1000000000+7, ans=0;
    while(hi>=lo)
    {
        ll mid=lo+(hi-lo)/2;
        // cout<<a*mid*mid+4*b*mid+cc<<endl;
        if(__int128(n)*mid*mid+__int128(b)*mid==c)
        {
            ans=mid;
            break;
        }
        else if(__int128(n)*mid*mid+__int128(b)*mid<c)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
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










// void solve()
// {
//     ll n, c;
//     cin>>n>>c;

    // ll aa=4LL*n, b=0LL, cc=0LL;
    // for(int i=0; i<n; i++)
    // {
    //     ll x;
    //     cin>>x;
    //     b+=x;
    //     cc+=(ll)x*x;
    // }
//     cout<<cc-c<<endl;
//     b*=4LL;
//     // cc-=c;
//     cout<<b*b<<' '<<((4LL)*aa*(cc-c))<<endl;
//     // cout<<(ll)sqrt((ll)abs(b*b-((4LL)*aa*cc)))<<endl;
//     ll ans=(-b+((ll)sqrt((ll)(b*b-((4LL)*aa*(cc-c))))))/(2LL*aa);
//     // cout<<ans<<endl;
// }













// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// #define vsort(a) sort(a.begin(), a.end())
// #define vmin(a) *min_element(a.begin(), a.end())
// #define vmax(a) *max_element(a.begin(), a.end())
// const ll N=1e9+7;


// void solve()
// {
//     char a;
//     string x="";
//     for(int i=0; i<64; i++)
//     {
//         cin>>a;
//         if(a>='a' && a<='z')
//         {
//             x+=a;
//         }
//     }
//     cout<<x<<endl;

    

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
