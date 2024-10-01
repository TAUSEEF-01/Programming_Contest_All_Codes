#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using o_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; 

#define rep(i, j, n) for (int i = j; i < n; i++)
#define re(i, n) rep(i, 0, n)
#define nl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef long double lld;


#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define reall(a) a.rbegin(), a.rend()
#define vsort(a) sort(all(a))
#define revsort(a) sort(reall(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define loop(i, k, n) for (ll i = k; i < n; i++)
#define Loop(i, k, n) for (ll i = k; i <= n; i++)
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vs = vector<string>;
using vb = vector<bool>;
using pii = pair<int, int>;


const ll MOD = 1000000007;
const int maxi = INT_MAX;
const int mini = INT_MIN;
const ll maxll = LLONG_MAX;
const ll minll = LLONG_MIN;
#define sq(x) ((x) * (x))
// vectors
#define pb(e) push_back(e)
#define eb(e) emplace_back(e)
#define sv(a) sort(a.begin(), a.end())
#define sa(a, n) sort(a, a + n)
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
typedef vector<int> vi;
typedef vector<ll> vll;
// pairs
#define mp(a, b) make_pair(a, b)
#define ff first
#define ss second
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef pair<char, char> pc;

//*******************************************************************************************************************************************//
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p){cerr << "{";_print(p.ff);cerr << ",";_print(p.ss);cerr << "}";}
template <class T>
void _print(vector<T> v){cerr << "[ ";for (T i : v){_print(i);cerr << " ";}cerr << "]";}
template <class T>
void _print(set<T> v){cerr << "[ ";for (T i : v){_print(i);cerr << " ";}cerr << "]";}
template <class T>
void _print(multiset<T> v){cerr << "[ ";for (T i : v){_print(i);cerr << " ";}cerr << "]";}
template <class T, class V>
void _print(map<T, V> v){cerr << "[ ";for (auto i : v){_print(i);cerr << " ";}cerr << "]";}
//*******************************************************************************************************************************************//

// Segment Tree template

