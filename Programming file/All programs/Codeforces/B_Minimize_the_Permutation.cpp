// accepted
// https://codeforces.com/contest/1256/problem/B

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

    vector<int> a(n+1, 0), ind(200, 0);
    for(int i=1; i<=n; i++) 
    {
        cin>>a[i];
        ind[a[i]]=i;
    }

    vector<bool> pos(n+10, false);

    for(int k=1; k<=n; k++)
    {
        int i=ind[k], j=ind[k]-1;
        while(a[i]<a[j] && !pos[j] && j>0)
        {   
            swap(a[i], a[j]);
            pos[j]=true;
            j--;
            i--;
        }
    }
        

    for(int i=1; i<=n; i++) cout<<a[i]<<' ';
    cout<<endl;
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
