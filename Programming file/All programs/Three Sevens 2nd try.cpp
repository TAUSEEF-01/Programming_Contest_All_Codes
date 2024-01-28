#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        int a[n+1][60000];
        int x[60000]={0};
        int p[n+1];
        for(int i=0; i<n; ++i)
        {
            cin >> p[i];
            for(int j=0; j<p[i]; ++j)
            {
                cin>> a[i][j];
                x[a[i][j]]++;
            }
        }
        int flag =0;
        int y[60000], l=0;
        for(int i=0; i<n; ++i)
        {
            flag=0;
            for(int j=0; j<p[i]; ++j)
            {
                // cout<<a[i][j]<<" --> "<<x[a[i][j]]<<' ';
                if(x[a[i][j]]==1 && flag==0)
                {
                    x[a[i][j]]--;
                    y[l++]=a[i][j];
                    flag++;
                    // break;
                }
                else
                {
                    x[a[i][j]]--;
                }
            }
            if(flag==0)
            {
                break;
            }
            // cout<<endl;
            
        }
        if(flag!=0)
        {
            for(int i=0; i<n; ++i)
            {
                cout<<y[i]<<' ';
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}

