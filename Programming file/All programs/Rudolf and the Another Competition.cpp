//accepted
//https://codeforces.com/contest/1846/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define ub_pos(a, x)     upper_bound(a.begin(), a.end(), x) - a.begin()
#define lb_pos(a, x)     lower_bound(a.begin(), a.end(), x) - a.begin()
#define srev(s) reverse(s.begin(), s.end())
#define ssort(s) sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    int n, m, h;
    cin>>n>>m>>h;
    vector<vector<int>>a(n, vector<int>(m));
    ll r_point=0, r_penalty=0;
    vector<ll> x, p;
    for(int i=0; i<n; i++)
    {
        ll sum=0, penalty=0, ctr=0;
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }

        vsort(a[i]);

        for(int j=0; j<m; j++)
        {
            sum+=a[i][j];
            penalty+=sum;
            if(sum<=h)
            {
                ctr++;
            }
            else
            {
                penalty-=sum;
                break;
            }
        }

        if(i==0)
        {
            r_point=ctr;
            r_penalty=penalty;
        }
        if(ctr==r_point)
        {
            x.push_back(penalty);
        }
        p.push_back(ctr);
    }

    vsort(p);
    vsort(x);

    int position;
    position=upper_bound(p.begin(), p.end(), r_point) - p.begin();
    position=n-position;
    position+=lower_bound(x.begin(), x.end(), r_penalty) - x.begin();

    cout<<position+1<<endl;
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

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
