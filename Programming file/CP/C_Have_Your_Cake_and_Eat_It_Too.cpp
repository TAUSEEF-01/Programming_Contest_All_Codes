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
/**/
#define yes          \
    cout << "YES\n"; \
    return;
#define no          \
    cout << "NO\n"; \
    return;
/**/
const ll mod = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

void solve()
{
    int n;
    cin >> n;

    vl a(n), b(n), c(n);
    ll tot = 0;

    loop(i, 0, n)
    {
        cin >> a[i];
        tot += a[i];
    }

    tot = (tot + 2) / 3;

    loop(i, 0, n)
            cin >>
        b[i];

    loop(i, 0, n)
            cin >>
        c[i];

    ll s1 = 0, s2 = 0, s3 = 0, f1 = 1, f2 = 1, f3 = 1, p = 1;
    map<int, pair<int, int>> mp;

    vi pos;
    for (int i = 0; i < n; i++)
    {
        if (s1 < tot)
        {
            s1 += a[i];
        }
        else if (s2 < tot)
        {
            if (f2)
            {
                mp[1] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f2 = 0;
            }
            s2 += b[i];
        }
        else
        {
            if (f3)
            {
                mp[2] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f3 = 0;
            }
            s3 += c[i];
        }
    }
    if (s3 >= tot)
    {
        mp[3] = {p, n};

        for (auto &x : mp)
        {
            cout << x.second.first << ' ' << x.second.second << ' ';
        }
        cout << endl;
        return;
    }

    /* 2nd */
    s1 = 0, s2 = 0, s3 = 0, f1 = 1, f2 = 1, f3 = 1, p = 1;
    mp.clear();

    for (int i = 0; i < n; i++)
    {
        if (s1 < tot)
        {
            s1 += b[i];
        }
        else if (s2 < tot)
        {
            if (f2)
            {
                mp[2] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f2 = 0;
            }
            s2 += a[i];
        }
        else
        {
            if (f3)
            {
                mp[1] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f3 = 0;
            }
            s3 += c[i];
        }
    }
    if (s3 >= tot)
    {
        mp[3] = {p, n};

        for (auto &x : mp)
        {
            cout << x.second.first << ' ' << x.second.second << ' ';
        }
        cout << endl;
        return;
    }

    /* 3rd */
    s1 = 0, s2 = 0, s3 = 0, f1 = 1, f2 = 1, f3 = 1, p = 1;
    mp.clear();

    for (int i = 0; i < n; i++)
    {
        if (s1 < tot)
        {
            s1 += b[i];
        }
        else if (s2 < tot)
        {
            if (f2)
            {
                mp[2] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f2 = 0;
            }
            s2 += c[i];
        }
        else
        {
            if (f3)
            {
                mp[3] = {p, i};
                p = i + 1;
                pos.push_back(i + 1);
                f3 = 0;
            }
            s3 += a[i];
        }
    }
    if (s3 >= tot)
    {
        mp[1] = {p, n};

        for (auto &x : mp)
        {
            cout << x.second.first << ' ' << x.second.second << ' ';
        }
        cout << endl;
        return;
    }

    /* 4th */
    s1 = 0, s2 = 0, s3 = 0, f1 = 1, f2 = 1, f3 = 1, p = 1;
    mp.clear();

    for (int i = 0; i < n; i++)
    {
        if (s1 < tot)
        {
            s1 += c[i];
        }
        else if (s2 < tot)
        {
            if (f2)
            {
                mp[3] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f2 = 0;
            }
            s2 += b[i];
        }
        else
        {
            if (f3)
            {
                mp[2] = {p, i};
                p = i + 1;
                pos.push_back(i + 1);
                f3 = 0;
            }
            s3 += a[i];
        }
    }
    if (s3 >= tot)
    {
        mp[1] = {p, n};

        for (auto &x : mp)
        {
            cout << x.second.first << ' ' << x.second.second << ' ';
        }
        cout << endl;
        return;
    }

    /* 5th */
    s1 = 0, s2 = 0, s3 = 0, f1 = 1, f2 = 1, f3 = 1, p = 1;
    mp.clear();

    for (int i = 0; i < n; i++)
    {
        if (s1 < tot)
        {
            s1 += c[i];
        }
        else if (s2 < tot)
        {
            if (f2)
            {
                mp[3] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f2 = 0;
            }
            s2 += a[i];
        }
        else
        {
            if (f3)
            {
                mp[1] = {p, i};
                p = i + 1;
                pos.push_back(i + 1);
                f3 = 0;
            }
            s3 += b[i];
        }
    }
    if (s3 >= tot)
    {
        mp[2] = {p, n};

        for (auto &x : mp)
        {
            cout << x.second.first << ' ' << x.second.second << ' ';
        }
        cout << endl;
        return;
    }

    /* 6th */
    s1 = 0, s2 = 0, s3 = 0, f1 = 1, f2 = 1, f3 = 1, p = 1;
    mp.clear();

    for (int i = 0; i < n; i++)
    {
        if (s1 < tot)
        {
            s1 += a[i];
        }
        else if (s2 < tot)
        {
            if (f2)
            {
                mp[1] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f2 = 0;
            }
            s2 += c[i];
        }
        else
        {
            if (f3)
            {
                mp[3] = {p, i};
                p = i + 1;
                // pos.push_back(i+1);
                f3 = 0;
            }
            s3 += b[i];
        }
    }
    if (s3 >= tot)
    {
        mp[2] = {p, n};

        for (auto &x : mp)
        {
            cout << x.second.first << ' ' << x.second.second << ' ';
        }
        cout << endl;
        return;
    }

    cout << -1 << endl;
}

/*
bca
cba
acb
cab
*/

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
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
