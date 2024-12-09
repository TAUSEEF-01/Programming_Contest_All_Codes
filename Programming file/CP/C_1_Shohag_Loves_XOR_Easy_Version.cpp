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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

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
#define takeinput(a)  \
    for (auto &x : a) \
        cin >> x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
#define smax(a) *(a.rbegin())
#define smin(a) *a.begin()
const double pi = 3.141592653589793238462643383279502884197;
const ll mod = 1e9 + 7, inf = 1e18;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

void setIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// const int sz = 1e6 + 7;
// vvi store(sz);
// void precalc()
// {
//     for (int i = 1; i < sz; i++)
//     {
//         int p = ceil(log2((double)i));
//         int q = (1 << (p - 1));
//         int r = (1 << p);
//         for (int j = q; j <= r; j++)
//         {
//             int pp = (j ^ i);
//             if (i == j)
//                 continue;
//             if (i % pp == 0 || i % pp == 0)
//             {
//                 store[i].push_back(i);
//             }
//         }
//     }
// }

void resoudre()
{
    ll x, m;
    cin >> x >> m;

    ll ans = 0;

    ll p = ceil(log2((double)x));
    ll q = max((1 << (p - 1)), 1);
    ll r = (1 << p);
    if (r == x)
    {
        r = (1 << (p + 1));
    }
    // cout << q << ' ' << r << ' ';
    for (ll i = q; i <= r; i++)
    {
        ll pp = (i ^ x);
        if (x == i)
            continue;
        if (i > m)
            break;
        if (x % pp == 0 || i % pp == 0)
        {
            ans++;
        }
    }

    cout << ans << endl;

    // cout << x << " " << m << ": ";
    // for (int i = 1; i <= m; i++)
    // {
    //     int p = (i ^ x);
    //     if (i == x)
    //         continue;
    //     if (x % p == 0 || i % p == 0)
    //     {
    //         cout << i << ' ';
    //         ans++;
    //     }
    // }

    // cout << ": " << ans << endl
    //      << endl;

    // for(auto &i: store[x])
    // {
    //     int p = (i ^ x);
    //     if(i == x && i > m)
    //         continue;
    //     if(x % p == 0 || i % p == 0)
    //     {
    //         ans++;
    //     }
    // }

    // ll ans = 0, num = x;
    // while (num > 1)
    // {
    //     ll prime_factor = hp[num];
    //     if (prime_factor <= m)
    //         ans++;
    //     while (num % prime_factor == 0)
    //     {
    //         num /= prime_factor;
    //     }
    // }

    // cout << ans << endl;
}

int main()
{
    fast;

    // setIO();
    // precalc();

    int test = 1;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        // cout << "Case " << i << ": ";
        resoudre();
    }

    return 0;
}
