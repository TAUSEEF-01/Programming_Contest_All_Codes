#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    for (auto& p : a)
    {
        cout << p << ' ';
    }

    return 0;
}