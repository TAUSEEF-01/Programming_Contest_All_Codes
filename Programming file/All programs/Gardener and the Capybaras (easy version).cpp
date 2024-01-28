//accepted
//https://codeforces.com/contest/1775/problem/A1

//sln watched:

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
    string s; cin >> s;
    int n = s.size();
    if (s[1] == 'b') 
    {
      cout << s[0] << ' ' << s.substr(1, n - 2) << ' ' << s[n - 1] << '\n';
    }
    else 
    {
      cout << s[0] << ' ' << s[1] << ' ' << s.substr(2, n-2) << '\n';
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
