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
    int songs, sz; cin>>sz>>songs;
    vector<int> a(songs), diff(songs);
    int sum=0;
    for(int i=0; i<songs; i++)
    {
        int x, y;
        cin>>x>>y;
        a[i]=x;
        diff[i]=x-y;
        sum+=x;
    }
    sort(diff.rbegin(), diff.rend());
    int cnt=0, flag=0;
    for(int i=0; i<songs; i++)
    {
        if(sum-diff[i]>sz)
        {
            sum-=diff[i];
            cnt++;
        }
        else
        {
            if(sum<=sz)
            {
                flag++;
                break;
            }
            else
            {
                cnt++;
                flag++;
                break;
            }
        }
    }
    if(flag)
    cout<<songs-cnt<<endl;
    else
    cout<<"-1"<<endl;
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
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
