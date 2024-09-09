#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

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
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

const int M = 2e5 + 10;
vector<int> g[M];
map<int, int> vis;

bool valid_bfs(vector<int> &v)
{
    int n = v.size();
    queue<set<int>> q;
    set<int> s;
    s.insert(1);

    q.push(s);
    int i = 0;

    while (!q.empty() && i < n)
    {
        if (vis.count(v[i]))
        {
            return 0;
        }
        vis[v[i]] = 1;

        // if all the children of previous
        // nodes are visited then pop the
        // front element of queue.
        if (q.front().size() == 0)
        {
            q.pop();
        }

        // if the current element of the
        // permutation is not found
        // in the set at the top of queue
        // then return false
        if (q.front().find(v[i]) == q.front().end())
        {
            return 0;
        }
        s.clear();

        // push all the children of current
        // node in a set and then push
        // the set in the queue.
        for (auto j : g[v[i]])
        {
            if (vis.count(j))
            {
                continue;
            }
            s.insert(j);
        }
        if (s.size() > 0)
        {
            set<int> temp = s;
            q.push(temp);
        }
        s.clear();

        // erase the current node from
        // the set at the top of queue
        q.front().erase(v[i]);

        // increment the index
        // of permutation
        i++;
    }

    return 1;
}

void solve()
{
    int n;
    cin >> n;

    loop(i, 0, n - 1)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vi check(n);
    input(check);

    if (valid_bfs(check))
        cout << "Yes\n";
    else
        cout << "No\n";
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
