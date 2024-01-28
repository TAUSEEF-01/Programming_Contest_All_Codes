#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}



void resoudre()
{   
    string a;
    cin>>a;

    int c1=0, c2=0, mki=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='(') c1++;
        else c2++;
        if(i>0 && a[i]==a[i-1]) mki++;
    }
    if(a.size()==2 && a[0]=='(' && a[1]==')')
    {
        cout<<"NO\n";
        return;
    }

    int flag=0, mx=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='(') mx++;
        else mx--;
        if(mx<0) 
        {
            flag++;
            break;
        }
    }

        cout<<"YES\n";
        if(mki!=0)
        {
            for(int i=0; i<a.size(); i++)
            {
                cout<<"()";
            }
        }
        else
        {
            for(int i=0; i<a.size(); i++) cout<<'(';
            for(int i=0; i<a.size(); i++) cout<<')';
        }
        cout<<endl;
}


int main()
{
    fast;
    // setIO();

    int test;
    cin>>test;

    while(test--)
    resoudre();

    return 0;
}

