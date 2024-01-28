//accepted
//https://codeforces.com/contest/1850/problem/C


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
    char a;
    string x="";
    for(int i=0; i<64; i++)
    {
        cin>>a;
        if(a>='a' && a<='z')
        {
            x+=a;
        }
    }
    cout<<x<<endl;
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
