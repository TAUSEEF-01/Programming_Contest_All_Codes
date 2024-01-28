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
    int n, m, x;
    cin>>n>>m;
    deque<int> a;
    string s;
    for(int i=0; i<m; i++)
    {
        cin>>s;
        if(s=="pushLeft")
        {
            cin>>x;
            if(a.size()<n)
            {
                a.push_front(x);
                cout<<"Pushed in left: "<<x<<endl;
            }
            else
            {
                cout<<"The queue is full"<<endl;
            }
        }
        else if(s=="pushRight")
        {
            cin>>x;
            if(a.size()<n)
            {
                a.push_back(x);
                cout<<"Pushed in right: "<<x<<endl;
            }
            else
            {
                cout<<"The queue is full"<<endl;
            }
        }
        else if(s=="popLeft")
        {
            if(!a.empty())
            {
                int p=a.front();
                a.pop_front();
                cout<<"Popped from left: "<<p<<endl;
            }
            else 
            {
                cout<<"The queue is empty"<<endl;
            }
        }
        else if(s=="popRight")
        {
            if(!a.empty())
            {
                int p=a.back();
                a.pop_back();
                cout<<"Popped from right: "<<p<<endl;
            }
            else
            {
                cout<<"The queue is empty"<<endl;
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
