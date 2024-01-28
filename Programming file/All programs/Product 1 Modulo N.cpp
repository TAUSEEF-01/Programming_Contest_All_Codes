//accepted
//https://codeforces.com/contest/1514/problem/C

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
#define smax(a) *(a.rbegin()) 
#define smin(a) *a.begin()  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    set<int> a;
    ll ans=1;
    for(int i=1; i<n; i++)
    {
        if(__gcd(i, n)==1)
        {
            ans=(ans*i)%n;
            a.insert(i);
        }
    }
    if(ans%n==1)
    {
        cout<<a.size()<<endl;
        for(auto &x: a) cout<<x<<' ';
        cout<<endl;
    }
    else
    {
        cout<<a.size()-1<<endl;
        int escape=ans%n;
        for(auto &x: a) 
        {
            if(escape==x) continue;
            cout<<x<<' ';
        }
        cout<<endl;
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

    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}