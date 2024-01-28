#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    set<int> s;
    ll sum=0, flag=0, total=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
        total+=a[i];
        // if(a[i]&1) flag++;
        sum+=a[i]/2;
    }
    if(s.size()==1)
    {
        cout<<"Yes\n";
    }
    else
    {
        //(int)ceil(log2(sum))==(int)floor(log2(sum)) && (int)(log2(sum))%n==0
        // if(flag==0 && sum%n==0 && (sum/n)%2==0) cout<<"Yes\n";
        if(sum%n==0 && total%n==0) 
        {
            // if((sum/n)%2 == n%2)
            cout<<"Yes\n";
            // else
            // cout<<"No\n";
        }
        else cout<<"No\n";
    }
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


    int t=1;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
