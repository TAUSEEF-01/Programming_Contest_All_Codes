#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solution()
{
    int n; 
    cin>>n;
    int answer=1e9+7;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        answer=min(answer, (x-1)+(y+y%2)/2);
    }
    cout<<answer<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        solution();
    }

    return 0;
}
