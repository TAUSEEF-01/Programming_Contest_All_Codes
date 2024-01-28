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
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}



void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n), b;
    deque<ll> p;
    ll maxo=-INT_MAX;
    for(auto &x: a)
    {
        cin>>x;
        maxo=max(maxo, x);
        p.push_front(x);
    }

    if(maxo!=n)
    {
        cout<<"NO\n";
    }
    else
    {
        int l=1;
        for(int i=1; ; i++)
        {
            if(p.front()>=l)
            {
                b.push_back(p.size());
                l++;
            }
            else
            {
                p.pop_front();
            }
            if(p.empty()) break;
        }

        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                flag++;
                break;
            }
        }
        if(flag==0) cout<<"YES\n";
        else cout<<"NO\n";
    }

}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) 
    solve();

    return 0;
}

