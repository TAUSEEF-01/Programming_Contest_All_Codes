//accepted
//https://codeforces.com/contest/1857/problem/C

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
#define sortv(a) sort(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())
#define maxv(a) *max_element(a.begin(), a.end())
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
    vl a(n*(n-1)/2);
    vl position(n, (ll)1e10);
    map<ll, ll> str;

    for(auto &inp: a){
        cin>> inp;
        str[inp]++;
    }

    for(auto &x: str){
        while(x.second>0){
            for(int i=0; i<n; i++){
                if(position[i]==(ll)1e10 && x.second>=((n-1)-i)){
                    position[i]=x.first;
                    x.second=x.second - ((n-1)-i);
                    break;
                }
            } 
        }

    }

    for(int i=0; i<n; i++){
        if(position[i]==(ll)1e10) cout<<(ll)1e9<<' ';
        else cout<<position[i]<<' ';
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
