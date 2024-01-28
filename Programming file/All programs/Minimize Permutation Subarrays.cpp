//accepted
//https://codeforces.com/contest/1838/problem/B

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
    int n;
    cin>>n;
    vector<int> a(n+1), b;
    int mark1, mark2, mark3;
    for(int i=1; i<=n; i++)
    {
        cin>> a[i];
        if(a[i]==1) mark1=i;
        else if(a[i]==2) mark2=i;
        else if(a[i]==n) mark3=i;
    }

    if((mark2<mark3 && mark3<mark1) || (mark2>mark3 && mark3>mark1)) cout<<mark3<<' '<<mark3<<endl;
    else if((mark2<mark1 && mark3>mark1) || (mark2>mark1 && mark3<mark1)) cout<<mark1<<' '<<mark3<<endl;
    else cout<<mark2<<' '<<mark3<<endl;

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
