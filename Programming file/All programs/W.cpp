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
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) return;

        multiset<ll> a;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.insert(x);
        }
        multiset<ll> ::iterator it1, it2;
        ll mark;
        while(n--)
        {
            it1=a.begin();
            it2=it1;
            it2++;
            mark=(*it1)+(*it2);
            sum+=mark;
            a.erase(it1);
            a.erase(it2);
            a.insert(mark);

            if(a.size()==1) break;
        }
        cout<<sum<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    solve();

    return 0;
}