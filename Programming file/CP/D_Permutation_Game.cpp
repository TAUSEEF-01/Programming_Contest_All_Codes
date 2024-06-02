#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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
#define takeinput(a)  \
    for (auto &x : a) \
        cin >> x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define rev_all(a) a.rbegin(), a.rend()
#define asort(a) sort(all(a))
#define revsort(a) sort(rev_all(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
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
    ll n, k, x, y;
    cin >> n >> k >> x >> y;

    vl a(n + 1), p(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // vl b, bb, s, ss;
    vl bb, ss;
    map<ll, ll> mp1, mp2;

    ll cx = x, cy = y;
    for (int i = 0; i < n; i++)
    {
        if (mp1[p[cx]] == 0)
        {
            // b.push_back(p[cx]);
            bb.push_back(a[cx]);
            mp1[p[cx]]++;
            cx = p[cx];
        }
        else
            break;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp2[p[cy]] == 0)
        {
            // s.push_back(p[cy]);
            ss.push_back(a[cy]);
            mp2[p[cy]]++;
            cy = p[cy];
        }
        else
            break;
    }

    int bl = bb.size();
    int sl = ss.size();

    ll maxb = vmax(bb), maxs = vmax(ss);
    ll sumb = 0, sums = 0;

    ll maxxb = 0, maxxs = 0;
    ll kk = k;
    for (int i = 0; i < bl; i++)
    {
        if (kk == 0)
            break;
        if (bb[i] == maxb) // || i == bl-1)
        {
            // sumb += maxb * kk;
            maxxb = max(sumb + bb[i] * kk, maxxb);
            break;
        }
        kk--;
        sumb += bb[i];
        maxxb = max(sumb + bb[i] * kk, maxxb);
    }

    kk = k;
    for (int i = 0; i < sl; i++)
    {
        if (kk == 0)
            break;
        if (ss[i] == maxs) // || i == sl-1)
        {
            // sumb += maxs * kk;
            maxxs = max(sums + ss[i] * kk, maxxs);
            break;
        }
        kk--;
        sums += ss[i];
        maxxs = max(sums + ss[i] * kk, maxxs);
    }

    if (maxxb > maxxs)
    {
        cout << "Bodya\n";
    }
    else if (maxxb < maxxs)
    {
        cout << "Sasha\n";
    }
    else
    {
        cout << "Draw\n";
    }
}

int main()
{
    fast;

    // setIO();

    int test = 1;
    cin >> test;

    while (test--)
        solve();

    return 0;
}
