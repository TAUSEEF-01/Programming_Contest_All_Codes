//accepted
//https://codeforces.com/contest/1850/problem/F

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev(s) reverse(s.begin(), s.end())
#define ssort(s) sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
#define LCM(a, b)  (a*b)/(__gcd(a, b))
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    int n; cin>>n;
    set<ll> a;
    unordered_map<ll, ll> p;
    for(int i=0; i<n; i++) 
    {
        ll x;
        cin>>x;
        if(x<=n) 
        {
            a.insert(x);
            p[x]++;
        }
    }
    if(a.size()==0) 
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        unordered_map<ll, ll> res;
        ll maxi=0;
        for(auto &it: a)
        {
            for(int j=it; j<=n; j+=it)
            {
                res[j]+=p[it];
                maxi=max(maxi, res[j]);
            }
        }
        cout<<maxi<<endl;
    }
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

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}