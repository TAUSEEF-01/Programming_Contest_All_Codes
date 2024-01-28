//accepted
//https://codeforces.com/contest/252/problem/A


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>; 


void Little_Xor()
{
    ll n;
    cin>>n;
    vl distinct_nums;

    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        distinct_nums.push_back(x);
    }

    ll ans=0;

    for(int i=0; i<distinct_nums.size(); i++)
    {
        ll num=distinct_nums[i];
        if(num>ans) ans= num;
        for(int j=i+1; j<distinct_nums.size(); j++)
        {
            num^=distinct_nums[j];
            if(num>ans) ans= num;
        }
    }

    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    Little_Xor();

    return 0;
}
