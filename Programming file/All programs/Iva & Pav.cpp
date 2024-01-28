//accepted
//https://codeforces.com/contest/1878/problem/E

//  _______  _        _______           _______  _       _________ _______  _______  _______  _______          _________ ______   _______  _______       _______  __   
// (  ____ \( (    /|(  ____ \|\     /|(  ___  )( (    /|\__   __/(  ____ )(  ____ \(  ____ \(  ____ \|\     /|\__   __/(  ___ \ (  ____ \(  ____ \     (  __   )/  \  
// | (    \/|  \  ( || (    \/| )   ( || (   ) ||  \  ( |   ) (   | (    )|| (    \/| (    \/| (    \/| )   ( |   ) (   | (   ) )| (    \/| (    \/     | (  )  |\/) ) 
// | (__    |   \ | || |      | (___) || (___) ||   \ | |   | |   | (____)|| (__    | (_____ | (_____ | |   | |   | |   | (__/ / | (__    | (_____      | | /   |  | | 
// |  __)   | (\ \) || |      |  ___  ||  ___  || (\ \) |   | |   |     __)|  __)   (_____  )(_____  )( (   ) )   | |   |  __ (  |  __)   (_____  )     | (/ /) |  | | 
// | (      | | \   || |      | (   ) || (   ) || | \   |   | |   | (\ (   | (            ) |      ) | \ \_/ /    | |   | (  \ \ | (            ) |     |   / | |  | | 
// | (____/\| )  \  || (____/\| )   ( || )   ( || )  \  |   | |   | ) \ \__| (____/\/\____) |/\____) |  \   /  ___) (___| )___) )| (____/\/\____) |     |  (__) |__) (_
// (_______/|/    )_)(_______/|/     \||/     \||/    )_)   )_(   |/   \__/(_______/\_______)\_______)   \_/   \_______/|/ \___/ (_______/\_______)_____(_______)\____/
//                                                                                                                                                (_____) 




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
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


const int prefsize = 2e5+7;
int prefsum[prefsize][32];


void prefix_sum_of_bits(vl &a, int n) //Builds the prefix sums for each bit
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<32; j++)
        {
            if((a[i] & (1<<j)))
            {
                prefsum[i+1][j] = prefsum[i][j]+1; //careful (i+1) is used before '=' 
            }
            else
            {
                prefsum[i+1][j] = prefsum[i][j];
            }
        }
    }
}


void resoudre()
{
    ll n;
    cin>>n;

    vl a(n);
    for(auto &x: a)
    {
        cin>>x;
    }

    prefix_sum_of_bits(a, n);

    int q;
    cin>>q;

    while(q--)
    {
        ll l, k;
        cin>>l>>k;

        ll low=l, high=n;
        ll ans=-1;
        while(low<=high)
        {
            ll mid=(low + high) / 2;

            ll num=0;
            for(int i=0; i<32; i++)
            {
                if(prefsum[mid][i]-prefsum[l-1][i]==mid-l+1) //We know that if pref[r][j]−pref[l−1][j]=r−l+1, 
				//then the j-th bit is present in all elements of the subsegment [l,r] of the array a, 
				//which means the value of f(l,r) is equal to the sum of all bits for which this condition is true
				// on the subsegment from l to r
                {
                    num+= (1<<i);
                }
            }

            if(num>=k)
            {
                low= mid+1;
                ans=max(ans, mid);
            }
            else
            {
                high= mid-1;
            }
        }
        cout<<ans<<' ';
    }
    cout<<endl;

}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}



























