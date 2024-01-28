#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using i128 = __int128_t;

template <typename F>
using fn = function<F>;

#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()

template <class A>
int len(const A &a) {
  return a.size();
}

#define eb emplace_back
#define pb push_back
#define elif else if

template <typename T>
using vec = vector<T>;
template <typename T>
using vec2 = vec<vec<T>>;
template <typename T>
using vec3 = vec<vec2<T>>;
template <typename T>
using vec4 = vec<vec3<T>>;
template <typename T>
using vec5 = vec<vec4<T>>;

#define VEC(T, a, ...) \
  vec<T> a(__VA_ARGS__)

#define VEC2(T, a, n, ...) \
  vector a(n, vec<T>(__VA_ARGS__));

#define VEC3(T, a, n, m, ...) \
  vector a( \
    n, \
    vector(m, vec<T>(__VA_ARGS__)) \
  );

#define VEC4(T, a, n, m, l, ...) \
  vector a( \
    n, \
    vector( \
      m, \
      vector(l, vec<T>(__VA_ARGS__)) \
    ) \
  );

#define eval_4(a, b, c, d, e, ...) e

#define loop while (1)

#define rep(n) \
  for (int __ = 0; __ < n; __++)

#define range_1(i, n) \
  for (int i = 0; i < n; i++)
#define range_2(i, a, b) \
  for (ll i = a; i < b; i++)
#define range_3(i, a, b, c) \
  for (ll i = a; i < b; i += c)

#define range(...) \
  eval_4(__VA_ARGS__, range_3, range_2, range_1, rep)( \
    __VA_ARGS__ \
  )

#define ranger_1(i, n) \
  for (int i = n; i-- > 0;)
#define ranger_2(i, a, b) \
  for (ll i = b; i-- > a;)
#define ranger_3(i, a, b, c) \
  for (ll i = b - 1; i >= a; i -= c)

#define range_rev(...) \
  eval_4(__VA_ARGS__, ranger_3, ranger_2, ranger_1)( \
    __VA_ARGS__ \
  )

#define iter(x, a) \
  for (const auto &x : a)
#define iter_mut(x, a) \
  for (auto &&x : a)

template <typename T, typename U>
istream &
operator>>(istream &in, pair<T, U> &p) {
  return in >> p.first >> p.second;
}

template <typename T, typename U>
ostream &operator<<(
  ostream &out,
  pair<T, U> &p
) {
  out << p.first << ' ' << p.second;
  return out;
}

template <int k = 0, class T>
void read_tup(istream &in, T &x) {
  if constexpr (tuple_size<T>::value > k) {
    in >> get<k>(x);
    read_tup<k + 1>(in, x);
  }
}

template <class... T>
istream &operator>>(
  istream &in,
  tuple<T...> &x
) {
  read_tup(in, x);
  return in;
}

template <int k = 0, class T>
void out_tup(ostream &out, T &x) {
  if constexpr (tuple_size<T>::value > k) {
    if constexpr (k > 0) {
      out << ' ';
    }
    out << get<k>(x);
    out_tup<k + 1>(out, x);
  }
}

template <class... T>
ostream &operator<<(
  ostream &out,
  tuple<T...> &x
) {
  out_tup(out, x);
  return out;
}

template <typename T>
auto operator<<(ostream &out, vec<T> a)
  -> ostream & {
  range(i, len(a)) {
    if (i) {
      out << ' ';
    }
    out << a[i];
  }
  return out;
}

template <typename T>
auto operator<<(ostream &out, vec2<T> a)
  -> ostream & {
  iter_mut(x, a) out << x << '\n';
  return out;
}

template <typename T>
auto operator>>(istream &in, vec<T> &a)
  -> istream & {
  iter_mut(x, a) in >> x;
  return in;
}

template <typename... T>
void in(T &...a) {
  (cin >> ... >> a);
}

template <class T, class... U>
void out(T a, const U... b) {
  cout << a;
  ((cout << ' ' << b), ...);
  cout << '\n';
}

template <typename T = int>
vec<T> iota(int n, T v = 0) {
  vec<T> a(n);
  std::iota(all(a), v);
  return a;
}

template <class T>
using max_queue = priority_queue<T>;

template <class T>
using min_queue =
  priority_queue<T, vec<T>, greater<T>>;

template <typename T>
T pop(queue<T> &q) {
  T v = q.front();
  q.pop();
  return v;
}

template <typename T>
T pop(deque<T> &q) {
  T v = q.front();
  q.pop_front();
  return v;
}

template <typename T>
T pop(vec<T> &q) {
  T v = q.back();
  q.pop_back();
  return v;
}

template <typename T>
T pop(max_queue<T> &q) {
  T v = q.top();
  q.pop();
  return v;
}

template <typename T>
T pop(min_queue<T> &q) {
  T v = q.top();
  q.pop();
  return v;
}

template <typename T>
T max(const vec<T> &a) {
  return *max_element(all(a));
}

template <typename T>
T min(const vec<T> &a) {
  return *min_element(all(a));
}

