//accepted
//https://codeforces.com/contest/1864/problem/C

//sln watched:

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define get_bit(n, pos)  (bool)(n & (1 << pos))

//vvi bitwise concept:
//Given any integer x we can see that its lowest significant bit is a divisor of x
//in binary form if found just one set bit like 100000 this means the number is a power of 2. like 2^2=4 --> (100)2

void solve()
{
    ll n;
    cin>>n;

    vector<ll> store;
    store.push_back(n);
    ll nc=n, cnt=0, num=1, p=0;

    for(int i=0; ; i++) 
    {
        if(get_bit(n, i))
        {
            num = 1 << i;
            if(ceil(log2((double)n))==floor(log2((double)n))) //or could be written as: if(n == (1 << i))
            {
                p=i;
                break;
            }
            n-=num;
            store.push_back(n);
        }
    }

    while(p--)
    {
        n-=(ll)pow(2, p);
        store.push_back(n);
    }

    /*
    //this power task could also be done in this way:

    while (p > 0) 
    {
        n -= (1 << (p - 1));
        store.push_back(x);
        --p;
    }
    */

    cout<<store.size()<<endl;
    for(auto &x: store) cout<<x<<' ';
    cout<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
