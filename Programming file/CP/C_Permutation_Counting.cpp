// accepted
// https://codeforces.com/contest/1972/problem/C

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
    ll n, k;
    cin >> n >> k;

    vl a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vsort(a);
    vl pref(n + 1, 0);

    for (ll i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + ((a[i] - a[i - 1]) * i);
    }

    ll pos = 0;
    for (ll i = 0; i < n; i++)
    {
        if (pref[i] <= k)
        {
            pos = i;
        }
        else
        {
            // a[i-1] += k;
            // if(i==1)
            // {
            //     a[i-1] += k;
            //     k=0;
            // }
            break;
        }
    }

    k -= pref[pos];
    ll can = a[pos] + k / (pos + 1);

    ll ans = can * n - (n - 1);
    k %= (pos + 1);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > can)
            ans++;
    }

    cout << ans + k << endl;
    // cout << ans << endl;
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

// vl pref(n, 0);
// pref[0] = 0;
// for(int i=0; i<n-1; i++)
// {
//     // pref[i] = pref[i-1] + (a[i] - a[i-1]);
//     if(i!=0)
//     pref[i] = pref[i-1] + (a[i+1] - a[i]);
//     else
//     pref[i] = (a[i+1] - a[i]);
// }

// int pos = 0;
// for(int i =0; i< n; i++)
// {
//     if(pref[i] <=k)
//     {
//         pos = i;
//     }
//     else
//     {
//         break;
//     }
// }

// // if(pos == -1)
// // {

// // }
// // else
// // {

// // }

// ll ans = (a[pos] + ( k - pref[pos]) % n)* n - (n-1);
// cout << ans << endl;

// ll avg = sum/n;
// for(int i=0; i<n; i++)
// {
//     // if(a[i]>avg)
//     // {
//     //     sum -= (a[i] - avg -1);
//     // }

//     if(a[i] > avg)
//     {
//         a[i] = avg;
//     }
// }

// ll cnt = 0;
// for(int i=0; i<n; i++)
// {
//     if(a[i] < avg && (avg - a[i]) >= k)
//     {
//         // a[i] = avg;
//         k-= (avg - a[i]);
//         cnt++;
//     }
// }

// ll ans = (sum / n) * cnt * 1LL - (n-1);
// cout << ans << endl;