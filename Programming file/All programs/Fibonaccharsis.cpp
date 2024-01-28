//accepted
//https://codeforces.com/contest/1853/problem/B

//sln watched:
//very good problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n, k;
    cin>>n>>k;
    int ctr=0;
    for(int i=1; i<=n; i++)
    {
        ll x_th=n;
        ll x_minus_1_th=i;
        bool is_fibb=true;
        for(int j=0; j<k-2; j++)
        {
            ll new_x_th=x_minus_1_th; //going to set this as the new x-th element which is definitely going to be the x-1 the element 
            x_minus_1_th=x_th-x_minus_1_th; //xth, (x-1)th, (x-2)th, ....; here (x-2)th = xth - (x-1)th  
                                            //--> setting the (x-2)th value in (x-1)th so that the new xth can be the previous (x-1)th
            x_th=new_x_th;

            is_fibb= is_fibb & (x_minus_1_th <= x_th); //this returns a bool value; if is_fibb and () is true than the is_fibb is true
                                                       //here x_minus_1_th must be <= x_th otherwise it can't be a fibb series
            is_fibb= is_fibb & (min(x_th, x_minus_1_th) >= 0); //in fibb series it is not allowed to have negative numbers according to the ques

            if(is_fibb==false)
            {
                break;
            }
            
        }
        if(is_fibb)
        {
            ctr++;
        }
    }
    cout<<ctr<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
