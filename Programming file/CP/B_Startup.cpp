#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer()
{
    int n, k;
    cin >> n >> k;

    vector<int> b(k), c(k), val;
    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        cin >> b[i] >> c[i];
        mp[b[i]] += c[i];
    }

    for (auto &x : mp)
    {
        val.push_back(x.second);
    }

    sort(val.rbegin(), val.rend());

    int sz = min({n, k, (int)val.size()}), tot = 0;
    for (int i = 0; i < sz; i++)
    {
        tot += val[i];
    }

    cout << tot << endl;
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
        answer();
    }

    return 0;
}