int topbit(int x) {
  return 31 - __builtin_clz(x);
}

int popcnt(int x) {
  return __builtin_popcount(x);
}

template <class T>
int ctz(T n) {
  return __builtin_ctzll(n);
}

template <class T>
int bitlen(T n) {
  return 64 - __builtin_clzll(n);
}

template <class T>
bool operator==(
  const vec<T> &a,
  const vec<T> &b
) {
  int n = len(a);
  if (len(b) != n) {
    return false;
  }
  range(i, n) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}

template <class T, class U>
bool chmin(T &a, const U &b) {
  return b < a ? a = b, 1 : 0;
}

template <class T, class U>
bool chmax(T &a, const U &b) {
  return b > a ? a = b, 1 : 0;
}

template <class T, class U>
T sum(const vec<U> &a) {
  return accumulate(all(a), 0ll);
}

template <class T>
void unique(vec<T> &a) {
  sort(all(a));
  a.erase(std::unique(all(a)), a.end());
}

template <class T, class A>
int lb(const A &a, const T &x) {
  auto p = lower_bound(all(a), x);
  return distance(a.begin(), p);
}

template <class T, class A>
int ub(const A &a, const T &x) {
  auto p = upper_bound(all(a), x);
  return distance(a.begin(), p);
}

template <class A>
vec<int> argsort(const A &a) {
  int n = len(a);
  auto b = iota(n);
  sort(all(b), [&](int i, int j) {
    return a[i] < a[j];
  });
  return b;
}

template <typename T>
auto divmod(T a, T b) -> pair<T, T> {
  T q = a / b;
  return {q, a - q * b};
}

template <typename T>
int argmax(const vec<T> &a) {
  int n = len(a);
  assert(n);
  int j = 0;
  range(i, 1, n) {
    if (a[i] > a[j]) {
      j = i;
    }
  }
  return j;
}

int isqrt(ll n) {
  ll x = sqrt(n + 1);
  return x -= x * x > n;
}

int ceilsqrt(ll n) {
  ll x = sqrt(n);
  return x += x * x < n;
}

#ifdef DEBUG
#define dbg(...) out(__VA_ARGS__);
#else
#define dbg(...) ;
#endif

#ifdef DEBUG
#define dbg_assert(...) \
  assert(__VA_ARGS__);
#else
#define dbg_assert(...) ;
#endif

// define yes/no
#define yesno(y, n) \
  void yes(bool f = 1) { \
    out(f ? #y : #n); \
  } \
  void no() { \
    out(#n); \
  }

yesno(yes, no);

// yesno(Yes, No);
// yesno(YES, NO);

ll polygonal(ll k, ll i) {
  assert(k >= 2 && i >= 1);
  ll p = i * (i - 1) >> 1;
  p *= (k - 2);
  p += i;
  return p;
}

ll triangular(ll i) {
  assert(i >= 1);
  return i * (i + 1) >> 1;
}

vec<ll> triangulars(int n) {
  vec<ll> t(n);
  range(i, 1, n) {
    t[i] = t[i - 1] + i;
  }
  return t;
}

vec<pair<int, ll>>
triangular_theorem(ll n) {
  int m = ceilsqrt(n) * 2 + 1;
  auto t = triangulars(m);
  vec<pair<int, ll>> c;
  while (n) {
    while (t.back() > n) {
      pop(t);
    }
    n -= t.back();
    c.eb(len(t) - 1, t.back());
  }
  // dbg_assert(len(c) <= 3);
  return c;
}

template <class T>
T norm(T m, T x) {
  assert(m > 0);
  if (x < -m || x >= m) {
    x %= m;
  }
  if (x < 0) {
    x += m;
  }
  return x;
}

int minv(int m, int x) {
  assert(m > 0);
  x = norm(m, x);
  if (x == 1 || m == 1) {
    return x;
  }
  auto [q, r] = divmod(m, x);
  return m - (ll)minv(m, r) * q % m;
}

void solve() {
  int n;
  in(n);
  // 10^k で割るのを忘れずに
  // l, r入れ替えてもokなはず
  auto c = triangular_theorem(n);
  vec<int> a;
  range(i, len(c)) {
    int m = c[i].first;
    range(j, m + 1) {
      a.pb(i);
    }
  }
  assert(len(c) <= 7);
  int m = len(a);
  range_rev(i, 1, m) {
    a[i] -= a[i - 1];
    if (a[i] < 0) {
      a[i] += 7;
    }
    assert(0 <= a[i] && a[i] < 7);
  }
  a = {a.begin() + 1, a.end()};
  int iten = minv(7, 10);
  int p = 1;
  m -= 1;
  range(i, m) {
    a[i] *= p;
    a[i] %= 7;
    p *= iten;
    p %= 7;
  }
  string res = "";
  iter_mut(x, a) {
    if (x == 0) {
      x = 7;
    }
    res += '0' + x;
  }
  reverse(all(res));
  out(res);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // cout << setprecision(16);
  int t = 1;
  // in(t);
  while (t--) {
    solve();
  }
}
