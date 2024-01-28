//accepted
//https://codeforces.com/contest/977/problem/D


/*
//sln __Him:

//used reversed iterator:

// map<int, vi>::reverse_iterator i;

// for (i = mp.rbegin(); i != mp.rend(); i++) //--> rbegin(); --> rend();
// {
//     vi aa = i->second;
//     sort(all(aa));

//     for (int j : aa)
//         cout << j << sp;
// }



#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define int ll
#define pii pair<int, int>
#define vi vector<ll>
#define vvi vector<vi>
#define all(vec) (vec).begin(), (vec).end()
#define endl '\n'
#define sp " "

int cnt3(int n)
{
    int cnt = 0;

    while (n % 3 == 0)
    {
        cnt++;
        n /= 3;
    }

    return cnt;
}

void solveit()
{
    int n;
    cin >> n;

    map<int, vi> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[cnt3(x)].push_back(x);
    }

    map<int, vi>::reverse_iterator i;

    for (i = mp.rbegin(); i != mp.rend(); i++)
    {
        vi aa = i->second;
        sort(all(aa));

        for (int j : aa)
            cout << j << sp;
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen ("inp.txt", "r", stdin);
    // freopen ("out.txt", "w", stdout);

    int t = 1;
    // cin >> t;

    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case " << tt << ": ";
        solveit();
    }
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



//sln using dfs:

int color[105];
vector<int>g[105];
vector<int>topo;
 
void dfs(int u)
{
	color[u]=1;
	for(int v: g[u]) if(!color[v]) dfs(v);
	topo.push_back(u);
    // cout<<u+1<<' ';
}
 
void solve()
{
	int n;
	cin>>n;
	
	vector<ll>vec(n);
	for(ll &x: vec) cin>>x;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ll u=vec[i];
			ll v=vec[j];
			
			if(u*2==v) g[j].push_back(i);
			if(u%3==0 && u/3==v) g[j].push_back(i);
		}
	}

    // // to understand the flow:
	// for(int i=0; i<n; i++)
    // {
    //     cout<<vec[i]<<" <-- ";
    //     for(auto x: g[i]) cout<<vec[x]<<' ';
    //     cout<<endl;
    // }

	for(int i=0;i<n;i++) 
    {
        if(!color[i]) 
        {
            dfs(i);
            // for(auto x: topo)
            // cout<<vec[x]<<' ';
            // cout<<"--> "<<i<<endl;
        }

    }
	
	for(int i: topo) cout<<vec[i]<<" ";
}	





// void resoudre()
// {
//     ll n; cin>>n;
//     vl a(n);
//     vl d3[50];

//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         ll num=a[i];
//         int cnt=0;
//         while(num%3==0)
//         {
//             num/=3;
//             cnt++;
//         }
//         d3[cnt].push_back(a[i]);
//     }

//     for(int i=0; i<50; i++)
//     {
//         asort(d3[i]);
//     }

//     vl ans;
//     for(int i=49; i>=0; i--)
//     {
//         if(d3[i].size()!=0)
//         {
//             for(auto &x: d3[i])
//             {
//                 ans.push_back(x);
//             }
//         }
//     }

//     for(auto &x: ans)
//     {
//         cout<<x<<' ';
//     }
//     cout<<endl;
// }


int main()
{
    fast;
    
    // setIO();

    int test=1; 
    // cin>>test;

    while(test--) 
    // resoudre();
    solve(); //--> using dfs

    return 0;
}
