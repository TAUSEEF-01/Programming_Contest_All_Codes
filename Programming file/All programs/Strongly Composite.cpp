#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int N=1e7+10;

vector<bool> isPrime(N,1);
vector<ll int> lp(N,0), hp(N,0);


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);


    isPrime[0]= isPrime[1]= false;

    for(int i=2; i<N; ++i)
    {
        if(isPrime[i]== true)
        {
            lp[i]=hp[i]=i;

            for(int j=2*i; j<N; j+=i)
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
        int n;
        cin>>n;
        ll p=0;
        int ctr=0;
        for(int i=0; i<n; i++)
        {
            ll  num; 
            cin>>num;
            map<ll, ll> prime_factors;

            while(num > 1)
            {
                ll prime_factor =hp[num];
                while(num % prime_factor ==0)
                {
                    num /= prime_factor;
                    prime_factors[prime_factor]++;
                }
            }
            
            for(auto factor : prime_factors)
            {
                if(factor.second==1)
                ctr++;
                p+=(factor.second);
            }
        }
        cout<<p<<" ";
        ll ans;
        ans=(p-1)/2;
        cout<<ans<<endl;
    }


    return 0;
}

