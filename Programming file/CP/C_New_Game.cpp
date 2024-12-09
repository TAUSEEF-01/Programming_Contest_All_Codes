#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = 1e18;

ll maxSum(vector<pair<ll, ll>> arr, ll n, ll k)
{
    deque<ll> q;

    ll m = -inf;
    ll su = 0, take = 0;

    for (int i = 0; i < n; i++)
    {
        take++;
        su += arr[i].second;

        if (i == 0)
        {
            q.push_back(arr[i].second);
            m = max(m, su);
        }
        else if (take <= k && arr[i].first - arr[i - 1].first == 1)
        {
            q.push_back(arr[i].second);
            m = max(m, su);
        }
        else if (take == k + 1 && arr[i].first - arr[i - 1].first == 1)
        {
            take--;
            q.push_back(arr[i].second);
            su -= q[0];
            q.pop_front();
            m = max(m, su);
        }
        else if (arr[i].first - arr[i - 1].first != 1)
        {
            m = max(m, arr[i].second);
            su = arr[i].second;
            take = 1;
            q.clear();
            q.push_back(arr[i].second);
        }
    }

    m = max(m, su);

    return m;
}

void answer()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    vector<pair<ll, ll>> vp;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (auto &x : mp)
    {
        vp.push_back({x.first, x.second});
    }

    sort(vp.begin(), vp.end());
    n = mp.size();

    cout << maxSum(vp, n, k) << endl;
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
