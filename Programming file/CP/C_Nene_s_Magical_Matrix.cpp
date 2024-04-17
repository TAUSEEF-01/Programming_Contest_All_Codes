// accepted
// https://codeforces.com/contest/1956/problem/C

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
    ll n;
    cin >> n;

    ll sum = 0, cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += i * cnt;
        cnt += 2;
    }

    cout << sum << ' ' << 2 * n << endl;

    int turns = 2 * n;
    ll nn = 2 * n, flip = 1;

    while (turns)
    {
        cout << flip << ' ' << (nn + 1) / 2 << ' ';
        for (int j = 1; j <= n; j++)
        {
            cout << j << ' ';
        }
        turns--;
        cout << endl;
        nn--;

        (flip == 1) ? flip = 2 : flip = 1;
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
