//motivation pour aller de l'avant:
//Essayez plus fort
//ça va bien
//ne jamais abandonner

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vl = vector<ll>;
#define pb push_back
#define all(a) a.begin(), a.end()
#define vsort(a) sort(all(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define vite ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll N=1e9+7;


void solve()
{
    ll n; cin>>n;
    vl aln(n);

    for(int i=0; i<n; i++){
        cin>>aln[i];
    }

    ll maxio=1;
    for(int i=0; i<n; i++){
        if(aln[i]<maxio){
            aln[i]=maxio;
            maxio++;
        }
        else if(aln[i]==maxio){
            aln[i]=maxio+1;
            maxio+=2;
        }
        else{
            aln[i]=maxio;
            maxio++;
        }
    }
    ll hghg=vmax(aln);

    cout<<hghg<<endl;
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
