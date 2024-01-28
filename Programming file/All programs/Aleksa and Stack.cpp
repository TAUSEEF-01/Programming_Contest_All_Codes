#include <bits/stdc++.h>
using namespace std;
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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}



void resoudre()
{
    ll n; cin>>n;
    vl a(n);
    a[0]=2, a[1]=4;
    cout<<a[0]<<' '<<a[1]<<' ';
    for(int i=2; i<n; i++)
    {
        int cnt=1;
        while(((a[i-1]+cnt)*3) % ((a[i-2]+a[i-1]))==0)
        {
            cnt++;
        }
        a[i]=a[i-1]+cnt;
        cout<<a[i]<<' ';
    }
    cout<<endl;
}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}










        // if(((a[i-2]+a[i-1])+1)*3 % ((a[i-2]+a[i-1]))!=0)
        // a[i]=(a[i-2]+a[i-1])+1;
        // else
        // a[i]=(a[i-2]+a[i-1])+1;