// accepted
// https://cses.fi/problemset/task/1079/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const double pi=acos(-1);


const int N = 1000006;
const int MOD = 1e9+7;

vector<ll> fact(N);


ll mul(ll x, ll y)
{
	return (x * 1ll * y) % MOD;
}

ll binpow(ll x, ll y)
{
	ll z = 1;
	while(y > 0)
	{
		if(y % 2 == 1)
			z = mul(z, x);
		x = mul(x, x);
		y /= 2;
	}
	return z;
}

ll inv(ll x)
{
	return binpow(x, MOD - 2);
}

ll divide(ll x, ll y)
{
	return mul(x, inv(y));
}

void precalc()
{
	fact[0] = 1;
	for(int i = 1; i < N; i++)
		fact[i] = mul(i, fact[i - 1]);
}

ll nCk(ll n, ll k)
{
	if(k > n) return 0;
	return divide(fact[n], mul(fact[n - k], fact[k]));
}

void solve()
{
    ll a, b;
    cin>>a>>b;

    cout<<nCk(a, b)<<endl;
}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    precalc();

    int t=1;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
