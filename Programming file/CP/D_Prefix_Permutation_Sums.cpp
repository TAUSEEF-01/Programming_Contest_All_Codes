#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Macros
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
#define all(X) X.begin(), X.end()

// Vector IO
namespace VectorIO
{
    string vectorsep = " ", vectorend = "\n";
}
template <typename T>
istream &operator>>(istream &in, vector<T> &A)
{
    for (auto &t : A)
    {
        in >> t;
    }
    return in;
}
template <typename T>
ostream &operator<<(ostream &out, vector<T> &A)
{
    for (int i = 0; i < A.size(); ++i)
    {
        out << A[i] << (i + 1 == A.size() ? VectorIO::vectorend : VectorIO::vectorsep);
    }
    return out;
}

// Vector Operation
template <typename T>
vector<T> operator~(vector<T> v)
{
    vector<T> ans = v;
    reverse(ans.begin(), ans.end());
    return ans;
}
template <typename T>
vector<T> operator^(vector<T> fir, vector<T> sec)
{
    vector<T> ans = fir;
    ans.insert(ans.end(), sec.begin(), sec.end());
    return ans;
}
template <typename T>
vector<T> &operator^=(vector<T> &fir, vector<T> sec)
{
    fir.insert(fir.end(), sec.begin(), sec.end());
    return fir;
}
template <typename T>
vector<T> operator+(vector<T> fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    vector<T> ans;
    for (int i = 0; i < ans.size(); ++i)
        ans[i] = fir[i] + sec[i];
    return ans;
}
template <typename T>
vector<T> &operator+=(vector<T> &fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    for (int i = 0; i < fir.size(); ++i)
        fir[i] += sec[i];
    return fir;
}
template <typename T>
vector<T> operator-(vector<T> fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    vector<T> ans;
    for (int i = 0; i < ans.size(); ++i)
        ans[i] = fir[i] - sec[i];
    return ans;
}
template <typename T>
vector<T> &operator-=(vector<T> &fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    for (int i = 0; i < fir.size(); ++i)
        fir[i] -= sec[i];
    return fir;
}
template <typename T>
vector<T> operator*(vector<T> fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    vector<T> ans;
    for (int i = 0; i < ans.size(); ++i)
        ans[i] = fir[i] * sec[i];
    return ans;
}
template <typename T>
vector<T> &operator*=(vector<T> &fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    for (int i = 0; i < fir.size(); ++i)
        fir[i] *= sec[i];
    return fir;
}
template <typename T>
vector<T> operator/(vector<T> fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    vector<T> ans;
    for (int i = 0; i < ans.size(); ++i)
        ans[i] = fir[i] / sec[i];
    return ans;
}
template <typename T>
vector<T> &operator/=(vector<T> &fir, vector<T> sec)
{
    assert(fir.size() == sec.size());
    for (int i = 0; i < fir.size(); ++i)
        fir[i] /= sec[i];
    return fir;
}

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

const int lmt = 2e5 + 7;
vl store(lmt);

void precalc()
{
    for (ll i = 0; i < lmt; i++)
    {
        store[i] = i * (i + 1) / 2;
    }
}

void solve()
{
    ll n;
    cin >> n;

    ll limit = (n * (n + 1LL)) / 2;
    int flag = 1;

    vl a(n - 1);
    map<ll, int> mp;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        if (a[i] > limit)
        {
            flag = 0;
        }
        if (i > 0)
        {
            mp[a[i] - a[i - 1]]++;
        }
    }

    if (flag == 0)
    {
        cout << "NO\n";
        return;
    }

    if (n == 2)
    {
        if (a[0] == 3 || a[0] == 2 || a[0] == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return;
    }

    if (mp[a[0]] == 0)
        mp[a[0]]++;

    int cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            cnt++;
        }
    }

    if (cnt <= min(2LL, max(n - 2, 1LL)))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    fast;
    // setIO();

    precalc();

    int t = 1;
    cin >> t;

    while (t--)
    {
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

// const int lmt = 2e5 + 7;
// vl store(lmt);

// void precalc()
// {
//     for (ll i = 0; i < lmt; i++)
//     {
//         store[i] = i * (i + 1) / 2;
//     }
// }

// void solve()
// {
//     ll n;
//     cin >> n;

//     ll limit = (n * (n + 1LL)) / 2;
//     // cout << limit << ' ' << n << endl;
//     int flag = 1;

//     vl a(n - 1);
//     map<ll, int> mp;
//     // map<ll, int> mark;

//     int cnt = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> a[i];
//         if (a[i] > limit)
//         {
//             // cout << limit << ' ' << a[i] << endl;
//             flag = 0;
//         }

//         // mark[a[i]]++;

//         if (i > 0)
//         {
//             mp[a[i] - a[i - 1]]++;
//             // if(mp[a[i] - a[i-1]] > 1)
//             // flag = 0;
//             // cnt++;
//         }
//     }

//     if (flag == 0)
//     {
//         cout << "NO\n";
//         return;
//     }

//     if (mp[a[0]] == 0)
//         mp[a[0]]++;

//     for (ll i = 1; i <= n; i++)
//     {
//         if (mp[i] == 0)
//         {
//             // cout << i << ' ';
//             cnt++;
//         }
//     }

//     if (cnt <= min(2LL, max(n - 2, 1LL)))
//         // if(flag)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }

// // 1 6 8 15
// //  5 2 7

// int main()
// {
//     fast;
//     // setIO();

//     precalc();

//     int t = 1;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }