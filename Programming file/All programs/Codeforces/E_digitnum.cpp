// accepted
// https://atcoder.jp/contests/abc238/tasks/abc238_c?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N = 998244353;
const double pi = acos(-1);

void solve()
{
    ll n;
    cin >> n;

    ll nc = n, d = 0;
    while (nc > 0)
    {
        nc /= 10;
        d++;
    }

    ll ans = 0;
    for (int i = 1; i < d; i++)
    {
        ll num1 = 1, num2 = 1, num, j = i, k = i - 1;

        while (j--)
        {
            num1 *= 10;
        }
        while (k--)
        {
            num2 *= 10;
        }
        num = num1 - num2;
        num %= N;
        // num = (((num * (num + 1)) % N) * 499122177) % N;

        num = ((num * (num+1)) / 2) %N;
        ans = (ans + num) % N;
    }

    ll num1 = 1;
    d--;
    while (d--)
    {
        num1 *= 10;
    }

    ll num = n - num1 + 1LL;
    num %= N;
    // num = (((num * (num + 1)) % N) * 499122177) % N;


    num = ((num * (num+1)) / 2) %N;
    ans = (ans + num) % N;

    cout << ans << endl;
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
    // cin>>t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
