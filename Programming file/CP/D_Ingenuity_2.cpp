// accepted
// https://codeforces.com/contest/1974/problem/D

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
    int n;
    cin >> n;

    string a;
    cin >> a;

    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'E')
            l++;
        else if (a[i] == 'W')
            l--;
        else if (a[i] == 'N')
            r++;
        else if (a[i] == 'S')
            r--;
    }

    l = abs(l);
    r = abs(r);

    if (l % 2 || r % 2 || n % 2)
    {
        cout << "NO\n";
        return;
    }

    if (n == 2)
    {
        if (l == 2 || r == 2)
        {
            cout << "RH\n";
        }
        else
        {
            cout << "NO\n";
        }
        return;
    }

    if (l + r == 0)
    {
        string ans = "";
        for (int i = 0; i < n; i++)
            ans += "R";

        if (n == 4)
        {
            set<char> s;
            for (int i = 0; i < n; i++)
            {
                s.insert(a[i]);
            }
            if (s.size() == 4)
            {
                for (int i = 0; i < n; i++)
                {
                    if (a[i] == 'E' || a[i] == 'W')
                    {
                        ans[i] = 'H';
                    }
                }
                cout << ans << endl;
                return;
            }
        }

        int cw = 0, ce = 0, cn = 0, cs = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'W')
            {
                if (cw % 2 == 0)
                {
                    ans[i] = 'R';
                    cw++;
                }
                else
                {
                    ans[i] = 'H';
                    cw++;
                }
            }
            else if (a[i] == 'E')
            {
                if (ce % 2 == 0)
                {
                    ans[i] = 'R';
                    ce++;
                }
                else
                {
                    ans[i] = 'H';
                    ce++;
                }
            }
            else if (a[i] == 'N')
            {
                if (cn % 2 == 0)
                {
                    ans[i] = 'R';
                    cn++;
                }
                else
                {
                    ans[i] = 'H';
                    cn++;
                }
            }
            else
            {
                if (cs % 2 == 0)
                {
                    ans[i] = 'R';
                    cs++;
                }
                else
                {
                    ans[i] = 'H';
                    cs++;
                }
            }
        }

        cout << ans << endl;
        return;
    }

    int cw = 0, ce = 0, cn = 0, cs = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'W')
        {
            cw++;
        }
        else if (a[i] == 'E')
        {
            ce++;
        }
        else if (a[i] == 'N')
        {
            cn++;
        }
        else
        {
            cs++;
        }
    }

    int flag1 = 0, flag2 = 0;
    if (cs > cn)
    {
        flag1 = 1;
    }
    if (cw > ce)
    {
        flag2 = 1;
    }

    int lp = abs(cw - ce) / 2;
    int rp = abs(cs - cn) / 2;

    // cout << lp << ' ' << rp << endl;

    string ans = "";
    for (int i = 0; i < n; i++)
        ans += "R";

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'E' && !flag2)
        {
            if (lp > 0)
            {
                ans[i] = 'H';
                lp--;
            }
        }
        else if (a[i] == 'W' && flag2)
        {
            if (lp > 0)
            {
                ans[i] = 'H';
                lp--;
            }
        }
        else if (a[i] == 'N' && !flag1)
        {
            if (rp > 0)
            {
                ans[i] = 'H';
                rp--;
            }
        }
        else if (a[i] == 'S' && flag1)
        {
            if (rp > 0)
            {
                ans[i] = 'H';
                rp--;
            }
        }
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