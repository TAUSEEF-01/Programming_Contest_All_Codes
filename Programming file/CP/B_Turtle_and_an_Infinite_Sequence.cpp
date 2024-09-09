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

#define get_bit(n, pos) (bool)(n & (1LL << pos))
#define set_bit(n, pos) (n | (1LL << pos))
#define clear_bit(n, pos) (n & (~(1 << pos)))
#define update_bit(n, pos, value) ((clear_bit(n, pos)) | (value << pos))

ll leftCount(ll num, string a, int sz)
{
    int flag = 0;
    for (ll i = sz - 1, j = 0; i >= 0; i--, j++)
    {
        if (a[i] == '0')
        {
            flag = 1;
            num = set_bit(num, j);
        }
        if (flag && a[i] == '1')
        {
            num = clear_bit(num, j);
            return num;
        }
    }
}

ll rightCount(ll num, string a, int sz)
{
    for (ll i = sz - 1, j = 0; i >= 0; i--, j++)
    {
        if (a[i] == '0')
        {
            num = set_bit(num, j);
            return num;
        }
        else
        {
            num = clear_bit(num, j);
        }
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll nb = n + m, ns = max(n - m, 0LL), temp = n;
    string a;
    while (temp > 0)
    {
        a += (temp % 2 + '0');
        temp /= 2;
    }
    temp = n;

    ll sz = a.size();
    reverse(all(a));
    for (int i = 0; i < 33 - sz; i++)
    {
        a = "0" + a;
    }
    a = "1" + a;
    // cout << a << endl;

    sz = a.size();
    for (ll i = sz - 1, j = 0; i >= 0; i--, j++)
    {
        // cout << i << ": \n";
        if (a[i] == '0')
        {
            ll t1 = leftCount(n, a, sz), t2 = rightCount(n, a, sz);

            // bitset<34> b1 = t1;
            // bitset<34> b2 = t2;
            // cout << a << endl;
            // cout << b1 << endl;
            // cout << b2 << endl;
            // cout << ns << ' ' << t1 << ' ' << temp << ' ' << t2 << ' ' << nb << endl;

            if ((t1 >= ns && t1 <= nb) || (t2 >= ns && t2 <= nb))
            {
                a[i] = '1';
                n = set_bit(n, j);
            }
            // cout << n << endl;
        }
        // cout << endl;
    }

    cout << n << endl;
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