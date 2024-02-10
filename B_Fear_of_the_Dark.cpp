// accepted
// https://codeforces.com/contest/1886/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    double px, py, ax, ay, bx, by;
    cin >> px >> py >> ax >> ay >> bx >> by;

    auto dis = [&](double x1, double y1, double x2, double y2)
    {
        return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    };

    double a0, b0, ap, bp, ab;
    a0 = dis(ax, ay, 0, 0);
    b0 = dis(bx, by, 0, 0);
    ab = dis(ax, ay, bx, by);
    ap = dis(ax, ay, px, py);
    bp = dis(bx, by, px, py);

    double ans = 1e9 + 7;
    ans = min(ans, max(a0, ap));
    ans = min(ans, max(b0, bp));
    ans = min(ans, max({ab / 2, ap, b0}));
    ans = min(ans, max({ab / 2, bp, a0}));

    cout << setprecision(11) << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
