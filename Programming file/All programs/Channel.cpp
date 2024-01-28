//accepted
//https://codeforces.com/contest/1863/problem/A

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
    int n, a, q;
    cin>>n>>a>>q;
    string stro;
    cin>>stro;
    int maxi=a, cplusi=0, ina=a;
    for(int i=0; i<q; i++)
    {
        if(stro[i]=='+') a++, maxi=max(maxi, a), cplusi++;
        else a--;
    }
    if(maxi>=n) cout<<"YES\n";
    else if(maxi<n && ina+cplusi>=n) cout<<"MAYBE\n";
    else cout<<"NO\n";
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