template<typename Node, typename Update>
struct SegTree {
	vector<Node> tree;
	vector<ll> arr; // type may change
	int n;
	int s;
	SegTree(int a_len, vector<ll> &a) { // change if type updated
		arr = a;
		n = a_len;
		s = 1;
		while(s < 2 * n){
			s = s << 1;
		}
		tree.resize(s); fill(all(tree), Node());
		build(0, n - 1, 1);
	}
	void build(int start, int end, int index)  // Never change this
	{
		if (start == end)	{
			tree[index] = Node(arr[start]);
			return;
		}
		int mid = (start + end) / 2;
		build(start, mid, 2 * index);
		build(mid + 1, end, 2 * index + 1);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	void update(int start, int end, int index, int query_index, Update &u)  // Never Change this
	{
		if (start == end) {
			u.apply(tree[index]);
			return;
		}
		int mid = (start + end) / 2;
		if (mid >= query_index)
			update(start, mid, 2 * index, query_index, u);
		else
			update(mid + 1, end, 2 * index + 1, query_index, u);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	Node query(int start, int end, int index, int left, int right) { // Never change this
		if (start > right || end < left)
			return Node();
		if (start >= left && end <= right)
			return tree[index];
		int mid = (start + end) / 2;
		Node l, r, ans;
		l = query(start, mid, 2 * index, left, right);
		r = query(mid + 1, end, 2 * index + 1, left, right);
		ans.merge(l, r);
		return ans;
	}
	void make_update(int index, ll val) {  // pass in as many parameters as required
		Update new_update = Update(val); // may change
		update(0, n - 1, 1, index, new_update);
	}
	Node make_query(int left, int right) {
		return query(0, n - 1, 1, left, right);
	}
};

struct Node1 {
	ll val; // may change
	Node1() { // Identity element
		val = 0;	// may change
	}
	Node1(ll p1) {  // Actual Node
		val = p1; // may change
	}
	void merge(Node1 &l, Node1 &r) { // Merge two child nodes
		val = min(l.val , r.val);  // may change
	}
};

struct Update1 {
	ll val; // may change
	Update1(ll p1) { // Actual Update
		val = p1; // may change
	}
	void apply(Node1 &a) { // apply update to given node
		a.val = val; // may change
	}
};


ll c2(ll& n)
{
    return 1LL * n * (n - 1) / 2;
}
ll c2mod(int n, int m)
{
    n %= m;
    return 1LL * n * (n - 1) / 2 % m;
}
/*********************************************************
 *                                                       *
 *   "It is not important to be better than someone      *
 *   else, but to be better than you were yesterday.”    *
 *                   — Master Oogway, Kung Fu Panda      *
 *                                                       *
 *********************************************************/
int gcdExtended(int a, int b, int* x, int* y);
 
// Function to find modulo inverse of a
void modInverse(int A, int M)
{
    int x, y;
    int g = gcdExtended(A, M, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else {
 
        // m is added to handle negative x
        int res = (x % M + M) % M;
        cout << "Modular multiplicative inverse is " << res;
    }
}
 
// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int* x, int* y)
{
 
    // Base Case
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
 
    // To store results of recursive call
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b / a) * x1;
    *y = x1;
 
    return gcd;
}

void dfs(int node, int parent, vector<vector<pi>> &adj, vector<vector<int>>&par, vector<int> &lev, vector<vector<ll>> &dist){
    par[0][node]=parent;
    if(parent != -1 ? lev[node]=lev[parent]+1 : lev[node]=1);
    for(auto& x: adj[node]){
        if(x.ff!=par[0][node]){
            dfs(x.ff, node, adj, par, lev, dist);
            dist[0][x.ff]=x.ss;
        }
    }
}

int findkth(int a, int k, vector<vector<int>>& par){
    int n=par.size();
    for(int i=0; i<n; i++){
        if(k&(1<<i)){
            a=par[i][a];
            if(a==-1){
                return a;
            }
        }
    }
    return a;
}

ll finddist(int a, int k, vector<vector<int>>& par, vector<vector<ll>>& dist){
    int n=dist.size();
    ll d=0;
    for(int i=0; i<n; i++){
        if(k&(1<<i)){
            d+=dist[i][a];
            a=par[i][a];
            if(a==-1){
                return a;
            }
        }
    }
    return d;
}

int lca(int a, int b, vector<vector<int>> &par, vector<int> &lev){
    int maxpow=par.size();
    if(lev[a]>lev[b]){
        a=findkth(a, lev[a]-lev[b], par);
    }else{
        b=findkth(b, lev[b]-lev[a], par);
    }
    if(a==b){
        return a;
    }
    for(int i=maxpow-1; i>=0; i--){
        if(par[i][a]!=par[i][b]){
            a=par[i][a];
            b=par[i][b];
        }
    }
    return par[0][a];
}

void ConstructParent(vector<vector<int>> &par, vector<vector<ll>> &dist){
    int maxpow=par.size();
    int n=par[0].size()-1;
    for(int i=1; i<maxpow; i++){
        for(int j=1; j<=n; j++){
            int imd=par[i-1][j];
            if(imd==-1){
                par[i][j]=-1;
                dist[i][j]=-1;
                continue;
            }
            par[i][j]=par[i-1][imd];
            if(par[i-1][imd]!=-1)
                dist[i][j]=dist[i-1][j]+dist[i-1][imd];
        }
    }
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


/**/
#define input(a)      \
    for (auto &x : a) \
        cin >> x;

#define output(a)         \
    for (auto &x : a)     \
        cout << x << ' '; \
    cout << endl;

/**/
#define yes \
    cout << "YES\n"

#define no \
    cout << "NO\n"

/**/
const ll mod = 1e9 + 7, inf = 1e18;
// const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

void solve()
{
    int n;
    cin >> n;

    if (n <= 60)
        yes;
    else
        no;
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

    int t = 1;
    // cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
