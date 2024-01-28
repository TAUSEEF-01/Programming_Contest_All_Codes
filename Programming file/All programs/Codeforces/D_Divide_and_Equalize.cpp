#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;

const ll int pr=1e6+10;

vector<bool> isPrime(pr,1);
vector<ll int> lp(pr,0), hp(pr,0);



void solve()
{
    int n;
    cin>>n;
    map<ll int ,ll int> prime_factors;
    for(int i=0; i<n; i++)
    {
        int num; 
        cin>>num;
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
    int flag=0;
    for(auto x: prime_factors)
    {
        if(x.second%n!=0)
        {
            flag++;
            break;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


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
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
