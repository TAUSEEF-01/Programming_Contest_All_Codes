//accepted
//https://codeforces.com/contest/1844/problem/C

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
#define smax(a)          *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a)          *a.begin() //1st check this condition --> if (!a.empty())  
#define mem(a, x)        memset(a, x, sizeof(a))
#define grtsrt(v)        sort(v.begin(), v.end(), greater<int>())
#define vcount(v, a)     count(v.begin(), v.end(), a)
#define toint(a)         atoi(a.c_str())
#define total_sum(a)     accumulate(a.begin(), a.end(), 0) //total_sum initializing with 0; //this fnc gives the total sum of all numbers in the array
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;
//priority_queue<ll>a;
//string s = "dog:cat";  int pos = s.find(":");  string sub = s.substr(pos + 1);   // Copy substring after pos; -->  String is: cat
//string s1 = "Geeks";   string r = s1.substr(3, 2);   // Copy two characters of s1 (starting from position 3); -->  String is: ks


void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum_even=0, sum_odd=0, maxi=-INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        maxi=max(maxi, a[i]);
        if(i%2==0)
        sum_even=max(sum_even, sum_even+a[i]);
        else
        sum_odd=max(sum_odd, sum_odd+a[i]);
    }
    if(maxi<=0)
    {
        cout<<maxi<<endl;
        return;
    }
    cout<<max(sum_even, sum_odd)<<endl;
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

    int t=1;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0;
}
