//accepted
//https://codeforces.com/contest/1875/problem/A

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
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

/*

3--> 
2 /
1 2--> /
1 2--> /
1 5--> /
4 /
3 /
2 /
1 /
0 /

*/

/*

2-->
1 2--> /
1 2--> /
1 2--> /
1 /
0 /

*/


void resoudre()
{
    ll a, b, n;
    cin>>a>>b>>n;

    ll sum=0, cnt=0;
    sum+=b;
    
    vector<ll> x(n);
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
        // sum += min(a - 1, x[i]); //--> sln
        sum+=min(x[i], a);
        if(x[i]>=a) cnt++;
    }
    
    cout<<sum-cnt<<endl;
}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}