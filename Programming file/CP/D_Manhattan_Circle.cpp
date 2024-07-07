// accepted
// https://codeforces.com/contest/1985/problem/D

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
    int n, m;
    cin >> n >> m;

    vector<string> a(n);
    int cnt[n] = {0};

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int c = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '#')
            {
                c++;
            }
        }
        cnt[i] = c;
        maxi = max(maxi, cnt[i]);
    }

    if (maxi == 0)
    {
        cout << 1 << ' ' << 1 << endl;
        return;
    }
    else if (maxi == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '#')
                {
                    cout << i + 1 << ' ' << j + 1 << endl;
                    return;
                }
            }
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (cnt[i] > cnt[i + 1] && cnt[i] > cnt[i - 1])
        {
            int c = cnt[i] / 2 + cnt[i] % 2, cp = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '#')
                    cp++;

                if (cp == c)
                {
                    cout << i + 1 << ' ' << j + 1 << endl;
                    return;
                }
            }
        }
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
