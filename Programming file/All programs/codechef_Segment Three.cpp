#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n), b(n), c(n);
    ll sum=0, ctr=0, ctr2=0, ctr3=0, sum2=0, sum3=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=c[i]=a[i];

        if(i<=2)
        {
            sum+=a[i];
            sum2+=b[i];
            sum3+=c[i];
            if(i==2 && sum%3!=0)
            {
                ctr+=(3-sum%3);
                a[i]=a[i]+(3-sum%3);
                sum+=(3-sum%3);

                ctr2+=(3-sum2%3);
                b[i-1]=b[i-1]+(3-sum2%3);
                sum2+=(3-sum2%3);

                ctr3+=(3-sum3%3);
                c[i-2]=c[i-2]+(3-sum3%3);
                sum3+=(3-sum3%3);
            }
        }
        else
        {
            sum+=a[i];
            sum-=a[i-3];

            sum2+=b[i];
            sum2-=b[i-3];

            sum3+=c[i];
            sum3-=c[i-3];

            if(sum%3!=0)
            {
                ctr+=(3-sum%3);
                a[i]=a[i]+(3-sum%3);
                sum+=(3-sum%3);
            }

            if(sum2%3!=0)
            {
                ctr2+=(3-sum2%3);
                b[i-1]=b[i-1]+(3-sum2%3);
                sum2+=(3-sum2%3);
            }

            if(sum3%3!=0)
            {
                ctr3+=(3-sum3%3);
                c[i-2]=c[i-2]+(3-sum3%3);
                sum3+=(3-sum3%3);
            }
        }
    }
    cout<<min(ctr, min(ctr2, ctr3))<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    solve();

    return 0;
}
