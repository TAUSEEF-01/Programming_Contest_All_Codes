// accepted
// https://codeforces.com/gym/101102/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


bool cmp(pair<ll,ll>a, pair<ll,ll>b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    
    return a.first>b.first;
}

void solve()
{
    int n, q;
    cin>>n>>q;

    set<pair<int, int>> sp;
    for(int i=1; i<=n; i++)
    {
        sp.insert({0, i});
    }

    map<int, int> mp;
    int ans=0, best=1;
    for(int i=1; i<=q; i++)
    {
        int id, score;
        cin>>id>>score;

        sp.erase({mp[id], id}); 
        mp[id]-=score;
        sp.insert({mp[id], id});

        auto it=*sp.begin();
        if(it.second!=best)
        {
            best=it.second;
            ans=i;
        }
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
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}



/*
1
5 7
1 1
2 2 
3 1
4 -4
5 1
3 1
3 1

---> 6 ---> wrong




1
5 5
1 -1
2 -2 
3 -1
4 -4
2 2

---> 1 ---> wrong




1
5 5
1 1
1 -1
2 1
2 -1
3 -2

---> 1 ---> wrong




1
3 5
1 1
1 -1
2 1
2 -1
3 -2

---> 3 ---> wrong

*/
