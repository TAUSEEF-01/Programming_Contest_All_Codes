//accepted
//https://codeforces.com/contest/1845/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


void solve()
{
    int n, k, x;
    cin>>n>>k>>x;
    if(k==1 && x==1)
    {
        cout<<"NO\n";
    }
    else if(n==1)
    {
        if(x==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<1<<endl;
            cout<<1<<endl;
        }
    }
    else if(n==2)
    {
        if(k==1 && x==1)
        {
            cout<<"NO\n";
        }
        else if(k>=2)
        {
            cout<<"YES\n";
            if(x==1)
            {
                cout<<1<<endl;
                cout<<2<<endl;
            }
            else
            {
                cout<<n<<endl;
                for(int i=0; i<n; i++)
                {
                    cout<<1<<' ';
                }
                cout<<endl;
            }
        }
    }
    else if(n==3)
    {
        if(k==2 && x==1)
        {
            cout<<"NO\n";
        }
        else if(k==2 && x!=1)
        {
            cout<<"YES\n";
            cout<<n<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<1<<' ';
            }
            cout<<endl;
        }
        else
        {
            cout<<"YES\n";
            if(x==1)
            {
                cout<<1<<endl;
                cout<<3<<endl;
            }
            else if(x==2)
            {
                cout<<3<<endl;
                for(int i=0; i<n; i++)
                {
                    cout<<1<<' ';
                }
                cout<<endl;
            }
            else if(x>=3)
            {
                cout<<2<<endl;
                cout<<1<<' '<<2<<endl;
            }
        }
    }
    else
    {
        if(k==2)
        {
            if(x!=1)
            {
                cout<<"YES\n";
                cout<<n<<endl;
                for(int i=0; i<n; i++)
                {
                    cout<<1<<' ';
                }
                cout<<endl;
            }
            else 
            {
                if(n%2==0)
                {
                    cout<<"YES\n";
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2; i++)
                    {
                        cout<<2<<' ';
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
        else if(k==3)
        {
            if(x!=1)
            {
                cout<<"YES\n";
                cout<<n<<endl;
                for(int i=0; i<n; i++)
                {
                    cout<<1<<' ';
                }
                cout<<endl;
            }
            else 
            {
                if(n%2==0)
                {
                    cout<<"YES\n";
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2; i++)
                    {
                        cout<<2<<' ';
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<"YES\n";
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2-1; i++)
                    {
                        cout<<2<<' ';
                    }
                    cout<<3<<endl;
                }
            }
        }
        else 
        {
            if(x!=1)
            {
                cout<<"YES\n";
                cout<<n<<endl;
                for(int i=0; i<n; i++)
                {
                    cout<<1<<' ';
                }
                cout<<endl;
            }
            else 
            {
                if(n%2==0)
                {
                    cout<<"YES\n";
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2; i++)
                    {
                        cout<<2<<' ';
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<"YES\n";
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2-1; i++)
                    {
                        cout<<2<<' ';
                    }
                    cout<<3<<endl;
                }
            }
        }
        
    }

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
