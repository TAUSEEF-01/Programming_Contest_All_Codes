//accepted
//https://codeforces.com/contest/1879/problem/C


/*

the final answer is:

the number of operations we perform is n−k;
and the number of shortest sequences of operations is (∏(i=1 to i=k) (len_i))*(n−k)! 

*/

#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 


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
#define takeinput(a) for(auto &x: a) cin>>x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
const ll mod = 1e9 + 7, inf = 1e18;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


const ll M=998244353;


void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


vl factorial(200005);

void precount()
{
    
    factorial[0]=1;
    
    for(int i=1; i<200005; i++)
    {
        factorial[i] = (factorial[i-1]*i) % M;
    }
}


void resoudre()
{
    string a;
    cin>>a;
    int n=int(a.size());

    vl str;
    int cnt=0;;
    for(int i=0, j=0; i<n; i=j)
    {
        while(a[i]==a[j] and j<n)
        {
            cnt++;
            j++;
        }
        str.push_back(cnt);
        cnt=0;
    }

    ll ans=1, str_sz=str.size(), sum=0;
    for(int i=0; i<str_sz; i++)
    {   
        sum+=str[i]-1;
        ans= (ans*str[i]*1LL)%M;
    }

    ans= (ans*factorial[sum])%M;
    cout<<sum<<' '<<ans<<endl;
}


int main()
{
    fast;
    
    // setIO();

    precount();

    int test=1; 
    cin>>test;

    while(test--) 
    resoudre();

    return 0;
}