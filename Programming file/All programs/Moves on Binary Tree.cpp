//accepted
//https://atcoder.jp/contests/abc243/tasks/abc243_d

//used bitset to operate on bits


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
    ll n , x;
    cin>>n>>x;
    string a;
    cin>>a;
    bitset<66> bits(x);
    string res="";
    res=bits.to_string();

    reverse(res.begin(), res.end());
    while(res.back()=='0')
    {
        res.pop_back();
    }
    reverse(res.begin(), res.end());
    
    for(int i=0; i<n; i++)
    {
        if(a[i]=='U')
        {
            res.pop_back();
        }
        else if(a[i]=='L')
        {
            res.push_back('0');
        }
        else
        {
            res.push_back('1');
        }
    }

    reverse(res.begin(), res.end());
    ll ans=0, cnt=0;
    for(int i=0; i<res.size(); i++)
    {
        if(res[i]=='1')
        {
            ans+= 1LL << cnt;
        }
        cnt++;
    }

    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}
