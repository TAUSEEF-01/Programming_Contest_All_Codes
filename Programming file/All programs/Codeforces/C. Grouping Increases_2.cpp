// accepted
// https://codeforces.com/contest/1919/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;

    vector<int> a(n);
    deque<int> one, two;
    int mn=INT_MAX, mx=INT_MAX, ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(mn>mx)
        {
            swap(mn, mx);
        }
        if(a[i]<=mn) // min of the 1st segment 
        {
            mn=a[i];
        }
        else if(a[i]<=mx) // min of the 2nd segment
        {
            mx=a[i];
        }
        else
        {
            mn=a[i];
            ans++;
        }

        // cout<<mn<<' '<<mx<<"--> "<<ans<<endl;
    }

    cout<<ans<<endl;
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
