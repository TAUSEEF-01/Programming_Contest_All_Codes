#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solution()
{
    double a, b, c;
    cin>>a>>b>>c;
    cout<<ceil(abs(a-b)/(2*c))<<endl;
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
