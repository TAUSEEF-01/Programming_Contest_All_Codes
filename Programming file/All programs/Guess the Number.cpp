//accepted
//https://vjudge.net/problem/Gym-101021-1/origin

/*Interactive problem --> generates input according to our output. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int lo=1, hi=1000000;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        cout<<mid<<endl;
        cout<<flush;
        string a;
        cin>>a;
        if(a=="<")
        {
            hi=mid-1;
        }
        else
        {
            ans=max(ans,mid);
            lo=mid+1;
        }
    }
    cout<<"! "<<ans<<endl;
    cout<<flush;

    return 0;
}

