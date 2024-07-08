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

int merge(int a[], int low, int mid, int high)
{
    int cnt = 0;

    int sz1 = mid - low + 1, sz2 = high - mid;
    int L[sz1], R[sz2];

    int l = 0, r = 0, pos = low;

    for (int i = low, j = 0; i <= mid; i++, j++)
    {
        L[j] = a[i];
    }
    for (int i = mid + 1, j = 0; i <= high; i++, j++)
    {
        R[j] = a[i];
    }

    while (l < sz1 && r < sz2)
    {
        if (L[l] < R[r])
        {
            cnt += r - mid;
            a[pos] = L[l];
            l++;
        }
        else
        {
            a[pos] = R[r];
            r++;
        }
        pos++;
    }

    while (l < sz1)
    {
        cnt += r - mid;
        a[pos] = L[l];
        l++;
        pos++;
    }

    while (r < sz2)
    {
        a[pos] = R[r];
        r++;
        pos++;
    }

    return cnt;
}

int mergeSort(int a[], int low, int high)
{
    if (low >= high)
        return 0;

    int mid = (low + high) / 2;

    int x = mergeSort(a, low, mid);
    int y = mergeSort(a, mid + 1, high);

    int z = merge(a, low, mid, high);

    return x + y + z;
}

int parity(int arr[], int n)
{
    return mergeSort(arr, 0, n - 1); 
}

void solve()
{
    int n;
    cin >> n;

    int arr1[n], arr2[n], temp1[n], temp2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        temp1[i] = arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        temp2[i] = arr2[i];
    }

    sort(temp1, temp1 + n);
    sort(temp2, temp2 + n);

    bool notSame = false;
    for (int i = 0; i < n; i++)
    {
        if (temp1[i] != temp2[i])
        {
            notSame = true;
            break;
        }
    }

    if (notSame)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        int m1 = parity(arr1, n);
        int m2 = parity(arr2, n);

        if (abs(m1 - m2) % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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
