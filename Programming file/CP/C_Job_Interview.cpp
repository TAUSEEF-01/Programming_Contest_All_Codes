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
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll p = n + m + 1, q = n + m;

    vl a(p), b(p);
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < p; i++)
    {
        cin >> b[i];
    }

    vl prog, test;
    ll pr = n + 1, prt = m;
    ll tr = m + 1, trp = n;

    for (int i = 0; i < p; i++)
    {
        if (a[i] > b[i])
        {
            if (pr > 0)
            {
                prog.push_back(a[i]);
                pr--;
            }
            else
            {
                prog.push_back(b[i]);
                prt--;
            }
        }
        else
        {
            if (prt > 0)
            {
                prog.push_back(b[i]);
                prt--;
            }
            else
            {
                prog.push_back(a[i]);
                pr--;
            }
        }
    }

    for (int i = 0; i < p; i++)
    {
        if (a[i] < b[i])
        {
            if (tr > 0)
            {
                test.push_back(b[i]);
                tr--;
            }
            else
            {
                test.push_back(a[i]);
                trp--;
            }
        }
        else
        {
            if (trp > 0)
            {
                test.push_back(a[i]);
                trp--;
            }
            else
            {
                test.push_back(b[i]);
                tr--;
            }
        }
    }

    // cout << prog.size() << ' ' << test.size() << endl;

    ll sump = 0, sumt = 0;
    // for(int i=q+1; i>=0; i--)
    for (int i = 0; i < p; i++)
    {
        // prog[i] += prog[i+1];
        sump += prog[i];
    }
    // for(int i=q+1; i>=0; i--)
    for (int i = 0; i < p; i++)
    {
        // test[i] += test[i+1];
        sumt += test[i];
    }

    ll cntP = 0, cntT = 0;
    for (int i = 0; i < p; i++)
    {
        if (a[i] > b[i])
        {
            if (cntP <= n)
            {
                cout << sump - a[i] << ' ';
                cntP++;
            }
            else
            {
                cout << sumt - b[i] << ' ';
                cntT++;
            }
        }
        else
        {
            if (cntT <= m)
            {
                cout << sumt - b[i] << ' ';
                cntT++;
            }
            else
            {
                cout << sump - a[i] << ' ';
                cntP++;
            }
        }
    }

    cout << endl;
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
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
