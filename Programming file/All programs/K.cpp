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
    string a;
    unordered_map<string, int> mp;
    vector<string> str;
    while(cin>>a)
    {
        if(a=="#") break;

        str.push_back(a);
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        sort(a.begin(), a.end());
        mp[a]++;
    }
    set<string> x;
    for(int i=0; i<str.size(); i++)
    {
        string b=str[i];
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        sort(b.begin(), b.end());
        if(mp[b]==1)
        {
            x.insert(str[i]);
        }
    }
    for(auto &ss: x)
    cout<<ss<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();


    return 0;
}