/*
//accepted sln:



#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007
#define nl "\n"

void file() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class SegmentTree {
	ll *seg;
	ll *lazy;
	public :

	SegmentTree(ll n) {
		// Maximum Size Of Tree could be 4n only
		seg = new ll[4*n + 1];
		lazy = new ll[4*n + 1];
	}

	// Time Complexity Of Build : O(4N) == O(N) !!!
	void BuildTree(ll arr[], ll i, ll low, ll high) {
		if(low == high) {
			seg[i] = arr[low];
			return;
		}

		ll mid = low + (high - low) / 2;

		// Left Child
		BuildTree(arr, 2 * i + 1, low, mid);
		// Right Child
		BuildTree(arr, 2 * i + 2, mid + 1, high);
		
		// Sum Of Two
		seg[i] = seg[2 * i + 1] + seg[2 * i + 2];
	}

	// Query Time Complexity : O(logN)
	ll query(ll ind, ll l, ll r, ll low, ll high) {

		// If Update is Remaining, First Update The Values
		if(lazy[ind] != 0) {

			seg[ind] += (high - low + 1) * lazy[ind];

			// If it is a leaf node, it will not have childrens
			if(low != high) {
				lazy[2 * ind + 1] += lazy[ind];
				lazy[2 * ind + 2] += lazy[ind];
			}
			lazy[ind] = 0;
		}

		// No Overlap
		// l r low high or low high l r
		if(high < l || low > r) return 0;

		// Complete Overlap
		// l low high r
		if(high <= r && low >= l) return seg[ind];

		// Partial Overlap
		ll mid = low + (high - low) / 2;

		ll left = query(2 * ind + 1, l, r, low, mid);
		ll right = query(2 * ind + 2, l, r, mid + 1, high);
		return left + right;
	}


	// Update Time Complexity : O(logN)
	void update(ll i, ll val, ll low, ll high, ll ind) {
		// If we found the required Node
		if(low == high) {
			seg[ind] = val;
			return;
		}

		ll mid = low + (high - low)/2;

		// If required node is left to mid, 
		// Move To Left Child Else Move To Right Child
		if(i <= mid) update(i, val, low, mid, 2 * ind + 1);
		else update(i, val, mid + 1, high, 2 * ind + 2);

		// Since, One Of The Child's Value is Updated
		// We have to find minimum again !!!
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}

	void updateRange(ll l, ll r, ll val, ll low, ll high, ll ind) {
		// First Update The Remaining Updates
		// Lazy Propagate To The Child
		if(lazy[ind] != 0) {

			seg[ind] += (high - low + 1) * lazy[ind];

			// If it is a leaf node, it will not have childrens
			if(low != high) {
				lazy[2 * ind + 1] += lazy[ind];
				lazy[2 * ind + 2] += lazy[ind];
			}
			lazy[ind] = 0;
		}

		// No Overlap
		// l r low high or low high l r
		if(high < l || low > r) return;

		// Complete Overlap
		// l low high r
		if(high <= r && low >= l) {
			seg[ind] += (high - low + 1) * val;
			if(low != high) {
				lazy[2 * ind + 1] += val;
				lazy[2 * ind + 2] += val;
			}
			return;
		}

		ll mid = low + (high - low)/2;

		// Partial Overlap ke case me left and right dono update karenge
		updateRange(l, r, val, low, mid, 2 * ind + 1);
		updateRange(l, r, val, mid + 1, high, 2 * ind + 2);

		// Since, One Of The Child's Value is Updated
		// We have to find minimum again !!!
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}
};

struct fenwick {

    vector<ll> fn;
    ll n;

    void init(ll n) {

        this->n = n + 1;
        fn.resize(this->n, 0);

    }

    void add(ll x, ll y) {

        x++;

        while (x < n) {
            fn[x] += y;
            x += (x & (-x));
        }
    }

    ll sum(ll x) {
        x++;

        ll ans = 0;
        while (x) {
            ans += fn[x];
            x -= (x & (-x));
        }

        return ans;
    }

    ll sum(ll l, ll r) {
        return sum(r) - sum(l - 1);
    }
};

class DisjointSet {
	vector<ll> rank, parent, size;

public:

	DisjointSet(ll n) {
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1, 1);
		for(ll i = 1; i <= n; i++) parent[i] = i;
	}

	void unionByRank(ll x, ll y) {

		ll par_x = findPar(x);
		ll par_y = findPar(y);

		if(par_x == par_y) return;

		if(rank[par_x] < rank[par_y]) {
			parent[par_x] = par_y;
		} else if(rank[par_y] < rank[par_x]) {
			parent[par_y] = par_x;
		} else {
			parent[par_x] = par_y;
			rank[par_y]++;
		}
	}

	void unionBySize(ll x, ll y) {

		ll par_x = findPar(x);
		ll par_y = findPar(y);

		if(par_x == par_y) return;

		if(size[par_x] < size[par_y]) {
			parent[par_x] = par_y;
			size[par_y] += size[par_x];
		} else {
			parent[par_y] = par_x;
			size[par_x] += size[par_y];
		}
	}

	ll findPar(ll x) {

		if(parent[x] == x) return x;

		return parent[x] = findPar(parent[x]);

	}

};

ll binpow(ll a,ll b) {
    ll ans = 1;
    while(b > 0) {
        if((b & 1) == 1) ans *= a;
        a *= a;
        b = b >> 1;
    }
    return ans;
}

ll binpowmod(ll a,ll b) {
    ll ans = 1;
    while(b > 0) {
        if((b & 1) == 1) {
        	ans *= a;
        	ans %= mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return ans;
}


ll gcd(ll a,ll b) {
	if(b == 0) return a;
	return gcd(b, a % b);
}

ll lcm(ll a,ll b) {
	return (a / gcd(a,b)) * b;
}

const ll MAX = 2e5 + 7;
vector<ll> fact(MAX);
 
ll add(ll a, ll b) {
	return (a + b) % mod;
}
 
ll sub(ll a, ll b) {
	return ((a - b) % mod + mod) % mod;
}
 
ll mult(ll a, ll b) {
	return ((a * b) % mod);
}

ll inv(ll a) {
	return binpowmod(a, mod - 2);
}
 
ll divide(ll a, ll b) {
	return mult(a, inv(b));
}
 
ll nCr(ll n, ll r) {
	if(n < r) return 0;
	return divide(fact[n], mult(fact[r], fact[n - r]));
}
 
void preFactorial() {
	fact[0] = 1;
	for(ll i = 1; i < MAX; i++) fact[i] = mult(i, fact[i - 1]);
}

bool isVowel(char c) {
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
	return false;
}

bool isSame(ll n, ll arr[]) {
	for(ll i = 0; i < n; i++) {
		if(arr[i] != arr[0]) return false;
	}
	return true;
}

bool isSame(ll n, vector<ll> &arr) {
	for(ll i = 0; i < n; i++) {
		if(arr[i] != arr[0]) return false;
	}
	return true;
}

bool isSorted(ll n, ll arr[]) {
	for(ll i = 1; i < n; i++) {
		if(arr[i] < arr[i - 1]) return false;
	}
	return true;
}

bool isSorted(ll n, vector<ll> &arr) {
	for(ll i = 1; i < n; i++) {
		if(arr[i] < arr[i - 1]) return false;
	}
	return true;
}

void inputArr(ll n, ll arr[]) {
	for(ll i = 0; i < n; i++) cin >> arr[i];
}

void inputArr(ll n, vector<ll> &arr) {
	ll x;
	for(ll i = 0; i < n; i++) {
		cin >> x;
		arr.push_back(x);
	}
}

void printArr(ll n, ll arr[]) {
	for(ll i = 0; i < n; i++) cout << arr[i] << " ";
	cout << nl;
}

void printArr(ll n, vector<ll> &arr) {
	for(ll i = 0; i < n; i++) cout << arr[i] << " ";
	cout << nl;
}

ll sumOfArr(ll n, ll arr[]) {
	ll ans = 0;
	for(ll i = 0; i < n; i++) ans += arr[i];
	return ans;
}

ll sumOfArr(ll n, vector<ll> &arr) {
	ll ans = 0;
	for(ll i = 0; i < n; i++) ans += arr[i];
	return ans;
}

bool isPrime(ll n) {
	if(n == 1) return false;
	for(ll i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return false;
	}
	return true;
}

ll countSetBits(ll n) {
	ll ans = 0;
	while(n) {
		ans++;
		n = n & (n - 1);
	}
	return ans;
}

vector<ll> primeFactorization(ll n) {
	vector<ll> factors;
	for(ll i = 2; i * i <= n; i++) {
		ll cnt = 0; 
		while(n % i == 0) {
			cnt++;
			n /= i;
			factors.push_back(i);
		}
	}
	if(n > 1) factors.push_back(n);
	return factors;
}

bool isPalindrome(string s) {
	ll i = 0;
	ll j = s.size() - 1;
	while(i <= j) {
		if(s[i] != s[j]) return false;
		i++;
		j--;
	}
	return true;
}

// ----------- Code Starts Here ----------- //

bool isPossible(ll l, ll r, ll mid, vector<vector<ll>> &pref) {

	ll curr = 0;

	for(ll i = 0; i < 32; i++) {
		ll ss = pref[mid][i];
		if(l != 0) ss -= pref[l - 1][i];
		if(ss == mid - l + 1) curr += (1 << i);
	}

	return curr >= r;

}

ll binarySearch(ll l, ll r, ll arr[], ll n, vector<vector<ll>> &pref) {

	ll low = l;
	ll high = n - 1;

	ll ans = -1;

	while(low <= high) {

		ll mid = low + (high - low) / 2;
		if(isPossible(l, r, mid, pref)) {
			ans = mid;
			low = mid + 1;
		} else high = mid - 1;

	}
	return ans == -1 ? ans : ans + 1;

}

void solve() 
{
	ll n;
	cin >> n;

	ll arr[n];
	inputArr(n, arr);

	ll q;
	cin >> q;

	vector<vector<ll>> pref(n, vector<ll> (32, 0));
	for(ll i = 0; i < n; i++) {

		ll v = arr[i];
		ll p = 0;
		while(v > 0) {
			if(v % 2 != 0) pref[i][p] += 1;
			v /= 2;
			p++;
		}

		if(i != 0) {
			for(ll j = 0; j < 32; j++) pref[i][j] += pref[i - 1][j];
		}

	}

	for(ll i = 0; i < q; i++) {

		ll l, r;
		cin >> l >> r;

		--l;

		ll ind = binarySearch(l, r, arr, n, pref);

		cout << ind << " ";

	}

	cout << nl;

}

int main()
{
	file();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}

*/

