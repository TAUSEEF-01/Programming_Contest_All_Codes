// accepted
// https://leetcode.com/problems/subsets/description/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);

vector<vector<int>> subsets(vector<int>& nums) 
{
    int n=nums.size();
    int subset_cnt=(1<<n);

    vector<vector<int>> all_subsets;
    for(int mask=0; mask<subset_cnt; mask++)
    {
        vector<int> subset;
        for(int i=0; i<n; i++)
        {
            if((mask & (1<<i)) != 0)
            { 
                subset.push_back(nums[i]);
            }
        }
        all_subsets.push_back(subset);
    }
    // time complexity --> O(n*(2^n))
    return all_subsets;
}

void generate_subsets(vector<int>& a)
{
    vector<vector<int>> all_subsets=subsets(a);
    // print all the subsets:
    for(auto &subset: all_subsets)
    {
        for(auto &x: subset)
        {
            cout<<x<<' ';
        }
        cout<<endl;
    }
}


void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    generate_subsets(a);
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
