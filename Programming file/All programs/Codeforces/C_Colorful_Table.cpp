// accepted
// https://codeforces.com/contest/1870/problem/C

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
    int n, k;
    cin>>n>>k;

    vb present(k+1, false);
    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        present[a[i]]=true;
    }

    vi pref_max, suff_max;

    int emax=a[0];
    for(int i=0; i<n; i++)
    {
        emax=max(emax, a[i]);
        pref_max.push_back(emax);
    }

    emax=a[n-1];
    for(int i=n-1; i>=0; i--)
    {
        emax=max(emax, a[i]);
        suff_max.push_back(emax);
    }

    for(int i=1; i<=k; i++)
    {
        if(!present[i])
        {
            cout<<"0 ";
        }
        else
        {
            int l=0, r=0;
            l=lower_bound(pref_max.begin(), pref_max.end(), i) - pref_max.begin();
            r=lower_bound(suff_max.begin(), suff_max.end(), i) - suff_max.begin();
            r=n-r;
            cout<<(r-l)*2<<' ';
        }
    }
    cout<<endl;
}


int main()
{
    fast;
    
    // setIO();

    int test=1; 
    cin>>test;

    while(test--) 
    resoudre();

    return 0;
}

