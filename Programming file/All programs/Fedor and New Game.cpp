//accepted
//https://codeforces.com/contest/467/problem/B


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void game()
{   
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> army(m+1);
    for(auto &num: army) 
    cin>>num;

    int check, fedor=army[m];
    int cnt=0;

    for(int i=0; i<m; i++)
    {
        bitset<24> f(fedor), s(army[i]);
        int diff=0;
        for(int i=0; i<24; i++)
        {
            if(f[i]!=s[i])
            diff++;
        }
        if(diff<=k)
        cnt++;
    }

    cout<<cnt<<endl;
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    game();

    return 0;
}
