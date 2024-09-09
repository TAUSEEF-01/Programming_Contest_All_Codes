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
    int n;
    cin >> n;

    char ch;
    cin >> ch;

    int ok = 0;
    map<char, vector<string>> m;
    vector<int> size('Z', 0);

    for (int i = 0; i < 2 * n; i++)
    {
        string s;
        cin >> s;

        if (s[1] == ch)
            ok = 1;

        m[s[1]].push_back(s);
        size[s[1]]++;
    }

    asort(m['C']);
    asort(m['D']);
    asort(m['H']);
    asort(m['S']);

    if (ok)
    {
        vector<pair<string, string>> ans;
        if (ch != 'C' && (size['C'] % 2) && size[ch])
        {
            string s1 = m['C'][size['C'] - 1];
            string s2 = m[ch][size[ch] - 1];

            m['C'].pop_back();
            m[ch].pop_back();
            size['C']--;
            size[ch]--;

            ans.push_back({s1, s2});
        }
        if (ch != 'D' && (size['D'] % 2) && size[ch])
        {
            string s1 = m['D'][size['D'] - 1];
            string s2 = m[ch][size[ch] - 1];

            m['D'].pop_back();
            m[ch].pop_back();
            size['D']--;
            size[ch]--;

            ans.push_back({s1, s2});
        }
        if (ch != 'S' && (size['S'] % 2) && size[ch])
        {
            string s1 = m['S'][size['S'] - 1];
            string s2 = m[ch][size[ch] - 1];

            m['S'].pop_back();
            m[ch].pop_back();
            size['S']--;
            size[ch]--;

            ans.push_back({s1, s2});
        }
        if (ch != 'H' && (size['H'] % 2) && size[ch])
        {
            string s1 = m['H'][size['H'] - 1];
            string s2 = m[ch][size[ch] - 1];

            m['H'].pop_back();
            m[ch].pop_back();
            size['H']--;
            size[ch]--;

            ans.push_back({s1, s2});
        }

        for (auto &pr : m)
        {
            for (int i = 0; i + 1 < size[pr.first]; i += 2)
            {
                ans.push_back({pr.second[i], pr.second[i + 1]});
            }
        }

        if (ans.size() != n)
        {
            cout << "IMPOSSIBLE\n";
            return;
        }

        for (auto &pr : ans)
        {
            cout << pr.first << ' ' << pr.second << endl;
        }
    }
    else
    {
        if (size['C'] % 2 | size['S'] % 2 | size['D'] % 2 | size['H'] % 2)
        {
            cout << "IMPOSSIBLE\n";
            return;
        }

        for (auto &pr : m)
        {
            for (int i = 0; i + 1 < size[pr.first]; i += 2)
            {
                cout << pr.second[i] << ' ' << pr.second[i + 1] << endl;
            }
        }
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