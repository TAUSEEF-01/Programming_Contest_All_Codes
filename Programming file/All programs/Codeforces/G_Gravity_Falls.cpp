// accepted
// https://codeforces.com/gym/104010/problem/H

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);


// If its left tree is higher than its right tree, the lamp lights up gold, otherwise it lights up silver.
// l>r --> gold; l<r --> silver
// 5 * 4 * 3 * 1 * 2 --> * is lamp
//   B   A   B   A

void solve()
{
    int n;
    cin>>n;

    string a;
    cin>>a;

    vector<int> flag(n+2, 0);

    int hi=n+1, lo=1, c=1;
    vector<int> pos(n+1);

    for(int i=0; i<n; i++)
    {
        if(a[i]=='A')
        {
            if(c&1)
            {
                flag[hi]++;
                pos[i]=hi--;
            }
            else
            {
                flag[lo]++;
                pos[i]=lo++;
            }
            c++;
        }
    }

    int lol=hi;
    for(int i=0; i<n+1; i++)
    {
        if(pos[i]==0)
        {
            while(flag[hi]!=0) 
            {
                hi--;
            }
            pos[i]=hi--;
        }
    }

    for(auto &x: pos) cout<<x<<' ';
    cout<<endl;

}    


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    int t=1;
    // cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}

