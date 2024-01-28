//accepted
//https://codeforces.com/contest/1712/problem/C

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
    int n; cin>>n;
    set<int> st;
    int mark[(int)1e5+7]={0}, a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mark[a[i]]++;
        st.insert(a[i]);
    }
    if(st.size()==1)
    {
        cout<<0<<endl;
    }
    else
    {
        int num=a[n-1], pass=0;
        for(int i=n-1; i>=0; i--)
        {
            int cnt=mark[a[i]], num=a[i]; 
            int flag=0;
            while(cnt--)
            {
                if(a[i]!=num)
                {
                    flag++;
                    break;
                }
                i--;
            }
            i++;
            if(flag)
            {
                break;
            }
            else
            {
                pass++;
                if(a[i-1]>a[i] || i==0)
                break;
            }
        }
        cout<<st.size()-pass<<endl;
    }
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
