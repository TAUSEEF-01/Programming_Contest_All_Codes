//accepted
//https://codeforces.com/contest/1863/problem/B

//motivation pour aller de l'avant:
//Essayez plus fort
//ça va bien
//ne jamais abandonner

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
#define pb push_back
#define allo(a) a.begin(), a.end()
#define vsort(a) sort(allo(a))
#define vmin(a) *min_element(allo(a))
#define vmax(a) *max_element(allo(a))
#define vite ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    vi per(n+1), pos(n+10);
    for(int i=1; i<=n; i++) cin>>per[i], pos[per[i]]=i;
    int comte=0;

    for(int i=1; i<=n; i++)
    {
        if(pos[i-1]>pos[i]) comte++;
    }

    cout<<comte<<endl;
}


int main()
{
    vite;
    
    int cas_de_test;
    cin>> cas_de_test;

    while(cas_de_test--)
    {
        solve();
    }

    return 0;
}











// for(int i=0; i<n-1; i++)
        // {
        //     if(per[i]>per[i+1]) comte++;
        // }
        