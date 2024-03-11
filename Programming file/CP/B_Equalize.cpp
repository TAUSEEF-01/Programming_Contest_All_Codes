// accepted
// https://codeforces.com/contest/1928/problem/B

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
    int n;
    cin >> n;

    vector<ll> a;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    for (auto &x : st)
        a.push_back(x);

    int sz = a.size();
    int ans = 1, l = 0, r = 1;
    while (r < sz)
    {
        if (((a[r] + 1) - (a[l] + n) <= 0) && (a[r] - a[l] > 0))
        {
            ans = max(ans, r - l + 1);
            r++;
        }
        else
        {
            l++;
            if (r <= l)
            {
                r = l + 1;
            }
        }
    }

    ans = max(ans, r - l);

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
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}