//accepted
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
        string a;
        cin>>a;
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        
        int flag=0, cm=0, ce=0, co=0, cw=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='m' && ce==0 && co==0 && cw==0)
            {
                cm++;
            }
            else if(a[i]=='e' && cm!=0 && co==0 && cw==0)
            {
                ce++;
            }
            else if(a[i]=='o' && cm!=0 && ce!=0 && cw==0)
            {
                co++;
            }
            else if(a[i]=='w' && cm!=0 && ce!=0 && co!=0)
            {
                cw++;
            }
            else
            {
                flag++;
            }
        }
        if(flag==0 && cm!=0 && ce!=0 && co!=0 && cw!=0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }

    return 0;
}