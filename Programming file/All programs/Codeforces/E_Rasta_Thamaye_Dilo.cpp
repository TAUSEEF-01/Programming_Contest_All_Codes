//accepted
//https://codeforces.com/gym/104679/problem/E


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


const int pr=1e7+11;

vector<bool> isPrime(pr,1);
vector<int> prime_store;
vector<ll> pre_prime_sum;

void solve()
{
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<0<<endl;
        return;
    }
    
    int pos=upper_bound(prime_store.begin(), prime_store.end(), n) - prime_store.begin();
    
    int pos2=upper_bound(prime_store.begin(), prime_store.end(), n/2) - prime_store.begin();

    cout<<pos-pos2<<endl;
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
            if(i!=2)
            {
                prime_store.push_back(i);
            }
            for(int j=2*i; j<pr; j+=i)
            {
                isPrime[j] = false;
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