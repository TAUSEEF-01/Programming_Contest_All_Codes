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

class NumArray
{
public:
    int size;
    vector<int> sums;

    void basic(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        sums.assign(2 * size, 0);
    }

    void updateNumArray(vector<int> &nums, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)nums.size())
            {
                sums[x] = nums[lx];
            }
            return;
        }

        int mid = (lx + rx) / 2;
        updateNumArray(nums, 2 * x + 1, lx, mid);
        updateNumArray(nums, 2 * x + 2, mid, rx);

        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    NumArray(vector<int> &nums)
    {
        basic(nums.size());
        updateNumArray(nums, 0, 0, size);
    }

    void updateVal(int index, int val, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            sums[x] = val;
            return;
        }

        int mid = (lx + rx) / 2;
        if (index < mid)
            updateVal(index, val, 2 * x + 1, lx, mid);
        else
            updateVal(index, val, 2 * x + 2, mid, rx);

        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void update(int index, int val)
    {
        updateVal(index, val, 0, 0, size);
    }

    int sum(int x, int l, int r, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return 0;

        if (lx >= l && rx <= r)
            return sums[x];

        int mid = (lx + rx) / 2;
        int s1 = sum(2 * x + 1, l, r, lx, mid);
        int s2 = sum(2 * x + 2, l, r, mid, rx);

        return s1 + s2;
    }

    int sumRange(int left, int right)
    {
        right++;
        return sum(0, left, right, 0, size);
    }
};

void solve()
{
    int n, q;
    cin >> n >> q;

    vi a(n);
    take_input(a);

    NumArray s(a);

    while (q--)
    {
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            int pos, val;
            cin >> pos >> val;
            s.update(pos, val);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            cout << s.sumRange(l, r) << endl;
        }
    }
}

int main()
{
    fast;
    // setIO();

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
