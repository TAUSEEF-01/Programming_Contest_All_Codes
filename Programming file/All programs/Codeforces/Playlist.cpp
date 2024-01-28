// accepted
// https://cses.fi/problemset/task/1141/

#include<bits/stdc++.h>
#include<deque>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


ll longest_unique_subSequence(ll n, vector<ll> &a) 
{
    if (n == 1)
    {
        return 1;
    }
 
    int maxLength = 0;
    map<ll, ll> mp;
    int left = 0, right = 0;

    while (right < n) 
    {
        if (mp[a[right]] == 1) 
        {
            while (mp[a[right]] == 1) 
            {
                mp[a[left]] = 0;
                left++;
            }
        }
 
        mp[a[right]] = 1;

        maxLength = max(maxLength, (right - left + 1));
        right++;
    }

    return maxLength;
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &p: a) cin>>p;

    cout<<longest_unique_subSequence(n, a)<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
