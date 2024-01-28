//accepted
//https://codeforces.com/contest/727/problem/A


/*

//sln using dfs: (inori)

#include<bits/stdc++.h>
using namespace std;
#define forn(i,j) for(int i=0;i<(int)j;i++)
#define forno(i,j) for(int i=1;i<=(int)j;i++)
typedef long long int ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);



int dfs(ll a, ll b, vector<int>&v)
{

    if(a>b)return 0;
    else if(a==b)
    {
        v.push_back(a);
        return 1;
    }
    else
    {
        v.push_back(a);
        if((dfs(2*a,b,v) | dfs(10*a+1,b,v))==0)
        {
            v.pop_back();
            return 0;
        }
        
        return 1;
    }
}

int main()
{
    ll a,b;
    cin >> a >> b;
    vector<int>v;
    if(dfs(a,b,v)==1)
    {
        cout << "YES\n";
        cout << v.size() << "\n";
        forn(i,v.size())cout << v[i] << " ";
    }
    else cout << "NO\n";
    return 0;
}

*/



#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 


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
#define takeinput(a) for(auto &x: a) cin>>x;
#define pb push_back
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
const ll mod = 1e9 + 7, inf = 1e18;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}



void resoudre()
{
    ll a, b;
    cin>>a>>b;
    int flag=0;
    vi res;
    res.push_back(b);
    while(b>a)
    {
        if(b%10!=1)
        {
            int r=b%10;
            if(r%2==0)
            {
                b/=2;
            }
            else
            {
                flag++;
                break;
            }
        }
        else
        {
            b/=10;
        }
        res.push_back(b);
        if(b<a) 
        {
            flag++;
            break;
        }
        else if(b==a)
        {
            break;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        reverse(all(res));
        cout<<"YES\n";
        cout<<res.size()<<endl;
        for(auto &x: res) cout<<x<<' ';
        cout<<endl;
    }
}


int main()
{
    fast;
    
    // setIO();

    int test=1; 
    // cin>>test;

    while(test--) 
    resoudre();

    return 0;
}
