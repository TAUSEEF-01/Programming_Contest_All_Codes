//accepted
//https://codeforces.com/contest/1870/problem/A


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


void solutionner()
{
    int n, k, x; cin>>n>>k>>x;
    if(k>n || k>(x+1)){
        cout<<-1<<endl;
        return;
    }

    int reso=0, ncop=n;

    if(k<=x){
        for(int i=0; i<k; i++){
            reso+=i;
        }
        if(k!=x)
        reso+=(n-k)*x;
        else
        reso+=(n-k)*(x-1);
    }
    else{
        for(int i=0; i<min(n, x); i++){
            reso+=i;
        }
        reso+=(n-min(n, x))*x;
    }
    cout<<reso<<endl;
}


int main()
{
    vite;
    
    int cas_de_test;
    cin>> cas_de_test;

    while(cas_de_test--)
    {
        solutionner();
    }

    return 0;
}