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

class Solution
{
private:
    void dfs(int u, vector<vector<int>> &g, bool vis[], bool tempVis[], stack<int> &stk, bool &result)
    {
        vis[u] = true;
        tempVis[u] = true;
        for (auto &v : g[u])
        {
            if (tempVis[v])
            {
                result &= false;
                return;
            }
            else if (!vis[v])
            {
                dfs(v, g, vis, tempVis, stk, result);
            }
        }
        tempVis[u] = false;
        stk.push(u);
    }

    void dfs(int u, vector<vector<int>> &g, bool vis[], bool tempVis[], bool &result)
    {
        vis[u] = true;
        tempVis[u] = true;
        for (auto &v : g[u])
        {
            if (tempVis[v])
            {
                result &= false;
                return;
            }
            else if (!vis[v])
            {
                dfs(v, g, vis, tempVis, result);
            }
        }
        tempVis[u] = false;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> g(numCourses + 1);

        for (int i = 0; i < prerequisites.size(); i++)
        {
            g[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        bool vis[numCourses + 1];
        bool tempVis[numCourses + 1];
        for (int i = 0; i <= numCourses; i++)
        {
            vis[i] = false;
            tempVis[i] = false;
        }

        bool result = true;
        for (int i = 0; i < numCourses; i++)
        {
            if (!result)
                return false;
            if (!vis[i])
                dfs(i, g, vis, tempVis, result);
        }

        return true;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> g(numCourses + 1);

        for (int i = 0; i < prerequisites.size(); i++)
        {
            g[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }

        bool vis[numCourses + 1];
        bool tempVis[numCourses + 1];
        for (int i = 0; i <= numCourses; i++)
        {
            vis[i] = false;
            tempVis[i] = false;
        }

        stack<int> stk;
        vector<int> ans;

        bool result = true;
        for (int i = 0; i < numCourses; i++)
        {
            if (!result)
                return ans;

            if (!vis[i])
            {
                dfs(i, g, vis, tempVis, stk, result);
            }
        }

        while (!stk.empty())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    Solution s;

    int n, f;
    cin >> n >> f;

    vector<vector<int>> v;

    for (int i = 0; i < f; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    if (s.canFinish(n, v))
    {
        yes;
    }
    else
    {
        no;
    }

    vector<int> a = s.findOrder(n, v);
    for (auto &num : a)
        cout << num << ' ';
    cout << endl;

    return 0;
}
