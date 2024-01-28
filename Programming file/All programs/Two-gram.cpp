//accepted
//https://codeforces.com/contest/977/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev reverse(s.begin(), s.end())
#define ssort sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    map<string, int>x;
    for(int i=0; i<n-1; i++)
    {
        string p="";
        p+=a[i];
        p+=a[i+1];
        x[p]++;
    }
    string b;
    int maxi=-INT_MAX;
    for(map<string, int> :: iterator it=x.begin(); it!=x.end(); it++)
    {
        if((*it).second >= maxi)
        {
            maxi=(*it).second;
            b=(*it).first;
        }
        maxi=max(maxi, (*it).second);
    }
    cout<<b<<endl;
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