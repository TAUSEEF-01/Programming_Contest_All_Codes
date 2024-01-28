//accepted
//https://www.codechef.com/problems/CHEFARRP

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    int ctr = 0;
    ll ans = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans = 1;
        sum = 0;
        for (int j = i; j < n; j++)
        {
            ans *= a[j];
            sum += a[j];
            if (sum == ans)
                ctr++;
        }
    }
    cout << ctr << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}






























    //binary_search(all(vec),key)
 
    /*1.) __builtin_popcount(x): Counts the number of one’s (set bits) in an integer(long/long long).
 
    Ex- int x=5;
        cout<<__builtin_popcount(x)<<endl;   //returns 2.
    If x is of long type,we can use __builtin_popcountl(x) If x is of long long type,we can use __builtin_popcountll(x)
 
    2.) __builtin_parity(x): Checks the Parity of a number.Returns true(1) if the number has odd parity(odd number of set bits) else it returns false(0) for even parity(even number of set bits).
 
    Ex- int x=5;
        cout<<__builtin_parity(x)<<endl;   //returns 0.
    If x is of long type,we can use __builtin_parityl(x) If x is of long long type,we can use __builtin_parityll(x)
 
    3.) __builtin_clz(x): Counts the leading number of zeros of the integer(long/long long).
 
    If x is of long type,we can use __builtin_clzl(x) If x is of long long type,we can use __builtin_clzll(x)
 
    Ex- int x=16;       // 00000000 00000000 00000000 00010000 (32 bits)
        cout<<__builtin_clz(x)<<endl;   //returns 27.
 
    Ex- long x=16;       // 00000000 00000000 00000000 00010000 (32 bits)
        cout<<__builtin_clzl(x)<<endl;   //returns 27.
 
    Ex- long long x=16;       // 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00010000 (64 bits)
        cout<<__builtin_clzll(x)<<endl;   //returns 59.
    4.) __builtin_ctz(x): Counts the trailing number of zeros of the integer(long/long long).
 
    If x is of long type,we can use __builtin_ctzl(x) If x is of long long type,we can use __builtin_ctzll(x)
 
    Ex- int x=16;       // 00000000 00000000 00000000 00010000 (32 bits)
        cout<<__builtin_ctz(x)<<endl;   //returns 4.
    In case of both __builtin_ctzl(x) and __builtin_ctzll(x),the answer is same.
    /*
 
    /*
    int nCr(int n, int k) {
        double res = 1;
        for (int i = 1; i <= k; ++i)
            res = res * (n - k + i) / i;
        return (int)(res + 0.01);
    }
    */
    /*
    ll gcd(ll a, ll b){
        if(b==0)return a;
        return gcd(b,a%b);
    }
    */
    /*
    ll ExtendedGcd(ll a, ll b, int&x, int &y){
        if(b==0){
            x=1;
            y=0;
            return a;
        }
        int x1,y1;
        int d = ExtendedGcd(b,a%b,x1,y1);
        x = y1;
        y =  x1-(a/b)*y1;
        return d;
    }
    */
   /* 
    bool rcmp(const pair<int,int> &a, const pair<int,int>  &b){
        if(a.first!= b.first)return (a.first < b.first);
        else{
            return (a.second > b.second);
        }
    }
    */
    
    /*
    ll binpow(long long a, long long b, long long m) {
        a %= m;
        ll res = 1;
        while (b > 0) {
        if(b&1 == 1)
            res =  res * a %m;
            a = a * a %m;
            b>>=1;
        }
        return res;
    }
    */
 
 
   /*
    ll loga_b(ll a, ll b){
        return log2(b)/log2(a);
    }
    */
    
    /* note self:
    1. read
    2. prove
    3. re-read
    4. move
    */