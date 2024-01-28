#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve()
{
    ll N, L, R;
    cin >> N >> L >> R;
    ll result = 0;
    for (int b = 0; N >> b; ++b) 
    {
        if ((N >> b) & 1) 
        {
            ll l = max(L, 1LL << b);
            ll r = min(R, (1LL << (b + 1)) - 1);
            if (l <= r) 
            {
                result += r - l + 1;
            }
        }
    }
    printf("%lld\n", result);
}

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();

    return 0;
}






















// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n"


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t=1;
//     //cin>>t;
//     while(t--)
//     {
//         ll n,l,r;
//         cin>>n>>l>>r;

//         ll ans=0;
//         ll val2=1;
//         vector<ll>vec1;
//         for(ll i=0;i<61;i++)
//         {
//             if((1LL<<i)&n)
//             {
//                 ll val1=(1LL<<(i+1))-1;
//                 ll val2=1LL<<i;
//                 val1=min(val1,r);
//                 val2=max(val2,l);

//                 //cout<<val1<<" "<<val2<<endl;
//                 if(val1>=val2)
//                 {
//                     ans+=(val1-val2)+1;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }