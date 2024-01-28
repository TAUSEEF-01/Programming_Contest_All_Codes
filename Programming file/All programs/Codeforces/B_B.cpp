#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int a, b, c;
    cin>>a>>b>>c;
    int k;
    cin>>k;

    while(b<=a && k>0)
    {
        b*=2;
        k--;
    }
    while(c<=b && k>0)
    {
        c*=2;
        k--;
    }
    if(a<b && b<c) cout<<"Yes\n";
    else cout<<"No\n";

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}






    // if(a<b && b<c)
    // {
    //     cout<<"Yes\n";
    //     return;
    // }

    

    // if(a>b)
    // {
    //     int ctr=0, aa=a;
    //     while(aa>0)
    //     {
    //         aa=aa/b;
    //         ctr++;
    //     }
    //     if(ctr+1<=k)
    //     {
    //         int b=b*(int)pow(2, ctr);//ceil(a/(double)b)
    //         k-=ctr;//ceil(a/(double)b);
    //         if(k!=0) 
    //         {
    //             c=c*(int)pow(2, ctr);//(int)pow(2, k);
    //         }
    //         if(a<b && b<c) cout<<"Yes\n";
    //         else cout<<"No\n";
    //     }
    //     else
    //     cout<<"No\n";
    // }
    // else if(a<b)
    // {
    //     int ctr=0, bb=b;
    //     while(bb>0)
    //     {
    //         bb=bb/c;
    //         ctr++;
    //     }
    //     if(ctr+1<=k)
    //     {
    //         cout<<"Yes\n";
    //     }
    //     else
    //     {
    //         cout<<"No\n";
    //     }
    // }





            // int ex=ceil(b/(double)c)*2;
            // k-=ceil(b/(double)c);
            // if(k!=0) c*=(k)*2;
            // if(a<b && b<c) cout<<"Yes\n";
            // else cout<<"No\n";