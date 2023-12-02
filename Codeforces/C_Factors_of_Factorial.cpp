#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


const ll int pr=1e3+10;


void solve()
{
    vector<bool> isPrime(pr,1);
    vector<ll int> lp(pr,0), hp(pr,0);
    isPrime[0]= isPrime[1]= false;

    for(int i=2; i<pr; ++i)
    {
        if(isPrime[i]== true)
        {
            lp[i]=hp[i]=i;

            for(int j=2*i; j<pr; j+=i)
            {
                isPrime[j] = false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }

    ll n; 
    cin>>n;

    map<ll ,ll> prime_factors;
    for(int i=2; i<=n; i++)
    {
        ll num=i;
        while(num > 1)
        {
            ll int prime_factor =hp[num];
            while(num % prime_factor ==0)
            {
                num /= prime_factor;
                prime_factors[prime_factor]++;
            }
        }
    }

    ll ans=1;
    for(auto &x: prime_factors)
    {
        ans=(ans*(x.second+1)) % N;
    }

    cout<<ans<<endl;
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


    int t=1;
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

