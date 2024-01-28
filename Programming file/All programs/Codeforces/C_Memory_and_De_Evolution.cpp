// accepted
// https://codeforces.com/contest/712/problem/C

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
    void solve()
    {
        int x, y;
        cin >> x >> y;

        int a[3] = {y, y, y};

        int ans = 0;
        while (a[0] != x)
        {
            a[0] = min(x, a[1] + a[2] - 1);
            rotate(a, a + 1, a + 3);
            ans += 1;
        }

        cout << ans << "\n";
    }

    void resoudre()
    {
        int x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = 0;
            multiset<int> ms;
            ms.insert(y);
            ms.insert(y);
            ms.insert(y);

            while (1)
            {
                int MIN = *ms.begin();
                int MAX = *ms.rbegin();
                auto it_max2 = ms.rbegin();
                it_max2--;
                int num = MAX + *it_max2 - 1;
                auto it = ms.find(MIN);
                ms.erase(it);
                ms.insert(num);
                if (num >= x)
                {
                    ans += 3;
                    break;
                }
                else
                {
                    ans++;
                }
            }

            cout << ans << endl;
        }
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
        // solve.resoudre();
        solve.solve();
    }

    return 0;
}
