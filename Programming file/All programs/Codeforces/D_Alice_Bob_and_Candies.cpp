// accepted
// https://codeforces.com/contest/1352/problem/D

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
    int total=0;
    for(int i=0; i<n; i++) cin>>a[i], total+=a[i];

    ll alice=0, bob=0;
    int ctr=0;
    int pre=0, suf=0;


    int i=0, j=n-1, flag=1;
    while(flag)
    {
        if(alice<=bob)
        {
            while(pre<=suf)
            {    
                alice+=a[i];
                pre+=a[i];
                i++;

                if(i>j)
                break;
            }
            suf=0;
            
        }
        else if(alice>=bob)
        {
            while(pre>=suf)
            {    
                bob+=a[j];
                suf+=a[j];
                j--;
                if(i>j)
                break;
            }
            pre=0;
        }
        ctr++;

        if(i>=j)
        break;
    }


    if(alice + bob != total) ctr++;
    if(alice>bob) cout<<ctr<<' '<<alice<<' '<<total-alice<<endl;
    else cout<<ctr<<' '<<total-bob<<' '<<bob<<endl;
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
