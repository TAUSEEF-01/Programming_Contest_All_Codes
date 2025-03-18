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

#define get_bit(n, pos) (bool)(n & (1 << pos))
#define set_bit(n, pos) (n | (1 << pos))
#define clear_bit(n, pos) (n & (~(1 << pos)))
#define update_bit(n, pos, value) ((clear_bit(n, pos)) | (value << pos))

void solve()
{
    ll l, r;
    cin >> l >> r;

    ll num1 = r, pos = 0;
    for (ll i = 0; i < 32; i++)
    {
        ll val = (1LL << i);
        if(val > r)
            break;
            
        if (val & r)
        {
            ll temp = num1;
            if ((temp & ~(1LL << i)) >= l)
            {
                pos = i;
                num1 = (num1 & ~(1LL << i));
            }
        }
        else
        {
            num1 |= (val);
        }
    }

    ll num2 = num1, temp = num1;
    if ((temp & ~(1LL << pos)) >= l)
    {
        num2 = (num2 & ~(1LL << pos));
    }

    cout << (num1 ^ num2) + (num2 ^ r) + (r ^ num1) << " : ";
    cout << num2 << ' ' << num1 << ' ' << r << endl;

    // ll mx = 0;
    // for (ll i = 0;; i++)
    // {
    //     ll val = (1LL << i);
    //     if (val <= r)
    //     {
    //         mx = val;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    // ll val = l;
    // bitset<32> b1(l), b2(r);
    // string s1 = "", s2 = "";
    // s1 = b1.to_string();
    // s2 = b2.to_string();
    // // cout << s1 << endl;
    // // cout << s1 << endl << s2 << endl;

    // int pl = 0, pf = 31;
    // for (int i = 0; i < 32; i++)
    // {
    //     if (s2[i] == '1')
    //     {
    //         pl = i;
    //         break;
    //     }
    // }
    // for (int i = 31; i >= 0; i--)
    // {
    //     if (s1[i] == '0')
    //     {
    //         pf = i;
    //         break;
    //     }
    // }

    // int flag = 0;
    // for (int i = pl + 1; i <= pf; i++)
    // {
    //     if (s2[i] == '1' && flag)
    //     {
    //         s1[i] = '0';
    //     }
    //     else
    //     {
    //         s1[i] = '1';
    //         flag = 1;
    //         break;
    //     }
    // }

    // cout << s1 << endl;

    // ll num = 0;
    // // for (ll i = 0, j = 31; i < 32; i++, j--)
    // // {
    // //     if (s1[i] == '1')
    // //     {
    // //         // cout << i << ' ';
    // //         num += (1LL << j);
    // //     }
    // // }
    // num = (l + r) / 2;

    // // cout << (1 ^ 3) + (2 ^ 3) + (1 ^ 2) << ' ';
    // cout << (l ^ num) + (num ^ r) + (r ^ l) << " : ";
    // cout << l << ' ' << num << ' ' << r << endl;

    //
    // cout << 1 << ' ' << mx << ' ' << (mx - 1 == 1? 0 : mx - 1) << endl;
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
