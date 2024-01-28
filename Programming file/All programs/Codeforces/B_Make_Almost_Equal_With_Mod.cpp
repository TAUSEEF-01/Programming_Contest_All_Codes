// accepted
// https://codeforces.com/problemset/problem/1909/B

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

#define get_bit(n, pos) (int)(n & (1 << pos)) // returns bool value --> 0 or 1;
#define set_bit(n, pos) (n | (1 << pos))
#define clear_bit(n, pos) (n & (~(1 << pos)))
#define update_bit(n, pos, value) ((clear_bit(n, pos)) | (value << pos))

void setIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class solution
{
public:
    void resoudre()
    {
        int n;
        cin >> n;

        vl a(n);
        int o = 0, e = 0;
        ll GCD = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] & 1)
                o++;
            else
                e++;
        }

        if (e && o)
        {
            cout << 2 << endl;
        }
        else
        {
            for (ll i = 2; i <= 56; i++)
            {
                set<ll> st;
                for (int j = 0; j < n; j++)
                {
                    st.insert(a[j] % (1LL<<i));
                }
                if (st.size() == 2)
                {
                    cout << (1LL << i) << endl;
                    /*
                        where the 1st bit differs for all numbers that's the number by which 
                        if modulus taken then only 2 different remainders can be found.

                        101111011
                        101010111
                        100010011
                        111100111
                              ^ --> this the 1st bit where numbers differ. Hence (1<<3) will be the number;
                    */
                    return;
                }
            }
        }
    }
};

int main()
{
    fast;

    // setIO();

    int test = 1;
    cin >> test;

    solution solve;

    for (int i = 1; i <= test; i++)
    {
        // cout << "Case " << i << ": ";
        solve.resoudre();
    }

    return 0;
}
