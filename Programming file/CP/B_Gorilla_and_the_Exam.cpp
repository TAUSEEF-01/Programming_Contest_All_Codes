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
const double pi = 3.141592653589793238462643383279502884197;
const ll mod = 1e9 + 7, inf = 1e18;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

void solve()
{
    ll n, k;
    cin >> n >> k;

    vl a(n);
    map<ll, ll> mp;
    ll mx = inf, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] > cnt)
        {
            cnt = mp[a[i]];
            mx = mp[a[i]];
        }
        else if (mp[a[i]] == cnt)
        {
            if (mx > a[i])
            {
                mx = a[i];
            }
        }
        // mx = min(mx, a[i]);
    }

    map<ll, ll> mp2;
    vector<pair<ll, ll>> vp;
    for (auto &x : mp)
    {
        vp.push_back({x.second, x.first});
    }
    asort(vp);

    int s = vp.size();
    for (int i = 0; i < s; i++)
    {
        if (vp[i].first <= k)
        {
            k -= vp[i].first;
            continue;
        }
        mp2[vp[i].second];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] != mx)
    //     {
    //         if (k > 0)
    //         {
    //             a[i] = mx;
    //             k--;
    //         }
    //     }
    //     mp2[a[i]]++;
    // }

    cout << max((int)mp2.size(), 1) << endl;
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int test = 1;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
