// accepted
// https://codeforces.com/gym/104447/problem/G

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N = 1e9 + 7;
const double pi = acos(-1);

void solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);
    ll ctr = 0, res = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if ((a[i] & x) == x)
        {
            ctr++;
            res &= a[i];
        }
    }

    if (res != x)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ctr << endl;
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
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
