#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;

void solve()
{
    ll n, m;
    cin>>n>>m;
    vector<ll>x(n+1), y(n+1);
    vector<ll>a(m+1), b(m+1);

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>a[i]>>b[i];
        ll ctr=0, ctr2=0;
    
        for(int j=0; j<n-1; j++)
        {
            
            if(((b[i]<y[j]) != (b[i]<y[j+1])) && ((y[j+1]-y[j])!=0)) 
            { 
                if(a[i]<(x[j]+(((b[i]-y[j])/(y[j+1]-y[j]))*(x[j+1]-x[j]))))
                ctr++;
            }
            if(((b[i]==y[j]) == (b[i]==y[j+1])) && ((y[j+1]-y[j])!=0))
            {
                if(a[i]==(x[j]+(((b[i]-y[j])/(y[j+1]-y[j]))*(x[j+1]-x[j]))))
                ctr2++;
            }
        }
        if(((b[i]<y[0]) != (b[i]<y[n-1])) && ((y[n-1]-y[0])!=0))
        {
            if(a[i]<(x[0]+((b[i]-y[0])/(y[n-1]-y[0]))*(x[n-1]-x[0])))
            ctr++;
        }
        if(((b[i]==y[0]) == (b[i]==y[n-1])) && (y[n-1]-y[0])!=0)
        {
            if(a[i]==(x[0]+((b[i]-y[0])/(y[n-1]-y[0]))*(x[n-1]-x[0])))
            ctr2++;
        }

        if(ctr2!=0)
        {
            cout<<"BOUNDARY"<<endl;
        }
        else if(ctr%2!=0)
        {
            cout<<"INSIDE"<<endl;
        }
        else
        {
            cout<<"OUTSIDE"<<endl;
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    
    solve();
    

    return 0;
}