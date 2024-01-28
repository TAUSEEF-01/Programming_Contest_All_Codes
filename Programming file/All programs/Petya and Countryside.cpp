//accepted
//https://codeforces.com/contest/66/problem/B


/*
//code of inori:

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define forn(i,j) for(int i=0;i<(int) j;i++)
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   forn(i,n)
   {
       scanf("%d",&arr[i]);
   }
   int max=0;
   forn(i,n)
   {
       int count=1;
       for(int j=i-1;j>=0;j--)
       {
           if(arr[j]<=arr[j+1])count++;
           else break;
       }
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<=arr[j-1])count++;
           else break;
       }
       if(count>max)max=count;

   }
   printf("%d\n",max);
   return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a)  *min_element(a.begin(), a.end())
#define vmax(a)  *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=-INT_MAX;
    for(int i=0; i<n; i++)
    {
        int ctr=1, flag=0, mini=INT_MAX;
        if(i==0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(mini<a[j])
                {
                    break;
                }
                if(a[i]>a[j])
                {
                    flag++;
                }
                if(a[i]>=a[j] && flag==0)
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else if(a[i]>a[j])
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else
                {
                    break;
                }
            }
        }
        else if(i==n-1)
        {
            for(int j=i-1; j>=0; j--)
            {
                if(mini<a[j])
                {
                    break;
                }
                if(a[i]>a[j])
                {
                    flag++;
                }
                if(a[i]>=a[j] && flag==0)
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else if(a[i]>a[j])
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            for(int j=i+1; j<n; j++)
            {
                if(mini<a[j])
                {
                    break;
                }
                if(a[i]>a[j])
                {
                    flag++;
                }
                if(a[i]>=a[j] && flag==0)
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else if(a[i]>a[j])
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else
                {
                    break;
                }
            }
            mini=INT_MAX;
            for(int j=i-1; j>=0; j--)
            {
                if(mini<a[j])
                {
                    break;
                }
                if(a[i]>a[j])
                {
                    flag++;
                }
                if(a[i]>=a[j] && flag==0)
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else if(a[i]>a[j])
                {
                    mini=min(mini, a[j]);
                    ctr++;
                }
                else
                {
                    break;
                }
            }
        }
        ans=max(ans, ctr);
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
