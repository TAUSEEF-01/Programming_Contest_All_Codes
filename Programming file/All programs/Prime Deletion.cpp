//accepted
//https://codeforces.com/contest/1861/problem/A

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
    cout<<a[0];
    if(a[0]=='1') cout<<"3";
    else if(a[0]=='2') cout<<"3";
    else if(a[0]=='3') cout<<"7";
    else if(a[0]=='4') cout<<"1";
    else if(a[0]=='5') cout<<"3";
    else if(a[0]=='6') cout<<"1";
    else if(a[0]=='7') cout<<"3";
    else if(a[0]=='8') cout<<"3";
    else if(a[0]=='9') cout<<"7";
    cout<<endl;
}

void solve2()
{
    string a;
    cin>>a;
    int flag=0;
    for(int i=0; i<9; i++)
    {
        if(a[i]=='3')
        {
            flag++;
            break;
        }
        else if(a[i]=='1')
        {
            break;
        }
    }
    if(flag)
    {
        cout<<"31\n";
    }
    else 
    {
        cout<<"13\n";
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
        // solve2();
    }

    return 0;
}
