#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define reall(a) a.rbegin(), a.rend()
#define vsort(a) sort(all(a))
#define revsort(a) sort(reall(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);

const ll int pr=2e6+10;

vector<bool> isPrime(pr,1);
vector<ll int> lp(pr,0), hp(pr,0);
vl ansArr(pr, 0);
// map<pair<int, int>, int> vp;

// void GCD(int x, int y)
// {

// }

void prime_array()
{
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

    // for(ll i =1; i < pr; i++)
    // {
    //     ll num = i;
    //     map<ll ,ll> prime_factors;

    //     while(num > 1)
    //     {
    //         ll prime_factor =hp[num];
    //         while(num % prime_factor ==0)
    //         {
    //             num /= prime_factor;
    //             prime_factors[prime_factor]++;
    //         }
    //     }
        
    //     ll p=1;

    //     for(auto factor : prime_factors)
    //     {
    //         p*=(factor.second+1);
    //     }

    //     ansArr[num] = p;
    // }
}

void solve()
{
    ll n, m;
    cin >> n >> m;

    ll ans =0, mini = min(n, m);
    // ans += n;
    // ans += n/2;

    // while()
    for(int i=0; i<n;i++)
    {
        if((n)<pow(2,i) || m<pow(2,i))break;
        ans += n/pow(2, i);
    }
    // for(ll i=1; i<=m; i++)
    // {
    //     if(i > n)
    //         break;

    //     // if(isPrime[i])
    //     // {
    //     //     ans += 
    //     // }
    //     ans += 1;
    //     // ll num = i;
    //     // map<ll ,ll> prime_factors;

    //     // bool d = true;

    //     // while(num > 1)
    //     // {
    //     //     ll prime_factor =hp[num];
    //     //     if(i % prime_factor == 0)
    //     //     {
    //     //         d = false;
    //     //     }
    //     //     while(num % prime_factor ==0)
    //     //     {
    //     //         num /= prime_factor;
    //     //         prime_factors[prime_factor]++;
    //     //     }
    //     // }
        
    //     // ll p=1;
    //     // for(auto factor : prime_factors)
    //     // {
    //     //     p*=(factor.second+1);
    //     // }
        
    //     // cout << i << ' ' << p << endl;
    //     // ans+=(p-1);
    // }

    cout << ans << endl;
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

    // prime_array();

    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
