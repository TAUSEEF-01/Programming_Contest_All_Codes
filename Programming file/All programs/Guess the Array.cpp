//accepted
//https://vjudge.net/problem/CodeForces-727C/origin

/*Interactive problem --> generates input according to our output. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int n;
    cin>>n;
    vector<int> x(n+1);

    for(int i=2; i<=n; i++)
    {
        cout<<"? "<<1<<" "<<i<<endl;
        cin>>x[i];
    }
    cout<<"? 2 3"<<endl;
    cin>>x[1];
    int a=(x[2]+x[3]-x[1])/2;
    cout<<"! "<<a<<" ";
    for(int i=2; i<=n; i++)
    {
        cout<<x[i]-a<<" ";
    }
    cout<<endl<<flush;

    return 0;
}

