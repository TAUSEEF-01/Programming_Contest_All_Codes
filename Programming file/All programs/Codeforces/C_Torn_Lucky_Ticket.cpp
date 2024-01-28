// accepted
// https://codeforces.com/contest/1895/problem/C

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

class solution
{
public:
    void resoudre()
    {
        int n;
        cin >> n;

        vs a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        auto comparator = [&](string &a, string &b)
        {
            return a.size() < b.size();
        };

        sort(a.begin(), a.end(), comparator);

        map<pair<int, int>, int> mpp;
        ll ans = n;
        for (auto &str : a)
        {
            int sz = str.size();
            for (int i = 1; i <= sz; i++)
            {
                if ((sz + i) & 1)
                    continue;

                int mid = (sz + i) / 2;
                int f_part = 0, s_part = 0;

                for (int j = 0; j < mid; j++)
                {
                    f_part += str[j] - '0';
                }
                for (int j = mid; j < sz; j++)
                {
                    s_part += str[j] - '0';
                }
                if (f_part - s_part >= 0)
                    ans += mpp[{i, f_part - s_part}];
            }

            reverse(str.begin(), str.end());

            for (int i = 1; i <= sz; i++)
            {
                if ((sz + i) & 1)
                    continue;
                int mid = (sz + i) / 2;

                int f_part = 0, s_part = 0;
                for (int j = 0; j < mid; j++)
                {
                    f_part += str[j] - '0';
                }
                for (int j = mid; j < sz; j++)
                {
                    s_part += str[j] - '0';
                }
                if (f_part - s_part >= 0)
                    ans += mpp[{i, f_part - s_part}];
            }

            int sum_digits = 0;
            for (int i = 0; i < sz; i++)
            {
                sum_digits += str[i] - '0';
            }
            mpp[{sz, sum_digits}]++;
        }

        cout << ans << endl;
    }
};

int main()
{
    fast;

    // setIO();

    int test = 1;
    // cin >> test;

    solution solve;

    for (int i = 1; i <= test; i++)
    {
        // cout << "Case " << i << ": ";
        solve.resoudre();
    }

    return 0;
}
