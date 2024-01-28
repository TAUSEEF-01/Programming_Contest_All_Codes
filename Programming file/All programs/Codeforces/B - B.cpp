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
    char a;
    cin>>a;
    // cout<<a<<endl;

    string s;
    cin>>s;
    // cout<<s<<endl;
    int n=s.size();
    if(a=='E')
    {
        s.push_back('~');
        
        for(int i=0; i<n; i++)
        {
            int ctr=0;
            cout<<s[i];
            while(s[i]==s[i+1])
            {
                ctr++;
                i++;
            }
            cout<<ctr+1;
        }
        cout<<endl;
    }
    else 
    {
        for(int i=0; i<n; i+=2)
        {
            char ch=s[i];
            int p=s[i+1]-'0';
            while(p--)
            cout<<ch;
        }
        cout<<endl;
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









            // if(!(s[i]>='0' && s[i]<='9'))
            // {
            //     ch=s[i];
            // }
            // else 
            // {
            //     int p=s[i]-'0';
            //     while(p--)
            //     cout<<ch;
            // }