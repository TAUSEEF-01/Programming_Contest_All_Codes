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
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);

void solve()
{
    int n;
    cin >> n;

    string a[n];
    int pos1 = n, pos2 = n, pos3 = 0, pos4 = 0;
    int sum = 0;

    set<int> st1, st2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int ok = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '1')
            {
                sum += 1;
                if (ok == 0)
                {
                    st1.insert(j);
                    ok = 1;
                }
            }
            if (ok == 1 && (a[i][j] == '0' || j == n - 1))
            {
                st2.insert(j);
                break;
            }
        }
    }

    if (sum == 1)
    {
        cout << "SQUARE\n";
        return;
    }

    if (floor(sqrt(sum)) * floor(sqrt(sum)) != sum)
    {
        cout << "TRIANGLE\n";
        return;
    }

    int flag = 1;

    if (st1.size() == 1 && st2.size() == 1)
        flag = 1;
    else
        flag = 0;

    if (flag)
    {
        cout << "SQUARE\n";
    }
    else
    {
        cout << "TRIANGLE\n";
    }
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
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

// int pos3=-1, pos4=-1;
// for(int i=n-1; i>=0; i--)
// {
//     for(int j=0; j<n; j++)
//     {
//         if(pos3==-1 && a[i][j]=='1')
//         {
//             pos3=i;
//             pos4=j;
//         }
//     }
// }

// if(pos2 > pos4)
// {
//     int flag=1, p=1;
//     for(int i=pos1; i<=pos3; i++)
//     {
//         int cnt=0;
//         for(int j=i-1; j<=i+1; j++)
//         {
//             if(a[i][j]=='1')
//             cnt++;
//         }
//         if(cnt!=p)
//         {
//             flag=0;
//             break;
//         }
//     }
//     if(flag)
//     {
//         cout << "TRIANGLE\n";
//         return;
//     }
//     else
//     {
//         cout << "SQUARE\n";
//         return;
//     }
// }
// else
// {
//     int flag=1, p=1;
//     for(int i=pos3; i>=pos1; i--)
//     {
//         int cnt=0;
//         for(int j=pos1; j<i-1; j++)
//         {
//             if(a[i][j]=='1')
//             cnt++;
//         }
//         if(cnt!=p)
//         {
//             flag=0;
//             break;
//         }
//     }
//     if(flag)
//     {
//         cout << "TRIANGLE\n";
//         return;
//     }
//     else
//     {
//         cout << "SQUARE\n";
//         return;
//     }
// }
