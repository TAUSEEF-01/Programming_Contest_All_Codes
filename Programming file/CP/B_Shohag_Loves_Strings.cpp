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

// int f1(string &a, int i, unordered_set<string> &st)
// {
//     string t;
//     t += a[i];
//     st.insert(t);

//     t = "";
//     t += a[i + 1];
//     st.insert(t);

//     t = "";
//     t += a[i];
//     t += a[i + 1];
//     st.insert(t);

//     return st.size();
// }

// int f2(string &a, int i, unordered_set<string> &st)
// {
//     string t;
//     t += a[i];
//     st.insert(t);

//     t = "";
//     t += a[i + 1];
//     st.insert(t);

//     t = "";
//     t += a[i + 2];
//     st.insert(t);

//     t = "";
//     t += a[i];
//     t += a[i + 1];
//     st.insert(t);

//     t = "";
//     t += a[i + 1];
//     t += a[i + 2];
//     st.insert(t);

//     t = "";
//     t += a[i];
//     t += a[i + 1];
//     t += a[i + 2];
//     st.insert(t);

//     return st.size();
// }

// int f3(string &a, int i, unordered_set<string> &st)
// {
//     string t;
//     t += a[i];
//     st.insert(t);

//     t = "";
//     t += a[i + 1];
//     st.insert(t);

//     t = "";
//     t += a[i + 2];
//     st.insert(t);

//     t = "";
//     t += a[i + 3];
//     st.insert(t);

//     t = "";
//     t += a[i];
//     t += a[i + 1];
//     st.insert(t);

//     t = "";
//     t += a[i + 1];
//     t += a[i + 2];
//     st.insert(t);

//     t = "";
//     t += a[i + 2];
//     t += a[i + 3];
//     st.insert(t);

//     t = "";
//     t += a[i];
//     t += a[i + 1];
//     t += a[i + 2];
//     st.insert(t);

//     t = "";
//     t += a[i + 1];
//     t += a[i + 2];
//     t += a[i + 3];
//     st.insert(t);

//     t = "";
//     t += a[i];
//     t += a[i + 1];
//     t += a[i + 2];
//     t += a[i + 3];
//     st.insert(t);

//     return st.size();
// }

void resoudre()
{
    string a;
    cin >> a;

    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n)
        {
            if (a[i] == a[i + 1])
            {
                cout << a[i] << a[i + 1] << endl;
                return;
            }
        }
        if (i + 2 < n)
        {
            if (a[i] != a[i + 1] && a[i] != a[i + 2] && a[i + 1] != a[i + 2])
            {
                cout << a[i] << a[i + 1] << a[i + 2] << endl;
                return;
            }
        }
        // string s;

        // for (int p = 0; p < 4 && p + i < n; p++)
        // {
        //     s.push_back(a[i + p]);
        //     unordered_set<string> st;

        //     if (p == 1)
        //     {
        //         if (f1(s, i, st) % 2 == 0)
        //         {
        //             cout << s << endl;
        //             return;
        //         }
        //     }
        //     else if (p == 2)
        //     {
        //         if (f2(s, i, st) % 2 == 0)
        //         {
        //             cout << s << endl;
        //             return;
        //         }
        //     }
        //     else if (p == 3)
        //     {
        //         if (f3(s, i, st) % 2 == 0)
        //         {
        //             cout << s << endl;
        //             return;
        //         }
        //     }
        // }
    }

    cout << -1 << endl;
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

// for (int j = 0; j <=p; j++) {

// string ans = "";
// for (int k = i; k <=p; k++) {

//         ans += s[k];

//         // if the size of the string
//         // is equal to 1 then insert
//         // if (ans.size() == n) {

//             // inserting unique
//             // sub-string of length L
//             st.insert(ans);
//             break;
//         // }
//     }
// }

// for (int j = 0; j <= p; j++) {
//     string temp = "";
//     for (int k = i; k <= p; k++) {
//         temp += s[k];
//         st.insert(temp);
//     }
// }

// for (int j = 0; j <= p; j++) {
//     st.insert(s.substr(j, p));
// }
// cout << s << endl;

// fnc(s, "", 0, st);

// if(s == "bang")
// {
//     cout << st.size() << endl;
//     for (auto &l : st)
//     {
//         cout << l << endl;
//     }
// }

// if (st.size() % 2 == 0)
// {

// cout << st.size() << endl;
// for (auto &l : st)
// {
//     cout << l << endl;
// }

//     cout << s << endl;
//     return;
// }