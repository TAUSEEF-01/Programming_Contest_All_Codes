//accepted
//https://codeforces.com/contest/1543/problem/A


//motivation pour aller de l'avant:
//Essayez plus fort
//ça va bien
//ne jamais abandonner


//explanation:
/*
Certainly, here's the formatted version of your text:

**Without loss of generality, assume a > b; otherwise, we can swap a and b.**

We know that **GCD(a, b) = GCD(a − b, b).** 

Notice that no matter how many times we apply any operation, the value of **a − b** does not change. 
We can arbitrarily change the value of **b** to a multiple of **a − b** by applying the operations. 
In this way, we can achieve a GCD equal to **a − b**. 

Now, since **GCD(x, y) ≤ min(x, y)** for any positive **x** and **y**, **GCD(a − b, b)** can never exceed **a − b**. 
So, we cannot achieve a higher GCD by any means.

To achieve the required GCD, we need to make **b** a multiple of **g = a − b** using as few operations as possible. 
There are two ways to do so:

1. Decrease **b** to the largest multiple of **g** less than or equal to **b**.
2. Increase **b** to the smallest multiple of **g** greater than **b**.

The number of operations required to do so are **b mod g** and **g − b mod g**, respectively. 
We will obviously choose the minimum of the two. Also, notice that **a mod g = b mod g** since **a = b + g**. 
So, it doesn't matter if we use either **a** or **b** to determine the minimum number of operations.
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
#define pb push_back
#define all(a) a.begin(), a.end()
#define vsort(a) sort(all(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
#define spc ' '
#define vite ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll N=1e9+7;


void solve()
{
    ll a, b; cin>>a>>b;
    if(a==b){
        cout<<0<<spc<<0<<endl;
    } else{
        if(a<b) swap(a,b);
        ll g=a-b;
        cout<<a-b<<spc<<min(a%g, g-a%g)<<endl;
    }
    
}


int main()
{
    vite;
    
    int cas_de_test; cin>> cas_de_test;

    while(cas_de_test--){
        solve();
    }

    return 0;
}
