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
    unordered_map<string, vector<string>> a;
    
    while(1)
    {
        string s, ss="", sss="";
        getline(cin, s);
        if(s.length()==0) break;

        int ctr=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ' && ctr==0)
            {
                ctr++;
            }
            else if(ctr==1)
            {
                ss+=s[i];
            }
            else
            {
                sss+=s[i];
            }
        }
        a[ss].push_back(sss);
    }

    string s;
    while(1)
    {
        getline(cin, s);
        if(s.length()==0) break;
        if(a[s].size()==0) cout<<"eh"<<endl;
        else cout<<a[s][0]<<endl;
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