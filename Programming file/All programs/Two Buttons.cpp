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
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    int n,m;
    cin>>n>>m;
    if(n>=m)
    {
        cout<<n-m<<endl;
    }
    else
    {
        int k=n, ctr=0;
        if(k%2!=0)
        k++;
        while(k>m)
        {
            if(k%2!=0)
            k++;
            k/=2;
            ctr++;
        }
        if(k==m)
        {
            cout<<ctr<<endl;
        }
        else
        {
            cout<<ctr+abs(k-m)<<endl;
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

    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}
        