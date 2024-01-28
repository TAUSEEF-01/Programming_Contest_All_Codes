//accepted
//https://codeforces.com/contest/1862/problem/D

//in this problem __int128(1) is used. this compiler doesn't support it but 
//cf's compiler supports it.

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}



void solve()
{
    ll n;
    cin>>n; 
    if(n==1)
    {
        cout<<2<<endl;
        return;
    }

    ll lo=0, hi=n, answer=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        
        if(__int128(1)*mid*mid-mid-2*n<=0 && __int128(1)*(mid+1)*(mid+1)-(mid+1)-2*n>0)
        {
            answer=mid;
            break;
        }
        if(__int128(1)*mid*mid-mid-2*n<=0)
        {
            
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }

    cout<<answer+(n-(answer*(answer-1)/2))<<endl;
}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) 
    solve();

    return 0;
}

