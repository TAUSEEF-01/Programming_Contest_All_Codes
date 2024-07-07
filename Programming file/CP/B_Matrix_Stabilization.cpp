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
    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    if (n == 1)
    {
        if (m == 1)
        {
            cout << a[0][0] << endl;
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                if (i == 0)
                {
                    if (a[0][i] > a[0][i + 1])
                    {
                        a[0][i] = a[0][i + 1];
                    }
                    continue;
                }
                else if (i == m - 1)
                {
                    if (a[0][i] > a[0][i - 1])
                    {
                        a[0][i] = a[0][i - 1];
                    }
                    continue;
                }
                if (a[0][i] > max({a[0][i - 1], a[0][i + 1]}))
                    a[0][i] = max({a[0][i - 1], a[0][i + 1]});
            }
            for (int i = 0; i < m; i++)
            {
                cout << a[0][i] << ' ';
            }
            cout << endl;
        }
        return;
    }

    if (m == 1)
    {
        if (n == 1)
        {
            cout << a[0][0] << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    if (a[i][0] > a[i + 1][0])
                    {
                        a[i][0] = a[i + 1][0];
                    }
                    continue;
                }
                else if (i == n - 1)
                {
                    if (a[i][0] > a[i - 1][0])
                    {
                        a[i][0] = a[i - 1][0];
                    }
                    continue;
                }
                if (a[i][0] > max({a[i - 1][0], a[i + 1][0]}))
                    a[i][0] = max({a[i - 1][0], a[i + 1][0]});
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i][0] << endl;
            }
        }
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    if (a[i][j] > max({a[i][j + 1], a[i + 1][j]}))
                        a[i][j] = max({a[i][j + 1], a[i + 1][j]});
                }
                else if (j == m - 1)
                {
                    if (a[i][j] > max({a[i][j - 1], a[i + 1][j]}))
                        a[i][j] = max({a[i][j - 1], a[i + 1][j]});
                }
                else
                {
                    if (a[i][j] > max({a[i][j - 1], a[i][j + 1], a[i + 1][j]}))
                        a[i][j] = max({a[i][j - 1], a[i][j + 1], a[i + 1][j]});
                }
            }
        }
        else if (i == n - 1)
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    if (a[i][j] > max({a[i][j + 1], a[i - 1][j]}))
                        a[i][j] = max({a[i][j + 1], a[i - 1][j]});
                }
                else if (j == m - 1)
                {
                    if (a[i][j] > max({a[i][j - 1], a[i - 1][j]}))
                        a[i][j] = max({a[i][j - 1], a[i - 1][j]});
                }
                else
                {
                    if (a[i][j] > max({a[i][j - 1], a[i][j + 1], a[i - 1][j]}))
                        a[i][j] = max({a[i][j - 1], a[i][j + 1], a[i - 1][j]});
                }
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0)
                {
                    if (a[i][j] > max({a[i][j + 1], a[i + 1][j], a[i - 1][j]}))
                        a[i][j] = max({a[i][j + 1], a[i + 1][j], a[i - 1][j]});
                }
                else if (j == m - 1)
                {
                    if (a[i][j] > max({a[i][j - 1], a[i + 1][j], a[i - 1][j]}))
                        a[i][j] = max({a[i][j - 1], a[i + 1][j], a[i - 1][j]});
                }
                else
                {
                    if (a[i][j] > max({a[i][j - 1], a[i][j + 1], a[i + 1][j], a[i - 1][j]}))
                        a[i][j] = max({a[i][j - 1], a[i][j + 1], a[i + 1][j], a[i - 1][j]});
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
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