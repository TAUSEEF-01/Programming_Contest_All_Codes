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
    int a, b;
    cin>>a>>b;
    if(a==1 && b==0)
    {
        cout<<-1<<endl;
        return;
    }
    if((a|b) > a) 
    {
        cout<<-1<<endl;
    }
    else
    {
        int ctr=0;
        int num=0, n=ceil(log2(a)), xchk=0;
        for(int i=0; i<n; i++)
        {
            if(a & 1<<i)
            {
                ctr++;
            }
            else
            {
                num |= 1<<i;
            }
        }

        set<int> store;
        for(int i=0; i<=a; i++)
        {
            if(!(i&num))
            {
                store.insert(i);
                if(store.size()==1)
                xchk = i;
                else
                xchk ^= i;
            }
        }

        if(xchk != b)
        {
            for(auto &x: store)
            {
                if(xchk ^ x == b)
                {
                    store.erase(x);
                    break;
                }
            }
        }

        if(b==0)
        {
            int chk=0;
            for(auto &x: store)
            {
                chk ^= x;
            }
            if(chk!=b)
            {
                cout<<-1<<endl;
                return;
            }
        }
       
        cout<<store.size()<<endl;
        for(auto &x: store)
        {
            cout<<x<<' ';
        }
        cout<<endl;
    }
}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
