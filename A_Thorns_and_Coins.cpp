#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define reall(a) a.rbegin(), a.rend()
#define vsort(a) sort(all(a))
#define revsort(a) sort(reall(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    // a.push_back('.');
    // a.push_back('.');
    int ans =0, pos=n;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]== '*' && a[i+1]=='*')
        {
            pos=i;
            break;
        }
    }
    for(int i=0; i<pos; i++)
    {
        if(a[i]=='@') ans++;
    }
    cout << ans << endl;
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





        // if(a[i+1]=='@')
        // {
        //     ans++;
        // }
        // else if(a[i+1]=='*' && a[i+2]=='*')
        // {
        //     break;
        // }
        // else if(a[i+1]=='*' && (a[i+2]=='@' || a[i+2]=='.'))
        // {
        //     i++;
        //     ans++;
        // }


        // if(a[i]=='@')
        // {
        //     ans++;
        // }
        // else if(a[i]=='*' && a[i+1]=='*')
        // {
        //     break;
        // }
        // else if(a[i]=='*' && (a[i+1]=='@' || a[i+1]=='.'))
        // {
        //     i++;
        // }