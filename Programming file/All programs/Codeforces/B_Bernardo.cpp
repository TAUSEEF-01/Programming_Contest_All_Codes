#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


const ll int pr=1e6+10;

vector<bool> isPrime(pr,1);
vector<ll int> lp(pr,0), hp(pr,0);


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
}


void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    map<int, map<int, int> > store;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        int num=a[i];

        map<int ,int> prime_factors;
        int mult=1;
        while(num > 1)
        {
            int prime_factor =hp[num];
            while(num % prime_factor ==0)
            {
                num /= prime_factor;
                prime_factors[prime_factor]++;
                if(prime_factors[prime_factor]==1)
                {
                    mult*=prime_factor;
                }
            }
        }

        // cout<<mult<<endl;

        for(auto &x: prime_factors)
        {
            if(store[mult][x.first]!=0)
            store[mult][x.first]=min(x.second, store[mult][x.first]);
            else
            store[mult][x.first]=x.second;
        }
    }

    ll ans=0;
    for(auto &x: store)
    {
        int mult=1;
        for(auto &y: x.second)
        {
            mult*=y.second;
        }
        ans+=mult;
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

    prime_array();


    int t=1;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
