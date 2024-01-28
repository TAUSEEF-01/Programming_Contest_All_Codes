//accepted
//https://codeforces.com/contest/1520/problem/B

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
    ll n;
    cin>>n;
    if(n<=9)
    {
        cout<<n<<endl;
        return;
    }
    string s=to_string(n), ss="";
    int sz=s.size();
    for(int i=0; i<sz; i++) ss+=s[0];

    ll num=stoi(ss), startingDigit=s[0]-'0';
    int pp=floor(log10(n));
    if(num==n) 
    {
        cout<<startingDigit+(pp-1)*9+9<<endl;
    }
    else if(num>n) 
    {
        cout<<startingDigit+(pp-1)*9+8<<endl;
    }
    else 
    {
        cout<<startingDigit+(pp-1)*9+9<<endl;
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

