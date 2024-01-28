#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[10005] = {0};
        int ans = 0;
        for(int i = 0; i < n ; i++)
        {
            int p;
            cin>>p;
            a[p]++;
        }
        for(int i = 1; i <=10000; i++)
        {
        ans = max(ans, max(a[i],a[i+1]+a[i]));
        }
 
        cout<<ans<<endl;
 
    }
    return 0;
}