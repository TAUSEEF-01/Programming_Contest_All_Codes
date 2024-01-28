//accepted
//https://codeforces.com/contest/1848/problem/B

//sln watched; code written by me;

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
const ll N=1e9+7;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<vector<int>>a(n+10);

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        a[x].push_back(i);
    }
    int mini=INT_MAX;
    for(int i=1; i<=k; i++)
    {
        if(a[i].size()==0)
        {
            continue; //if a color is not given then we will not count that
        }

        int maxi=-INT_MAX;
        vector<int>p;
        int s=a[i].size()-1;
        p.push_back(a[i][0]-1); //distance from beginning 
        p.push_back(n-a[i][s]); //distance from end
        if(a[i].size()>1)
        {
            for(int j=0; j<a[i].size()-1; j++)
            {
                p.push_back(abs(a[i][j+1]-a[i][j])-1); //distance from one to another pile of same color
            }
        }
        vsort(p); //sorting the value so that the highest and 2nd highest value can easily found
        s=p.size();
        maxi=max(p[s-1]/2, p[s-2]); //maximum of p divided by 2 because we can paint one color once that is the middle one to shorten the longest distance

        mini=min(mini, maxi); //taking the minimum possible value
    }
    cout<<mini<<endl;
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

