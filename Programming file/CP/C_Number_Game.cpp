// accepted
// https://codeforces.com/contest/1370/problem/C

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
using ll = long long;

void setIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Class
{
public:
    void solve()
    {
        cin >> this->n;
        if (this->n == 1)
        {
            cout << "FastestFinger\n";
        }
        else if ((this->n % 2 & 1) || this->n == 2)
        {
            cout << "Ashishgup\n";
        }
        else
        {
            ll p = 1;
            while (this->n % 2 == 0)
            {
                this->n /= 2;
                p *= 2;
            }
            if (n == 1)
            {
                cout << "FastestFinger\n";
            }
            else if (p >= 4)
            {
                cout << "Ashishgup\n";
            }
            else
            {
                bool ok = false;
                for (int i = 3; i * i <= n; i += 2)
                {
                    if (n % i == 0)
                    {
                        ok = true;
                        break;
                    }
                }
                if (ok)
                {
                    cout << "Ashishgup\n";
                }
                else
                {
                    cout << "FastestFinger\n";
                }
            }
        }
    }

private:
    ll n;
};

int main()
{
    int test = 1;
    cin >> test;

    Class solve;

    for (int i = 1; i <= test; i++)
    {
        solve.solve();
    }

    return 0;
}
