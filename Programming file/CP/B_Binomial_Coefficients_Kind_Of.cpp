#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

const int sz = 1e5 + 7;
vector<ll> val(sz);

void preCalc()
{
    val[0] = 1;
    for (ll i = 1; i < sz; i++)
    {
        val[i] = (2LL * val[i - 1]) % mod;
    }
}

void answer()
{
    int t;
    cin >> t;

    vector<ll> n(t), k(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> k[i];
        cout << val[min(n[i], k[i])] << endl;
    }

    // int N;
    // cin >> N;

    // vector<vector<ll>> C(N, vector<ll>(N, 0));

    // for (int n = 0; n < N; n++) { // loop over n from 0 to N-1 (inclusive)
    //     cout << n << ": " <<endl;
    //     C[n][0] = 1;
    //     C[n][n] = 1;
    //     for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
    //     {
    //         C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
    //         cout << C[n][k] << ' ';
    //     }
    //     cout << endl;
    // }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    preCalc();

    int t = 1;
    // cin>>t;

    for (int i = 0; i < t; i++)
    {
        answer();
    }

    return 0;
}
