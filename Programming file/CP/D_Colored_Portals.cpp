// accepted

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

void solve()
{
    int n, q;
    cin >> n >> q;

    map<string, int> mp;
    mp["BG"] = 0;
    mp["BR"] = 1;
    mp["BY"] = 2;
    mp["GR"] = 3;
    mp["GY"] = 4;
    mp["RY"] = 5;

    string s[n];
    vvi a(6);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        a[mp[s[i]]].push_back(i);
    }

    vi sz(6);
    for (int i = 0; i < 6; i++)
    {
        sz[i] = a[i].size();
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;

        x--, y--;
        if (x > y)
            swap(x, y);

        if (mp[s[x]] + mp[s[y]] != 5)
        {
            cout << y - x << endl;
            continue;
        }

        int dist = INT_MAX;
        for (int i = 0; i < 6; i++)
        {
            if (sz[i] == 0)
                continue;

            if (mp[s[x]] == i && mp[s[y]] + i != 5)
            {
                int val = INT_MAX, pos = upper_bound(all(a[i]), x) - a[i].begin();
                if (pos != sz[i])
                {
                    val = a[i][pos];
                    dist = min(dist, abs(val - x) + abs(val - y));
                }
            }
            else if (mp[s[x]] + i != 5 && mp[s[x]] != i)
            {
                int val = INT_MAX, pos = lower_bound(all(a[i]), x) - a[i].begin();
                if (pos != sz[i])
                {
                    val = a[i][pos];
                    dist = min(dist, abs(val - x) + abs(val - y));
                }

                if (pos - 1 >= 0)
                {
                    pos--;
                    val = a[i][pos];
                    if (val != x)
                        dist = min(dist, abs(val - x) + abs(val - y));
                }
            }

            if (mp[s[y]] == i && mp[s[x]] + i != 5)
            {
                int val = INT_MAX, pos = upper_bound(all(a[i]), y) - a[i].begin();
                if (pos != sz[i])
                {
                    val = a[i][pos];
                    dist = min(dist, abs(val - x) + abs(val - y));
                }
            }
            else if (mp[s[y]] + i != 5 && mp[s[y]] != i)
            {
                int val = INT_MAX, pos = lower_bound(all(a[i]), x) - a[i].begin();
                if (pos != sz[i])
                {
                    val = a[i][pos];
                    dist = min(dist, abs(val - x) + abs(val - y));
                }

                if (pos - 1 >= 0)
                {
                    pos--;
                    val = a[i][pos];
                    if (val != x)
                        dist = min(dist, abs(val - x) + abs(val - y));
                }
            }
        }

        if (dist >= INT_MAX / 2)
            dist = -1;

        cout << dist << endl;
    }
}

int main()
{
    fast;
    // setIO();

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}