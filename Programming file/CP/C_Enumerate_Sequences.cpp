// accepted

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define reall(a) a.rbegin(), a.rend()
#define vsort(a) sort(all(a))
#define revsort(a) sort(reall(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define loop(i, k, n) for (ll i = k; i < n; i++)
#define Loop(i, k, n) for (ll i = k; i <= n; i++)
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vs = vector<string>;
using vb = vector<bool>;
using pii = pair<int, int>;

/**/
#define input(a)      \
    for (auto &x : a) \
        cin >> x;

#define output(a)         \
    for (auto &x : a)     \
        cout << x << ' '; \
    cout << endl;

/**/
#define yes \
    cout << "YES\n"

#define no \
    cout << "NO\n"

/**/
const ll mod = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

void printV(vi &v)
{
    for (auto &x : v)
        cout << x << ' ';
    cout << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vi a(9, -1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i1 = 1; i1 <= a[1]; i1++)
    {

        int total = i1;
        int c1 = 1;
        if (c1 > n)
        {
            break;
        }
        if (c1 == n && total % k == 0)
        {
            vi temp = {i1};
            printV(temp);
        }
        for (int i2 = 1; i2 <= a[2]; i2++)
        {
            int c2 = 2;
            if (c2 > n)
            {
                break;
            }
            total += i2;
            if (c2 == n && total % k == 0)
            {
                vi temp = {i1, i2};
                printV(temp);
            }
            for (int i3 = 1; i3 <= a[3]; i3++)
            {
                int c3 = 3;
                if (c3 > n)
                {
                    break;
                }
                total += i3;
                if (c3 == n && total % k == 0)
                {
                    vi temp = {i1, i2, i3};
                    printV(temp);
                }
                for (int i4 = 1; i4 <= a[4]; i4++)
                {
                    int c4 = 4;
                    if (c4 > n)
                    {
                        break;
                    }
                    total += i4;
                    if (c4 == n && total % k == 0)
                    {
                        vi temp = {i1, i2, i3, i4};
                        printV(temp);
                    }
                    for (int i5 = 1; i5 <= a[5]; i5++)
                    {
                        int c5 = 5;
                        if (c5 > n)
                        {
                            break;
                        }
                        total += i5;
                        if (c5 == n && total % k == 0)
                        {
                            vi temp = {i1, i2, i3, i4, i5};
                            printV(temp);
                        }
                        for (int i6 = 1; i6 <= a[6]; i6++)
                        {
                            int c6 = 6;
                            if (c6 > n)
                            {
                                break;
                            }
                            total += i6;
                            if (c6 == n && total % k == 0)
                            {
                                vi temp = {i1, i2, i3, i4, i5, i6};
                                printV(temp);
                            }
                            for (int i7 = 1; i7 <= a[7]; i7++)
                            {
                                int c7 = 7;
                                if (c7 > n)
                                {
                                    break;
                                }
                                total += i7;
                                if (c7 == n && total % k == 0)
                                {
                                    vi temp = {i1, i2, i3, i4, i5, i6, i7};
                                    printV(temp);
                                }
                                for (int i8 = 1; i8 <= a[8]; i8++)
                                {
                                    int c8 = 8;
                                    if (c8 > n)
                                    {
                                        break;
                                    }
                                    total += i8;
                                    if (c8 == n && total % k == 0)
                                    {
                                        vi temp = {i1, i2, i3, i4, i5, i6, i7, i8};
                                        printV(temp);
                                    }
                                    total -= i8;
                                }
                                total -= i7;
                            }
                            total -= i6;
                        }
                        total -= i5;
                    }
                    total -= i4;
                }
                total -= i3;
            }
            total -= i2;
        }
        total -= i1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int t = 1;
    // cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}