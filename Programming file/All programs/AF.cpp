#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    ll n, id, assumption=0, ctr=0;
    char ch;
    cin>>n;
    set<ll> a;
    for(int i=0; i<n; i++)
    {
        cin>>ch>>id;
        if(ch=='+')
        {
            assumption++;
            if(assumption>ctr)
            {
                ctr++;
            }
            a.insert(id);
        }
        else if(ch=='-')
        {
            if(a.count(id)==0)
            {
                ctr++;
            }
            else 
            {
                a.erase(id);
                assumption--;
            }
        }
    }
    cout<<ctr<<endl;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}