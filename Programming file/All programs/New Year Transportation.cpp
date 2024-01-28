//accepted
//https://codeforces.com/contest/500/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n, t;
    cin>>n>>t;
    vector<int> a(n), b;
    b.push_back(1);
    for(int i=0; i<n-1; i++){
        cin>>a[i]; 
    }
    for(int i=1; i<n; i++){
        b.push_back(a[i-1]+i);
        i=a[i-1]+i-1;
    }
    auto it=find(b.begin(), b.end(), t);
    if(it!= b.end()) cout<<"YES\n";
    else cout<<"NO\n";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    answer();

    return 0;
}
