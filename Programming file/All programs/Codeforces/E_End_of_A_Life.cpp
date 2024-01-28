// accepted
// https://codeforces.com/gym/104804/problem/F

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
    string a;
    cin>>a;

    int k;
    cin>>k;

    int n=a.size();
    int v=0, c=0, ans=-INT_MAX;
    int vo[n+2]={0}, co[n+2]={0};

    deque<int> index;
    for (int i = 0; i < n; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') 
        {
            v++;
            c=0;

            co[i]=-1;
            if(i==0)
            {
                vo[i]=0;
            }
            else
            {
                if(vo[i-1]==-1)
                {
                    vo[i]=i;
                }
                else
                {
                    vo[i]=vo[i-1];
                }
            }
        }
        else 
        {
            c++;
            v=0;

            vo[i]=-1;
            if(i==0)
            {
                co[i]=0;
            }
            else
            {
                if(co[i-1]==-1)
                {
                    co[i]=i;
                }
                else
                {
                    co[i]=co[i-1];
                }
            }
        }

        while (!index.empty() && v==k)
        {
            int pos=(int)index.front();
            if(vo[i]!=vo[pos]) 
            {
                index.pop_front();
                continue;
            }

            if(a[pos]=='a' || a[pos]=='e' || 
               a[pos]=='i' || a[pos]=='o' || a[pos]=='u') 
            {
                v--;
            }

            index.pop_front();
        }

        while (!index.empty() && c==k)
        {
            int pos=(int)index.front();

            if(co[i]!=co[pos]) 
            {
                index.pop_front();
                continue;
            }

            if(!(a[pos]=='a' || a[pos]=='e' || 
               a[pos]=='i' || a[pos]=='o' || a[pos]=='u') )
            {
                c--;
            }

            index.pop_front();
        }

        index.push_back(i);
        ans=max(ans, (int)index.size());
    }

    cout<<ans<<endl;
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

