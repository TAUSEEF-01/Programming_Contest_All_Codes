//accepted
//https://codeforces.com/contest/1799/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int test; cin>>test;

    while(test--){
        int n, m; cin>>n>>m;
        vector<int> flag(1e5+10, 0), in;
        int cnt=0;
        for(int i=0; i<m; i++){
            int x; cin>>x;
            if(flag[x]==0){
                cnt++;
                flag[x]++;
            }
            in.push_back(cnt);
        }
        for(int i=1; i<=n; i++){
            int find=n-i+1;
            if(binary_search(in.begin(), in.end(), find)==true){
                cout<<lower_bound(in.begin(), in.end(), find) - in.begin() + 1<<' ';
            } else{
                cout<<-1<<' ';
            }
        }
        cout<<endl;
    }

    return 0;
}

