//accepted
//https://codeforces.com/contest/1863/problem/C

/*
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vl = vector<ll>;
using vul = vector<ull>;


void solve()
{
    ll n , k;
    cin>>n>>k;
    vl a(n);
    ll sum_n=n*(n+1)/2;

    for(int i=0; i<n; i++){
        cin>>a[i];
        sum_n-=a[i];
    }
    a.push_back(sum_n);

    int rotate_by=k%(n+1);
    rotate(a.begin(), a.end() - rotate_by, a.end());

    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        solve();
    }

    return 0;
}

*/













#include <bits/stdc++.h>

using i64 = long long;

void solve() 
{
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> a(n);
    i64 b = 1LL * n * (n + 1) / 2;
    for (int i = 0; i < n; i++) 
    {
        std::cin >> a[i];
        b -= a[i];
    }
    a.push_back(b);

    k %= (n + 1);
    std::rotate(a.begin(), a.end() - k, a.end());

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " \n"[i == n - 1];
    }
}

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) 
    {
        solve();
    }
    
    return 0;
}