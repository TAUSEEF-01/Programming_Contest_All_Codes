//accepted
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        string a,b;
        int l=0, c=0;
        for(int i=0; i<2*n-2; ++i)
        {
            string x;
            cin>>x;
            if(x.size()==n-1 && c==0)
            {
                a=x;
                c++;
            }
            else if(x.size()==n-1 && c!=0)
            {
                b=x;
            }
        }
        
        int ctr=0;
        for(int i=0, j=n-2; i<n-1, j>=0; i++, j--)
        {
            if(a[i]!=b[j])
            {
                ctr++;
            }
        }
        if(ctr==0)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }

    return 0;
}