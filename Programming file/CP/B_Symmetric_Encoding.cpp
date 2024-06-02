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
    int n;
    cin >> n;

    string a;
    cin >> a;

    set<char> st;

    int arr[350] = {0};
    // int l = 0;//, r = n - 1;

    for (int i = 0; i < n; i++)
    {
        // arr[a[i]]++;
        st.insert(a[i]);
    }

    string s = "";
    for (auto &x : st)
        s += x;

    int r = s.size() - 1, l = 0;
    char move[300] = {0};

    while (l <= r)
    {
        move[s[l]] = s[r];
        move[s[r]] = s[l];
        l++;
        r--;
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = move[a[i]];
    }

    cout << a << endl;
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
