// accepted
// https://codeforces.com/contest/1948/problem/C

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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

using ll = long long;
using ull = unsigned long long;
using vb = vector<bool>;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vs = vector<string>;
#define all_in(a)     \
    for (auto &x : a) \
        cin >> x;
#define pb push_back
#define pb push_back

#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define asort(vec) sort(all(vec))
#define rasort(vec) sort(rall(vec))

#define vec_min(vec) *min_element(all(vec))
#define vec_max(vec) *max_element(all(vec))

#define ub(vec, x) upper_bound(all(vec), x)
#define lb(vec, x) lower_bound(all(vec), x)
#define bins(a, n) binary_search(a.begin(), a.end(), n) // returns true or false value

#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)

#define total_sum(a) accumulate(a.begin(), a.end(), 0) // total_sum initializing with 0; //this fnc gives the total sum of all numbers in the array

#define get_bit(n, pos) (bool)(n & (1 << pos)) // returns bool value --> 0 or 1;
#define set_bit(n, pos) (n | (1 << pos))
#define clear_bit(n, pos) (n & (~(1 << pos)))
#define update_bit(n, pos, value) ((clear_bit(n, pos)) | (value << pos))

#define mem(a, x) memset(a, x, sizeof(a))

#define nxp(v) next_permutation(v.begin(), v.end());

const double pi = acos(-1);
const ll MOD = 1e9 + 7;
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

#define py           \
    cout << "YES\n"; \
    return;
#define pn          \
    cout << "NO\n"; \
    return;

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void in_out()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

string a[2];

bool check(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[0][i] == '<' && a[1][i + 1] == '<' && i % 2 != 0)
            return false;
        if (a[0][i + 1] == '<' && a[1][i] == '<' && (1 + i) % 2 != 0)
            return false;
    }

    return true;
}

void get_answer()
{
    int n;
    cin >> n;

    cin >> a[0] >> a[1];

    if (check(n))
    {
        py;
    }
    else
    {
        pn;
    }
}

int main()
{
    FAST_IO();

    // in_out();

    int test = 1;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        // cout << "Case " << i << ": ";
        get_answer();
    }

    return 0;
}
