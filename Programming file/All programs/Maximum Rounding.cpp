//accepted
//https://codeforces.com/contest/1857/problem/B

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
    cin>>a;
    int sz=a.size();
    if(sz==1)
    {
        if(a[0]-'0'<5) cout<<a[0]<<endl;
        else cout<<10<<endl;
        return;
    }
    if(a[0]-'0'>=5)
    {
        cout<<1;
        for(int i=0; i<sz; i++) cout<<0;
        cout<<endl;
    }
    else 
    {
        int ind=-2;
        int flag=0;
        for(int i=0; i<sz; i++)
        {
            if(a[i]-'0'>=5) 
            {
                if(a[i-1]=='4')
                {
                    for(int j=i-1; j>=0; j--)
                    {
                        if(a[j]=='4')
                        {
                            ind=j-1;
                            flag++;
                        }
                        else
                        {
                            flag++;
                            break;
                        }
                    }
                }

                if(flag!=0) break;

                ind=i-1;
                flag++;
                break;
            }            
        }
        
        if(ind==-2)
        {
            cout<<a<<endl;
            return;
        }
        if(ind==-1)
        {
            cout<<1;
            for(int i=0; i<sz; i++) cout<<0;
            cout<<endl;
            return;
        }

        for(int i=0; i<ind; i++) cout<<a[i];
        cout<<a[ind]-'0'+1;
        for(int i=ind+1; i<sz; i++) cout<<0;
        cout<<endl;
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
