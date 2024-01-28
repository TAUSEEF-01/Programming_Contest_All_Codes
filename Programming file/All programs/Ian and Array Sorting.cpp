//accepted
//https://codeforces.com/contest/1816/problem/C

/*
#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i&1) sum += arr[i];
        else sum -= arr[i];
    }
    if(n & 1 || sum >= 0) cout<<"YES\n";
    else cout<<"NO\n";
}
 
int32_t main(){
    fastio
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) solve();
}
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>a(n), b(n);
        ll flag=0, mark1=0, mark2=0, flag2=0;
        ll dif=0;
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
            b[i]=a[i];
            
            a[i]+=dif;
            if(i>0)
            {
                dif=a[0]-a[i];
                if(b[i]-b[i-1]!=0)
                {
                    flag++;
                }
                if(b[i]-b[i-1]<0)
                {
                    flag2++;
                }
            }
            if(i==n-2)
            {
                mark1=a[i];
            }
            if(i==n-1)
            {
                mark2=a[i];
            }
        }
        if(n%2!=0)
        {
            cout<<"YES\n";
        }
        else if(n==2)
        {
            if(b[0]>b[1])
            {
                cout<<"NO\n";
            }
            else if(b[0]<=b[1])
            {
                cout<<"YES\n";
            }
        }
        else
        {
            if(flag==0 || flag2==0)
            {
                cout<<"YES\n";
            }
            else if(mark2>=b[0])
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }

    }
    return 0;
}