#include<bits/stdc++.h>
using namespace std;
#define ll long long


//1 2 3 4 5 6 7
//x=2, y=3;
//sorting according to the criteria --> 
//index   : 1  2  3  4  5  6  7
//number  : 4 (7) 1 (6) 3 (5) 2 
//1 + 5     --> y_sum
//7 + 6 + 5 --> x_sum

void impossible()
{
    ll n, x, y;
    cin>>n>>x>>y;

    ll lcm_xy=(x*y)/(__gcd(x, y));
    ll common=n/lcm_xy;

    ll x_cnt=n-n/x+common;
    ll y_cnt=n/y-common;

    ll x_sum=n*(n+1)/2-x_cnt*(x_cnt+1)/2;
    ll y_sum=y_cnt*(y_cnt+1)/2;

    cout<<x_sum-y_sum<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        impossible();
    }

    return 0;
}
