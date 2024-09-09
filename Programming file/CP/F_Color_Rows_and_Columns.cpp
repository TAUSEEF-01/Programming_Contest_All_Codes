#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e9));
    dp[0][0] = 0;

    for (int i = 0; i < n; ++i) { 
        int x = a[i], y = b[i];
        int xy = x + y;
        int cost = 0;
        
        for (int j = 0; j <= xy; ++j) {
            for (int j1 = 0; j1 + j <= k; ++j1) {
                dp[i + 1][j1 + j] = min(dp[i + 1][j1 + j], dp[i][j1] + cost);
            }

            if (x >= y) {
                x--, cost += y;
            } else {
                y--, cost += x;
            }
        }
    }
    
    cout << (dp[n][k] == 1e9 ? -1 : dp[n][k]) << '\n';
}
 
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }
    return 0;
}







// #include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// // Macros
// using ll = long long;
// using vb = vector<bool>;
// using vvb = vector<vb>;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vl = vector<ll>;
// using vvl = vector<vl>;
// using vc = vector<char>;
// using vvc = vector<vc>;
// using vs = vector<string>;
// #define all(X) X.begin(), X.end()

// // Vector IO
// namespace VectorIO
// {
//     string vectorsep = " ", vectorend = "\n";
// }
// template <typename T>
// istream &operator>>(istream &in, vector<T> &A)
// {
//     for (auto &t : A)
//     {
//         in >> t;
//     }
//     return in;
// }
// template <typename T>
// ostream &operator<<(ostream &out, vector<T> &A)
// {
//     for (int i = 0; i < A.size(); ++i)
//     {
//         out << A[i] << (i + 1 == A.size() ? VectorIO::vectorend : VectorIO::vectorsep);
//     }
//     return out;
// }

// // Vector Operation
// template <typename T>
// vector<T> operator~(vector<T> v)
// {
//     vector<T> ans = v;
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// template <typename T>
// vector<T> operator^(vector<T> fir, vector<T> sec)
// {
//     vector<T> ans = fir;
//     ans.insert(ans.end(), sec.begin(), sec.end());
//     return ans;
// }
// template <typename T>
// vector<T> &operator^=(vector<T> &fir, vector<T> sec)
// {
//     fir.insert(fir.end(), sec.begin(), sec.end());
//     return fir;
// }
// template <typename T>
// vector<T> operator+(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] + sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator+=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] += sec[i];
//     return fir;
// }
// template <typename T>
// vector<T> operator-(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] - sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator-=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] -= sec[i];
//     return fir;
// }
// template <typename T>
// vector<T> operator*(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] * sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator*=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] *= sec[i];
//     return fir;
// }
// template <typename T>
// vector<T> operator/(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] / sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator/=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] /= sec[i];
//     return fir;
// }

// #define takeinput(a)  \
//     for (auto &x : a) \
//         cin >> x;
// #define pb push_back
// #define all(a) a.begin(), a.end()
// #define asort(a) sort(all(a))
// #define amin(a) *min_element(all(a))
// #define amax(a) *max_element(all(a))
// #define smax(a) *(a.rbegin())
// #define smin(a) *a.begin()
// const double pi = 3.141592653589793238462643383279502884197;
// const ll mod = 1e9 + 7, inf = 1e18;
// #define fast                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

// void setIO()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

// int dp[1005][205];

// void reset()
// {
//     for (int i = 0; i < 1005; i++)
//     {
//         for (int j = 0; j < 205; j++)
//         {
//             dp[i][j] = mod;
//         }
//     }
// }

// void solve()
// {
//     reset();

//     int n, k;
//     cin >> n >> k;

//     dp[0][0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         int x, y;
//         cin >> x >> y;

//         int xt = x, yt = y;
//         int sum = 0;
//         for (int j = 1; j <= xt + yt; j++)
//         {
//             if (x <= y)
//             {
//                 sum += x;
//                 y--;
//             }
//             else
//             {
//                 sum += y;
//                 x--;
//             }
//             for (int l = 200; l >= 0; l--)
//             {
//                 dp[i][l] = min(dp[i][l], dp[i - 1][l]);
//                 if (dp[i - 1][l] != mod)
//                 {
//                     if (j + l <= 200)
//                     {
//                         dp[i][j + l] = min(dp[i][j + l], dp[i - 1][l] + sum);
//                     }
//                 }
//             }
//         }
//     }

//     int ans = mod;
//     for (int i = k; i <= 200; i++)
//         ans = min(ans, dp[n][i]);

//     if (ans >= mod)
//         ans = -1;

//     cout << ans << endl;
// }

// int main()
// {
//     fast;
//     // setIO();

//     int t = 1;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }



















// #include <bits/stdc++.h>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace std;
// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// // Macros
// using ll = long long;
// using vb = vector<bool>;
// using vvb = vector<vb>;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vl = vector<ll>;
// using vvl = vector<vl>;
// using vc = vector<char>;
// using vvc = vector<vc>;
// using vs = vector<string>;
// #define all(X) X.begin(), X.end()

// // Vector IO
// namespace VectorIO
// {
//     string vectorsep = " ", vectorend = "\n";
// }
// template <typename T>
// istream &operator>>(istream &in, vector<T> &A)
// {
//     for (auto &t : A)
//     {
//         in >> t;
//     }
//     return in;
// }
// template <typename T>
// ostream &operator<<(ostream &out, vector<T> &A)
// {
//     for (int i = 0; i < A.size(); ++i)
//     {
//         out << A[i] << (i + 1 == A.size() ? VectorIO::vectorend : VectorIO::vectorsep);
//     }
//     return out;
// }

