//accepted
//https://codeforces.com/problemset/problem/271/B


#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<bool> isPrime(100005, true);
vector<int> prime;


void solve()
{
    ll n, m;
    cin >> n >> m;
    int a[n][m];
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            a[i][j] = x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int ctr = 0;
        for (int j = 0; j < m; j++)
        {
            int pos = lower_bound(prime.begin(), prime.end(), a[i][j]) - prime.begin();
            ctr += abs(prime[pos] - a[i][j]);
        }
        mini = min(mini, ctr);
    }
    for (int i = 0; i < m; i++)
    {
        int ctr = 0;
        for (int j = 0; j < n; j++)
        {
            int pos = lower_bound(prime.begin(), prime.end(), a[j][i]) - prime.begin();
            ctr += abs(prime[pos] - a[j][i]);
        }
        mini = min(mini, ctr);
    }
    cout << mini << endl;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= 100005; i++)
    {
        if (isPrime[i] == true)
        {
            prime.push_back(i);
            for (int j = i * 2; j <= 100005; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    solve();

    return 0;
}