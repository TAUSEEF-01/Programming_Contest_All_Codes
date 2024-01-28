//accepted
//https://codeforces.com/contest/1846/problem/E1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a)         sort(a.begin(), a.end())
#define vmin(a)          *min_element(a.begin(), a.end())
#define vmax(a)          *max_element(a.begin(), a.end())
#define ub_pos(a, x)     upper_bound(a.begin(), a.end(), x) - a.begin()
#define lb_pos(a, x)     lower_bound(a.begin(), a.end(), x) - a.begin()
#define lower_case(a)    transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a)    transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev(a)          reverse(a.begin(), a.end())
#define ssort(a)         sort(a.begin(), a.end())
#define smax(a)          *(a.rbegin())   
#define smin(a)          *a.begin() 
#define mem(a, x)        memset(a, x, sizeof(a))
#define grtsrt(v)        sort(v.begin(), v.end(), greater<int>())
#define vcount(v, a)     count(v.begin(), v.end(), a)
#define toint(a)         atoi(a.c_str())
#define total_sum(a)     accumulate(a.begin(), a.end(), 0) 
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


vector<ll> store;
unordered_map<ll, ll> mark;


void precalc(ll n)
{
    for(int i=2; i<n; i++)
    {
        ll ans=1, multiple=1;
        if((i*i + i + 1) >= n)
        {
            break;
        }
        for(int j=1; j<n; j++)
        {
            multiple*=i;
            ans+=multiple;
            if(ans>=n)
            {
                break;
            }
            else if(j>=2 && mark[ans]==0)
            {
                store.push_back(ans);
                mark[ans]++;
            }
        }
    }
}


void solve()
{
    ll n;
    cin>>n;
    if(n<7)
    {
        cout<<"NO\n";
        return;
    }
    // ll pos=lower_bound(store.begin(), store.end(), n) - store.begin();
    bool trth=binary_search(store.begin(), store.end(), n);

    // if(store[pos]==n)
    if(trth)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    precalc(1000010);
    vsort(store);

    int t=1;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0;
}