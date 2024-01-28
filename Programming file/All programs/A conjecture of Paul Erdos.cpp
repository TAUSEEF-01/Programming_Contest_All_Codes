//accepted
//https://www.spoj.com/problems/HS08PAUL/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;

const int M=1e7+10;

vector<bool> isPrime(M+10, true);
vector<int> store;

void sieve(int n)
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<=n; i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=2*i; j<=n; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}

void count_nums(int n)
{
    int ctr=0;
    map<int, int> mark;
    for(ll i=1; (i*i)<=n; i++)
    {
        ll x=i*i;
        for(ll j=1; (j*j*j*j)<=n; j++)
        {
            ll y=j*j*j*j;
            if(x+y<=n)
            {
                if(isPrime[x+y] && mark[x+y]==0)
                {
                    store.push_back(x+y);
                    mark[x+y]++;
                }
            }
            else
            break;
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    int pos=upper_bound(store.begin(), store.end(), n) - store.begin();
    cout<<pos<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    sieve(M);
    count_nums(M);
    vsort(store);

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
