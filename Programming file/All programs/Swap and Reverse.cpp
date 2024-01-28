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
    string a, x="", y="", last="";
    cin>>a;
    vsort(a);
    cout<<a<<endl;
    // for(int i=0; i<n; i++)
    // {
    //     if(i%2==0)
    //     x+=a[i];
    //     else 
    //     y+=a[i];
    // }

    // vsort(x);
    // vsort(y);

    // for(int i=0; i<n/2; i++)
    // {
    //     last+=x[i];
    //     last+=y[i];
    // }
    // if(n&1) last+=x[n/2];
    // cout<<last<<endl;
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



//string s = "dog:cat";  int pos = s.find(":");  string sub = s.substr(pos + 1);   // Copy substring after pos; -->  String is: cat
//string s1 = "Geeks";   string r = s1.substr(3, 2);   // Copy two characters of s1 (starting from position 3); -->  String is: ks
