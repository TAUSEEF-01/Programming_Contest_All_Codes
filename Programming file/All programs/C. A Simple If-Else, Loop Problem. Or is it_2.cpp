#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;

void solve()
{
    int n, A, B;
    cin >> n >> A >> B;

    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vsort(a);

    ll res = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] > B) continue;

        int r=upper_bound(a.begin(), a.end(), B-a[i]) - a.begin() - 1;
        int l=lower_bound(a.begin(), a.end(), A-a[i]) - a.begin();

        if(A <= 2 * a[i] && 2 * a[i] <= B) l++;
        if(l <= r) res += (r - l + 1);
    }
    cout << res / 2 << '\n';
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
