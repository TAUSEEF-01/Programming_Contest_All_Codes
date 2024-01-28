//accepted
//https://codeforces.com/contest/1836/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;



void solve()
{
    int n;
    cin>>n;
    vector<int>a(n), b(200);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }

    int flag=0, maxi=vmax(a);
    for(int i=0; i<maxi; i++)
    {
        if(b[i]<b[i+1])
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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