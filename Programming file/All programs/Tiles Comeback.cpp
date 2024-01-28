//accepted
//https://codeforces.com/contest/1851/problem/C

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
    int n, k;
    cin>>n>>k;
    vector<ll> a(n);
    unordered_map<int, int> b, c;
    set<int> x;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    
    if(c[a[n-1]]==n)
    {
        cout<<"YES\n";
        return;
    }

    if(c[a[n-1]]<k || c[a[0]]<k)
    {
        cout<<"NO\n";
        return;
    }
    else
    {
        if(a[n-1]==a[0])
        {
            cout<<"YES\n";
            return;
        }
        int mm=c[a[n-1]];
        int mark=a[n-1], flag=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==mark) 
            {
                mm--;
                if(mm<k)
                break;
            }
            else if(a[i]==a[0])
            {
                b[a[0]]++;
                if(b[a[0]]>=k)
                flag++;
            }
        }
        if(flag!=0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        return;
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
