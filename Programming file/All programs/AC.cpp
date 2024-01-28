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
    string a, p, current;
    stack<string> backward, forward;
    current="http://www.lightoj.com/";
    backward.push(current);

    while(1)
    {
        cin>>a;
        if(a=="QUIT") return;
        else if(a=="VISIT")
        {
            cin>>p;
            current=p;
            cout<<p<<endl;
            backward.push(current);
            while(!forward.empty()) 
            {
                forward.pop();
            }
        }
        else if(a=="BACK") 
        {
            if(current=="http://www.lightoj.com/")
            {
                cout<<"Ignored"<<endl;
                current="http://www.lightoj.com/";
            }
            else
            {
  
                forward.push(current);
                backward.pop();
                current=backward.top();
                cout<<current<<endl;
            }
        }
        else if(a=="FORWARD")
        {
            if(forward.empty())
            {
                cout<<"Ignored"<<endl;
            }
            else
            {
                current=forward.top();
                backward.push(current);
                cout<<current<<endl;
                forward.pop();
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<":\n";
        solve();
    }

    return 0;
}

