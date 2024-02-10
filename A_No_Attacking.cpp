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
    ll a, b, c;
    cin >> a >> b >> c;
    // if (a == 1 && b == 0 || c == 0)
    // {
    //     cout << "Yes\n";
    //     return;
    // }

    // if (b <= a && c <= max(min(a / 2LL, ((a - b)) * (a - b)), ((a * a - (a * b * 2 - b * b)) / 2)))
    if (b <= a && c <= min((a + 1) / 2, (a - b)) * (a - b))
    // if (b <= a && c <= ((((a * a) - ((a * b) + b * (a - b))) > (a * a / 2)) ? ((a * a) - ((a * b) + b * (a - b))) / 2 : ((a * a) - ((a * b) + b * (a - b)))))
    // if (b <= a && c <= (a - b) * min((a + 1) / 2, a - b))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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
