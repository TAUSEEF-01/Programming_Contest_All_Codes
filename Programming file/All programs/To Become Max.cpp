//accepted
//https://codeforces.com/problemset/problem/1856/C

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7, inf = 1e18;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void resoudre()
{
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    ll mx=-1e10;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mx=max(mx, a[i]);
    }

    ll lo=0, hi=mx+k+1, answer=0;
    vector<ll> b=a;
    while(lo<=hi){
        ll mid=(lo+hi)/2LL;

        if(mx>=mid)
        {
            answer=max(answer, mid);
            lo=mid+1LL;
            continue;
        }
        bool flag=false;
        for(int i=0; i<n-1; i++){
            ll kk=k;
            ll target=mid;
            for(int j=i; j<n; j++){
                if(kk<0) break;
                if(b[j]>=target){
                    flag=true;
                    break;
                }
                kk-=(target-b[j]);
                target--;
            }
            if(flag) break;
        }
        if(flag)
        {
            answer=max(answer, mid);
            lo=mid+1LL;
        }
        else
        {   
            hi=mid-1LL;
        }
    }
    cout<<answer<<endl;
}


int main()
{
    fastio;
    
    // #ifndef ONLINE_JUDGE
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    // #endif

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}







/*

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF (ll)1e16


int main(){
   Faster;
   int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;
      ll k;                cin>>k;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      ll mx=*max_element(a.begin(),a.end());

      auto Possible=[&](ll mid)->bool{
         if(mx>=mid)return true;

         for(int i=0;i<n-1;i++){

            vector<ll> b=a;
            ll temp=mid;
            
            int indx=i;
            ll target=mid;
            ll rem=k;
            while(true){
               if(indx==n or rem<0)break;
               if(b[indx]>=target){
                  return true;
               }
               rem-=(target-b[indx]);
               indx++;
               target--;

            }
         }


         return false;
      };

      ll ans=-1;
      ll low=0,high=INF;
      while(low<=high){
         ll mid=low+(high-low)/2LL;
         if(Possible(mid)){
            ans=mid;
            low=mid+1LL;
         }
         else{
            high=mid-1LL;
         }
      }

      cout<<ans<<endl;
   }
   return 0;
}

*/