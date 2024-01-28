//accepted
//https://codeforces.com/contest/1753/problem/B


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>; 


void Factorial_Divisibility()
{
    int n, x;
    cin>>n>>x;
    ll ans=1, flag=0;
    vl cnt_factors(600000, 0);

    for(int i=0; i<n; i++)
    {
        ll num;
        cin>>num;
        cnt_factors[num]++;
    }

    for(int i=1; i<=n; i++)
    {
        if(cnt_factors[i]%(i+1)==0)
        {
            cnt_factors[i+1]+= cnt_factors[i]/(i+1);
            cnt_factors[i]=0;
        }
    }

    for(int i=1; i<x; i++)
    {
        if(cnt_factors[i]!=0)
        {
            flag++;
            break;
        }
    }

    if(flag)
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    Factorial_Divisibility();

    return 0;
}

