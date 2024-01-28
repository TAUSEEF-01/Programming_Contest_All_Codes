//accepted
//https://codeforces.com/contest/1764/problem/C

//sln idea watched; code written by me  

/* sln explanation: 

in this problem there are 2 ways to draw edges between vertices -->
one is hill another is valley way -->
hill --> Va < Vb > Vc
valley --> Va > Vb < Vc
 
this is to be done because of the given condition that states that 
in this graph it is not possible that Va <= Vb <= Vc

therefore hill and valley are the two approaches to solve this problem

in this problem cycle is not allowed

so we have to sort all the values and then using hill and valley approach we can solve this

the end graph will be a bipartite graph

there is a corner case where all values of the vertices are equal then the ans will be simple --> n/2

otherwise ans will be the maximum possible value of the product of --> m vertices and remaining (n-m) vertices --> m*(n-m) 

*/



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
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vsort(a);
    if(vmax(a)==vmin(a))
    {
        cout<<n/2<<endl;
        return;
    }
    ll maxi=-INT_MAX;
    for(int i=0; i<n; i++)
    {
        ll ans=1;
        if(a[i]<a[i+1])
        {
            ans=(i+1LL)*(n-(i+1LL));
            maxi=max(maxi, ans);
        }
    }
    cout<<maxi<<endl;
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