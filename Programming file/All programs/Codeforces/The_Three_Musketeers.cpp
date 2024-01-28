// accepted
// https://www.hackerearth.com/problem/algorithm/the-three-musketeers-6efd5f2d/?purpose=login&source=problem-page&update=google

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;
const double pi=acos(-1);



vector<string> subsets(string &nums) 
{
    int n=nums.size();
    int subset_cnt=(1<<n);

    vector<string> all_subsets;
    for(int mask=0; mask<subset_cnt; mask++)
    {
        string subset;
        for(int i=0; i<n; i++)
        {
            if((mask & (1<<i)) != 0)
            { 
                subset.push_back(nums[i]);
            }
        }
        if(subset.size()) all_subsets.push_back(subset);
    }
    return all_subsets;
}


bool vowel(char ch)
{
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}


void solve()
{
    int n;
    cin>>n;

    vector<string> a(n);
    for(auto &x: a) cin>>x;

    unordered_map<string, int> hsh;
    for(int i=0; i<n; i++)
    {
        set<char> distinct_vowel;
        for(int j=0; j<a[i].size(); j++)
        {
            if(vowel(a[i][j]))
            {
                distinct_vowel.insert(a[i][j]);
            }
        }
        string vowel_str;
        if(distinct_vowel.size()>0)
        {
            for(auto &ch: distinct_vowel)
            {
                vowel_str.push_back(ch);
            }
        
            vector<string> all_subsets=subsets(vowel_str);
            for(auto &subset: all_subsets)
            {
                hsh[subset]++;
            }
        }
    }

    ll ans=0;
    for(auto &x: hsh)
    {
        // cout<<x.first<<' '<<x.second<<endl;
        if(x.second<3) continue;
        ll sz=x.second;
        ll  possible=sz*(sz-1)*(sz-2)*1LL/6; // szC3 --> combination

        // inclusion exclusion technique --> if sz if even then we have to - its value, otherwise we need to add the value
        // (a U b U c) = a + b + c - (a intersection b) - (a intersection c) - (b intersection c) + (a intersection b intersection c)
        // here a, b, c and (a intersection b intersection c) --> odd number of sets --> thats why we add
        // here (a intersection b), (a intersection c), (b intersection c) --> even number of sets --> thats why we subtract

        if(x.first.size()%2==0) ans -= possible;
        else ans += possible;        
    }

    cout<<ans<<endl;
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
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        // cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
