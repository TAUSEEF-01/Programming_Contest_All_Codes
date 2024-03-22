// accepted
// https://codeforces.com/contest/1941/problem/C

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
    void solve();
};

void solution::solve()
{
    int n;
    cin >> n;

    string a;
    cin >> a;

    int cnt = 0;
    int pos = a.find("map");

    while (pos != string::npos)
    {
        a.replace(pos, 3, "zzz");
        pos = a.find("map", pos + 3);
        cnt++;
    }

    pos = a.find("pie");
    while (pos != string::npos)
    {
        a.replace(pos, 3, "zzz");
        pos = a.find("pie", pos + 3);
        cnt++;
    }

    cout << cnt << endl;
}

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
        solve.solve();
    }

    return 0;
}
