#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

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
#define input(a)    \
  for (auto &x : a) \
    cin >> x;

#define output(a)     \
  for (auto &x : a)   \
    cout << x << ' '; \
  cout << endl;

/**/
#define yes cout << "YES\n"

#define no cout << "NO\n"

/**/
const ll mod = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

ll findGCD(ll x, ll y, ll res)
{

  ll ans = __gcd(x, res);
  ans = max(ans, __gcd(y, res));

  return ans;
}

ll maximumGCD(vl &A, ll N, ll K)
{
  ll dp[3];
  memset(dp, 0, sizeof(dp));

  dp[0] = A[0];
  dp[1] = A[0] + K;

  int flag = 0;

  for (int i = 1; i < N; i++)
  {

    ll x = dp[0];
    ll y = dp[1];

    dp[0] = findGCD(x, y, A[i]);
    dp[1] = findGCD(x, y, A[i] + K);

    // if(dp[1] > dp[0] && flag == 0)
    // {
    //     flag = 1;
    //     dp[0] = findGCD(x, y, A[i]);
    //     dp[1] = findGCD(x, y, A[i] + K);
    // }
    // else
    // {
    //    dp[1] = dp[0] = findGCD(x, y, A[i]);
    // }
  }

  ll mx = max({dp[0], dp[1]});
  return mx;
}

void solve()
{
  ll n, k;
  cin >> n >> k;

  ll ans = 0;
  vl a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  cout << maximumGCD(a, n, k) << endl;
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
