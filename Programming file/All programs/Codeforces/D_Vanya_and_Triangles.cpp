// accepted

// must try on my own.
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

    vector<pair<int, int>> vp(n);
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;

        vp[i]={x, y};
    }

    map<pair<int, int>, int> mp;
    ll ans=0;

    for(int i=0; i<n; i++)
    {
        mp.clear();
        for(int j=i+1; j<n; j++)
        {
            int X=vp[i].first-vp[j].first;
            int Y=vp[i].second-vp[j].second;

            int GCD=__gcd(X, Y);
            X/=GCD;
            Y/=GCD;

            mp[{X, Y}]++;
        }

        ll num=n-(i+1);
        ans+= num*(num-1)/2;

        for(auto &number: mp)
        {
            ans-=number.second * (number.second-1)/2;
        }
    }

    cout<<ans<<endl;
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
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
























// // accepted
// // https://codeforces.com/contest/552/problem/D

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// #define vsort(a) sort(a.begin(), a.end())
// #define vmin(a) *min_element(a.begin(), a.end())
// #define vmax(a) *max_element(a.begin(), a.end())
// const ll N = 1e9 + 7;
// const double pi = acos(-1);

// ll countTriangles(pair<int, int> P[], int N)
// {
//     map<pair<int, int>, int> mp;
//     ll ans = 0;

//     for (int i = 0; i < N; i++)
//     {
//         mp.clear();

//         for (int j = i + 1; j < N; j++)
//         {
//             int X = P[i].first - P[j].first;
//             int Y = P[i].second - P[j].second;

//             int g = __gcd(X, Y);
//             X /= g;
//             Y /= g;
//             mp[{X, Y}]++;
//         }

//         int num = N - (i + 1);
//         ans += (num * (num - 1) * 1LL) / 2;

//         for (auto j : mp)
//         {
//             ans -= (j.second * (j.second - 1) * 1LL) / 2;
//         }
//     }
//     return ans;
// }

// void solve()
// {
//     int n;
//     cin >> n;

//     pair<int, int> pr[n];
//     for (int i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         pr[i] = {x, y};
//     }

//     cout << countTriangles(pr, n) << endl;
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

//     int t = 1;
//     // cin>>t;

//     for (int i = 1; i <= t; i++)
//     {
//         // cout<<"Case "<<i<<": ";
//         solve();
//     }

//     return 0;
// }
