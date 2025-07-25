// accepted

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

    ll p = ceil((double)log2((double)k));

    if (p > n - 1)
    {
        cout << -1 << endl;
        return;
    }

    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
            cout << i << ' ';
        cout << endl;
        return;
    }

    ll val = 0, cnt = 0;
    vector<int> v(n, n);

    int l = 0, r = n - 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        cnt++;
        if (i > p)
        {
            v[l] = cnt;
            l++;
            continue;
        }

        val = (1LL << i);

        if (k > val)
        {
            k -= val;
            v[r] = cnt;
            r--;
        }
        else
        {
            v[l] = cnt;
            l++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << endl;
}

/*
3 --> 4
1 2 3 : 10
1 3 2 : 10
2 3 1 : 10
3 2 1 : 10

*/

/*
4 --> 8
1 2 3 4 : 20 -
1 2 4 3 : 20 -
1 3 4 2 : 20 -
1 4 3 2 : 20 -
2 3 4 1 : 20 -
2 4 3 1 : 20 -
3 4 2 1 : 20 -
4 3 2 1 : 20 -

*/

/*
5 --> 16
1 2 3 4 5 : 35 --
1 2 3 5 4 : 35 --
1 2 4 5 3 : 35 --
1 2 5 4 3 : 35 --
1 3 4 5 2 : 35 --
1 3 5 4 2 : 35 --
1 4 5 3 2 : 35 --
1 5 4 3 2 : 35 --
2 3 4 5 1 : 35 --
2 3 5 4 1 : 35 --
2 4 5 3 1 : 35 --
2 5 4 3 1 : 35 --
3 4 5 2 1 : 35 --
3 5 4 2 1 : 35 --
4 5 3 2 1 : 35 --
5 4 3 2 1 : 35 --

*/

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
