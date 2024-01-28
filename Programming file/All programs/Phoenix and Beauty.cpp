//accepted
//https://codeforces.com/contest/1348/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int n, k; 
    cin>>n>>k;
    ll sum=0;
    vector<int> a(n);
    set<int> b;
    for(auto &x: a) 
    {
        cin>> x;   
        b.insert(x);
    }
    for(int i=0; i<k; i++)
    {
        sum+=a[i];
    }
    int flag=0;
    ll match=sum;
    for(int i=k; i<n; i++)
    {
        sum=sum-a[i-k]+a[i];
        if(sum!=match)
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<n<<endl;
        for(auto &x: a)
        {
            cout<<x<<' ';
        }
        cout<<endl;
        return;
    }
    if(b.size()>k )
    {
        cout<<-1<<endl;
    }
    else
    {
        vector<int> store;
        for(auto &x: b)
        {
            store.push_back(x);
        }
        cout<<n*k<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                if(j<store.size())
                cout<<store[j]<<' ';
                else
                cout<<1<<' ';
            }
        }
        cout<<endl;
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