// // Vector Operation
// template <typename T>
// vector<T> operator~(vector<T> v)
// {
//     vector<T> ans = v;
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// template <typename T>
// vector<T> operator^(vector<T> fir, vector<T> sec)
// {
//     vector<T> ans = fir;
//     ans.insert(ans.end(), sec.begin(), sec.end());
//     return ans;
// }
// template <typename T>
// vector<T> &operator^=(vector<T> &fir, vector<T> sec)
// {
//     fir.insert(fir.end(), sec.begin(), sec.end());
//     return fir;
// }
// template <typename T>
// vector<T> operator+(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] + sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator+=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] += sec[i];
//     return fir;
// }
// template <typename T>
// vector<T> operator-(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] - sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator-=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] -= sec[i];
//     return fir;
// }
// template <typename T>
// vector<T> operator*(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] * sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator*=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] *= sec[i];
//     return fir;
// }
// template <typename T>
// vector<T> operator/(vector<T> fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     vector<T> ans;
//     for (int i = 0; i < ans.size(); ++i)
//         ans[i] = fir[i] / sec[i];
//     return ans;
// }
// template <typename T>
// vector<T> &operator/=(vector<T> &fir, vector<T> sec)
// {
//     assert(fir.size() == sec.size());
//     for (int i = 0; i < fir.size(); ++i)
//         fir[i] /= sec[i];
//     return fir;
// }

// #define takeinput(a)  \
//     for (auto &x : a) \
//         cin >> x;
// #define pb push_back
// #define all(a) a.begin(), a.end()
// #define asort(a) sort(all(a))
// #define amin(a) *min_element(all(a))
// #define amax(a) *max_element(all(a))
// #define smax(a) *(a.rbegin())
// #define smin(a) *a.begin()
// const double pi = 3.141592653589793238462643383279502884197;
// const ll mod = 1e9 + 7, inf = 1e18;
// #define fast                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

// void setIO()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

// ll dp[10005][250];

// // int knapSack(int W, vi &wt, vi &val, int n)
// // {
// //     // Making and initializing dp array
// //     int dp[W + 1];
// //     memset(dp, 0, sizeof(dp));

// //     for (int i = 1; i < n + 1; i++) {
// //         for (int w = W; w >= 0; w--) {

// //             if (wt[i - 1] <= w)

// //                 // Finding the maximum value
// //                 dp[w] = max(dp[w], dp[w - wt[i - 1]] + val[i - 1]);
// //         }
// //     }
// //     // Returning the maximum value of knapsack
// //     return dp[W];
// // }

// ll process(int x, int y, int remain)
// {
//     if(x > y)
//         swap(x, y);

//     if(y - x <= remain)
//     {
//         return remain * x;
//     }
//     else
//     {
//         ll total = (y - x) * x;
//         remain -= (y - x);

//         int p = x;
//         for(int k = remain; k > 0; )
//         {
//             total += p;
//             k--;
//             if(k == 0)
//                 break;

//             total += p;
//             k--;
//             if(k == 0)
//                 break;

//             p--;
//         }

//         return total;
//     }
// }

// ll knapsack(vi &wt, vi &ct, int k, int n, vector<pair<int, int>> &vp)
// {
//     if(n <= -1 || k <= 0)
//         return inf;

//     if(dp[n][k] != inf)
//         return dp[n][k];

//     ll result = inf;

//     cout << "0: " << n << ' ' << k << ' ' << result << endl;
//     // ll temp1 = knapsack(wt, ct, k, n-1, vp);
//     // ll temp2 = knapsack(wt, ct, k - ct[n], n-1, vp);

//     if(ct[n] <= k)
//     {
//         // result = vp[n].first * vp[n].second;
//         // temp2 = knapsack(wt, ct, k - ct[n], n-1, vp);
//         ll temp1 = knapsack(wt, ct, k, n-1, vp);
//         ll temp2 = knapsack(wt, ct, k - ct[n], n-1, vp);
//         result = min(temp1, temp2)  + wt[n];

//         cout << "1: " << n << ' ' << k << ' ' << result << endl;
//     }
//     else
//     {
//         result = process(vp[n].first, vp[n].second, k);
//         // k = 0;
//         cout << "2: " << n << ' ' << k << ' ' << result << endl;
//     }

//     return dp[n][k] = result;
// }

// void solve()
// {
//     for(int i=0; i<10005; i++)
//     {
//         for(int j=0; j<250; j++)
//         {
//             dp[i][j] = inf;
//         }
//     }

//     // memset(dp, inf, sizeof(dp));

//     int n, k;
//     cin >> n>> k;

//     vi a(n), weight(n), cost(n);
//     vector<pair<int, int>> vp(n);

//     ll total = 0;
//     for(int i=0; i<n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         vp[i] = {x, y};
//         weight[i] = x * y;
//         cost[i] = x + y;
//         total += cost[i];
//     }

//     if(total < k)
//     {
//         cout << -1 << endl;
//         return;
//     }

//     cout << knapsack(weight, cost, k, n-1, vp) << endl;
// }

// int main()
// {
//     fast;
//     // setIO();

//     int t = 1;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }