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

#define take_input(a) \
    for (auto &x : a) \
        cin >> x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
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
    ll n;
    cin >> n;

    deque<ll> a(n);
    vl cnt(n + 1, 0);
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }

    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
        if (mx < a[i] && cnt[a[i]] >= 2)
        {
            mx = a[i];
        }
        else
        {
            a[i] = mx;
        }
        
        ans += a[i];
    }

    a[0] = mx = 0;
    vl cnt2(n + 1, 0);
    ll sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        cnt2[a[i]]++;
        if (mx < a[i] && cnt2[a[i]] >= 2)
        {
            mx = a[i];
        }
        else
        {
            a[i] = mx;
        }
        sum += a[i];
    }

    int s = n;
    while (s > 0 && a[0] == 0)
    {
        a.pop_front();
        s--;
    }

    reverse(all(a));
    while (s > 0)
    {
        ans += sum;
        sum -= a[0];
        a.pop_front();
        s--;
    }

    cout << ans << endl;
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

/*

2 2 3 --> 0
0 2 2 --> 7
0 0 2 --> 11
0 0 0 --> 13


2 1 1 2 --> 0
0 0 1 2 --> 6
0 0 0 0 --> 9


4 4 4 4 --> 0
0 4 4 4 --> 16
0 0 4 4 --> 16 + 12
0 0 0 4 --> 16 + 12 + 8
0 0 0 0 --> 16 + 12 + 8 + 4 = 40


1 1 2 1 --> 0
0 1 1 1 --> 5
0 0 1 1 --> 8
0 0 0 1 --> 10
0 0 0 0 --> 11


1 1 2 2 --> 0
0 1 1 2 --> 6
0 0 1 1 --> 10
0 0 0 1 --> 12
0 0 0 0 --> 13


1 1 2 2 3 --> 0
0 1 1 2 2 --> 9
0 0 1 1 2 --> 15
0 0 0 1 1 --> 19
0 0 0 0 1 --> 21
0 0 0 0 0 --> 22


2 2 1 1 3 --> 0
0 2 2 2 2 --> 9
0 0 2 2 2 --> 17
0 0 0 2 2 --> 23
0 0 0 0 2 --> 27
0 0 0 0 0 --> 29


2 1 1 2 1 --> 0
0 0 1 2 2 --> 7
0 0 0 0 2 --> 12
0 0 0 0 0 --> 14

3 1 1 2 2 --> 0
0 0 1 1 2 --> 9
0 0 0 1 1 --> 13
0 0 0 0 1 --> 15
0 0 0 0 0 --> 16


3 4 1 1 3 4 4 --> 0
0 0 0 1 3 4 4 --> 20
0 0 0 0 0 0 4 --> 32
0 0 0 0 0 0 0 --> 36

*/
