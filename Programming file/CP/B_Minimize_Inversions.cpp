// motivation pour aller de l'avant:
// Essayez plus fort
// ça va bien
// ne jamais abandonner

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
#define pb push_back
#define all(a) a.begin(), a.end()
#define vsort(a) sort(all(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define vite                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define debug(x) cerr << __LINE__ << ": " #x " = " << (x) << endl
const ll N = 1e9 + 7;

template <typename T>
void readmain(T &x)
{
    bool neg = false;
    unsigned int c = getchar();
    for (; (c ^ 48) > 9; c = getchar())
        if (c == '-')
            neg = true;
    for (x = 0; (c ^ 48) < 10; c = getchar())
        x = (x << 3) + (x << 1) + (c ^ 48);
    if (neg)
        x = -x;
}
template <typename T>
T &read(T &x)
{
    readmain(x);
    return x;
}
template <typename T, typename... Tr>
void read(T &x, Tr &...r)
{
    readmain(x);
    read(r...);
}
constexpr int Nx = 100005;

// être cohérent
void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    vector<pair<int, int>> PAIR(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        PAIR[i].first = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        PAIR[i].second = b[i];
    }

    vsort(PAIR);

    for (int i = 0; i < n; i++)
    {
        cout << PAIR[i].first << ' ';
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << PAIR[i].second << ' ';
    }
    cout << endl;
}

int main()
{
    vite;

    int cas_de_test;
    cin >> cas_de_test;

    while (cas_de_test--)
    {
        solve();
    }

    return 0;
}
