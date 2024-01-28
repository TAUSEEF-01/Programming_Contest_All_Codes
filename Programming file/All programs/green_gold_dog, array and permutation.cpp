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
#define all(a) a.begin(), a.end()
#define vsort(a) sort(all(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define vite ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll N=1e9+7;


void solve()
{
    int n; cin>> n;
    map<ll, deque<ll>> mp;
    priority_queue<ll> pq;
    vector<ll> era(n); for(auto &numo: era){
        cin>> numo; pq.push(numo);
    }

    ll cuto=1;

    while(!pq.empty()){
        ll nv=pq.top();
        pq.pop();
        mp[nv].push_back(cuto++);
    }
    
    for(int i=0; i<n; i++){
        ll eri=mp[era[i]].front();
        mp[era[i]].pop_front();
        cout<<eri<<' ';
    }
    cout<<endl;
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
