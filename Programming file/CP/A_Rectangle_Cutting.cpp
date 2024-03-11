// accepted
// https://codeforces.com/contest/1928/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N = 1e9 + 7;
const double pi = acos(-1);

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll aa = a, bb = b;

    if(a%2==0 && b%2==0)
    {
        cout<<"Yes\n";
    }
    else if(a%2 && b%2)
    {
        cout<<"No\n";
    }
    else
    {
        if(a%2==0)
        {
            while(a%2==0)
            {
                a/=2;
                b*=2;

                if(a!=bb && b!=aa)
                {
                    cout<<"Yes\n";
                    return;
                }
            }
        }
        else if(b%2==0)
        {
            while(b%2==0)
            {
                b/=2;
                a*=2;

                if(a!=bb && b!=aa)
                {
                    cout<<"Yes\n";
                    return;
                }
            }
        }

        cout<<"No\n";
    }
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

