// accepted
// https://codeforces.com/contest/1826/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev(s) reverse(s.begin(), s.end())
#define ssort(s) sort(s.begin(), s.end())
#define smax(a) *(a.rbegin()) // 1st check this condition --> if (!a.empty())
#define smin(a) *a.begin()    // 1st check this condition --> if (!a.empty())
const double pi = 3.141592653589793238462643383279502884197169399375105820974944;
const ll N = 1e9 + 7;
// priority_queue<ll>a;
// string s = "dog:cat";  int pos = s.find(":");  string sub = s.substr(pos + 1);   // Copy substring after pos; -->  String is: cat
// string s1 = "Geeks";   string r = s1.substr(3, 2);   // Copy two characters of s1 (starting from position 3); -->  String is: ks

const ll int pr = 1e6 + 10;

vector<bool> isPrime(pr, 1);
vector<ll int> lp(pr, 0), hp(pr, 0);

void prime_array()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < pr; ++i)
    {
        if (isPrime[i] == true)
        {
            lp[i] = hp[i] = i;

            for (int j = 2 * i; j < pr; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    
    cout << ((n == 1 || lp[n] > m) ? "YES\n" : "NO\n");

    /*
    lp[n] = 19, m = 17;
    19 --> 17 --> 2
    19 --> 2 --> 1

    lp[n] = 17, m = 19;
    17 --> 19 --> 17 
    17 --> 17 --> 0
    */
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

    prime_array();

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}