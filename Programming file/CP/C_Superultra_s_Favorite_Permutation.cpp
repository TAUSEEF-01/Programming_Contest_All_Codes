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

const int pr = 2e5 + 10;
vector<bool> isPrime(pr, 1);

void prime_array()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < pr; ++i)
    {
        if (isPrime[i] == true)
        {
            for (int j = 2 * i; j < pr; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

void resoudre()
{
    int n;
    cin >> n;

    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }

    int flag = 0;
    vi ans;
    for (int i = 1; i <= n; i += 2)
    {
        ans.push_back(i);
    }

    int p = (n % 2 ? n : n - 1), mark = -1;
    for (int i = 2; i <= n; i += 2)
    {
        if (!isPrime[p + i])
        {
            mark = i;
            break;
        }
    }

    if (mark != -1)
    {
        ans.push_back(mark);
        for (int i = 2; i <= n; i += 2)
        {
            if (i != mark)
                ans.push_back(i);
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    fast;
    prime_array();

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
