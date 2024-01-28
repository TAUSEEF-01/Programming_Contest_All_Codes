#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    ll n;
    cin>>n;

    ll ans=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        ans+=n/i-1;
        else 
        ans+=n/i;
    }
    cout<<ans<<endl;    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve()
// {
//     ll n;
//     cin >> n;
//     n--;
//     ll ans=0;
//     for(ll i=1; i<=n; i++)
//     {
//         ans+=n/i;
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     solve();
    
// }


/*

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; i*j < n; j++)
        {
            cnt++;   
        } 
    }
    printf("%d\n", cnt);
}

*/