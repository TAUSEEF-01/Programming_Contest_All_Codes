//accepted
//https://codeforces.com/contest/977/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev reverse(s.begin(), s.end())
#define ssort sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    int n,k;
    cin>>n>>k;
    map<ll, ll>a;
    ll mini=INT_MAX, maxi=-1;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        mini=min(mini, x);
        maxi=max(maxi, x);
        a[x]++;
    }
    if(k==0)
    {
        if(mini==1)
        cout<<-1<<endl;
        else
        cout<<mini-1<<endl;
        return;
    }
    else if(k==n)
    {
        cout<<maxi<<endl;
        return;
    }
    ll ctr=0, ans=-1;
    for(map<ll, ll> :: iterator it=a.begin(); it!=a.end(); it++)
    {
        if(ctr==k)
        {
            it--;
            ans=(*it).first;
            break;
        }
        ctr+=(*it).second;
    }
    cout<<ans<<endl;
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

    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}