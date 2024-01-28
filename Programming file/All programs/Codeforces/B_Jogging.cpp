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
    int a, b, c, d, e, f, x, aa, dd;
    cin>>a>>b>>c>>d>>e>>f>>x;

    aa=a;
    dd=d;

    int ans1=0, ans2=0, cnt1=0, cnt2=0;
    while(cnt1<=x)
    {
        aa=a;
        while(aa--)
        {
            ans1+=b;
            cnt1++;
            if(cnt1>=x) break;
        }
        cnt1+=c;
    }

    while(cnt2<=x)
    {
        dd=d;
        while(dd--)
        {
            ans2+=e;
            cnt2++;
            if(cnt2>=x) break;
        }
        cnt2+=f;
    }
    
    if(ans1>ans2)
    cout<<"Takahashi\n";
    else if(ans1<ans2)
    cout<<"Aoki\n";
    else 
    cout<<"Draw\n";
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





    // double ans1=0, ans2=0;
    // int cnt1=0, cnt2=0, i=1;

    // // for(int i=1; i<=(int)x; i++)
    // while(cnt1<=x)
    // {
    //     if(i%(int)(a+1)==0)
    //     {
    //         // i+=c;
    //         cnt1+=c;
            
    //         // continue;
    //     }
    //     else
    //     {
    //         ans1+=b;
    //         cnt1++;
    //     }
    //     i++;
        
    //     // cout<<i<<' ';
    // }

    // // for(int i=1; i<=(int)x; i++)
    // i=1;
    // while(cnt2<=x)
    // {
    //     if(i%(int)(d+1)==0)
    //     {
    //         // i+=f;
    //         cnt2+=f;
    //         // continue;
    //     }
    //     else
    //     {
    //         ans2+=e;
    //         cnt2++;
    //     }
    //     i++;
        
    // }