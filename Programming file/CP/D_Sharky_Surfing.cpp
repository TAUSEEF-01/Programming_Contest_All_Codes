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

void resoudre()
{
    ll n, m, L;
    cin >> n >> m >> L;

    vector<array<ll, 3>> vp(n);
    for (int i = 0; i < n; i++)
    {
        ll r, l;
        cin >> r >> l;
        ll d = l - r + 2;

        // vp[i] = {r, d};
        vp[i][0] = r;
        vp[i][1] = l;
        vp[i][2] = d;
    }

    // map<ll, vector<ll>> mp;
    multiset<ll> ms;
    int pos = 0;
    int ans = 0;
    ll k = 1;
    int flag = 0;
    // map<ll, array<ll, 2>> mpp;
    for (int i = 0; i < m; i++)
    {
        ll x, v;
        cin >> x >> v;

        // dbg(k);
        // dbg(x);
        // dbg(vp[pos][0]);

        if (flag || pos >= n)
            continue;

        if (pos < n && x < vp[pos][0])
        {

            ms.insert(v);
        }
        else // if(pos < n)
        {
            while (pos < n && vp[pos][0] < x)
            {
                while (vp[pos][0] - 1 + k <= vp[pos][1])
                {
                    if (ms.empty())
                    {
                        flag = 1;
                        break;
                    }
                    auto it = ms.rbegin();
                    k += (*it);
                    // dbg(k);
                    auto val = ms.find(*it);
                    ms.erase(val);
                    ans++;
                }
                pos++;
                if (flag)
                    break;
            }
            ms.insert(v);
        }
    }

    while (pos < n)
    {
        while (vp[pos][0] - 1 + k <= vp[pos][1])
        {
            if (ms.empty())
            {
                flag = 1;
                break;
            }
            auto it = ms.rbegin();
            k += (*it);
            // dbg(k);
            auto val = ms.find(*it);
            ms.erase(val);
            ans++;
        }
        pos++;
        if (flag)
            break;
    }

    if (flag)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}

int main()
{
    fast;

    // setIO();

    int test = 1;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        // cout << "Case " << i << ": ";
        resoudre();
    }

    return 0;
}
