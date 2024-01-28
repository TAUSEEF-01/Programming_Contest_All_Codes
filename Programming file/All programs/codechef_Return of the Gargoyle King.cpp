#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define vsort(a) sort(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const int N=1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(1010, 0), p;
    vector<char>b[n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            char x;
            cin>>x;
            b[i].push_back(x);
            if(x=='T')
            a[j+1]++;
            else
            a[j+1]--;
        }
    }

    // int maxi=vmax(a);
    // if(maxi<=0)
    // {
    //     cout<<0<<endl;
    //     return;
    // }

    int mx=-INT_MAX, mark=1;
    for(int i=1; i<=n; i++)
    {
        if(a[i]>mx)
        {
            mark=i-1;
            mx=a[i];
        }
    }
    int ctr=0;
    for(int i=mark; i<=mark; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(b[i][j]=='T')
            ctr++;
        }
    }

    // for(int i=1009; i>=0; i--)
    // {
    //     if(a[i]==maxi)
    //     ctr++;
    //     else
    //     break;
    // }
    cout<<ctr<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // int t;
    // cin>>t;
    
    // while(t--)
    // {
        solve();
    // }

    return 0;
}
