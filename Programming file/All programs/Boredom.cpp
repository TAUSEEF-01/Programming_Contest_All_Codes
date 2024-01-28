//accepted
//https://codeforces.com/contest/455/problem/A



//accepted
//AlphaQ sln
//dp techniques to learn


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll N = 100005;

ll Count[N], DP[N];

ll Call (ll n) {
	if (n == 0) return 0;
	if (n == 1) return Count[1];
	if (DP[n] != -1) return DP[n];
	return DP[n] = max(Call(n - 1), Call(n - 2) + Count[n] * n);
}

int main() {
	memset(DP, -1, sizeof DP);
	memset(Count, 0, sizeof Count);
	ll n, m = 0; cin >> n;
	for (int i = 0; i < n; i++) {
		ll x; cin >> x;
		Count[x]++; 
		m = max(x, m);
	}
	cout << Call(m + 1) << endl;
	return 0;
}



/*

//my sln:
//sln watched

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev reverse(s.begin(), s.end())
#define ssort sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    set<int>a;
    vector<ll>x, b(1000000, 0);
    for(int i=0; i<n; i++)
    {
        int p;
        cin>>p;
        a.insert(p);
        b[p]++;
    }

    if(a.size()==1)
    {
        cout<<smax(a)*b[smax(a)]<<endl;
        return;
    }

    vector<ll>f(n+10, 0);
    f[0]=0;
    f[1]=b[1];
    for(int i=0; i<=n; i++)
    {
        f[i+2]=max(f[i+1], f[i]+(i+2)*b[i+2]);
    }
    cout<<f[n]<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}



*/