//accepted
//https://codeforces.com/contest/1846/problem/E2

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a)         sort(a.begin(), a.end())
#define vmin(a)          *min_element(a.begin(), a.end())
#define vmax(a)          *max_element(a.begin(), a.end())
#define ub_pos(a, x)     upper_bound(a.begin(), a.end(), x) - a.begin()
#define lb_pos(a, x)     lower_bound(a.begin(), a.end(), x) - a.begin()
#define lower_case(a)    transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a)    transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev(a)          reverse(a.begin(), a.end())
#define ssort(a)         sort(a.begin(), a.end())
#define smax(a)          *(a.rbegin())   
#define smin(a)          *a.begin() 
#define mem(a, x)        memset(a, x, sizeof(a))
#define grtsrt(v)        sort(v.begin(), v.end(), greater<int>())
#define vcount(v, a)     count(v.begin(), v.end(), a)
#define toint(a)         atoi(a.c_str())
#define total_sum(a)     accumulate(a.begin(), a.end(), 0) 

#define check(n,pos)    (n & (1<<(pos)))
#define biton(n,pos)    (n | (1<<(pos)))
#define bitoff(n,pos)   (n & ~(1<<(pos)))


const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


set<ll> store;

void precalc()
{
    for(ll i=2; i<1000000; i++)
    {
        ll ans=1, multiple=1;
        for(ll j=1; j<64; j++)
        {
            multiple*=i;
            ans+=multiple;
            if(ans > 1e18) //exceeding the given highest range, so need not to calculate values more than that
            {
                break;
            }
            else if(j>=2)
            {
                store.insert(ans);
            }
            if(multiple > ((ll)1e18 / i)) //if we don't break here then next multiple will be > 1e18 that may lead to overflow or wrong ans
            {
                break;
            }
        }
    }
}


void solve()
{
    ll n;
    cin>>n;
    if(n<7) //if n=2 then the least number we find for returning YES is 7; so < 7 is NO
    {
        cout<<"NO\n";
        return;
    }

    if(store.count(n)) //checking if n is present in the array where the calculated values are stored
    {
        cout<<"YES\n";
    }
    else
    {
        //if n is too large and we couldn't calculated it because of taking too much time 
        //we will follow the below process to find the sln of n > 1e9

        /* 
        //this is the sln given in the editorial: 

        //here we slv the eqn of k^2 + k + 1 = n; if the sln is an integer and value is > 1 then we print YES otherwise NO 

        ll d = 4*n - 3;
        ll sq = sqrt(d);
        ll sqd = -1;
        for (ll i = max(0ll, sq - 2); i <= sq + 2; ++i)
        {
            if (i*i == d)
            {
                sqd = i;
                break;
            }
        }
        if (sqd != -1 && (sqd - 1) % 2 == 0 && (sqd - 1) / 2 > 1)
        {
            cout<<"YES\n";
        } 
        */
        
        //here we slv the eqn of k^2 + k + 1 = n; if the sln is an integer and value is > 1 then we print YES otherwise NO   

        long double check=1-(4*(1-n)); //here we must take long double otherwise ans will be incorrect
        long double x1=(-1+sqrt(check))/(2), x2=(-1-sqrt(check))/(2); //here we must take long double otherwise ans will be incorrect

        if((ceil(x1)==floor(x1) && x1>1) || (ceil(x2)==floor(x2) && x2>1)) //checking if one of the sln values are integer and > 1
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }   
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    precalc(); //calculating the values earlier so that time can be saved

    int t=1;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0;
}