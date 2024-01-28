//accepted
//https://codeforces.com/problemset/problem/1283/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int h, m;
    cin>>h>>m;
    int time=24*60-(h*60+m);
    cout<<time<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
