#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,a;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        int c=0;
        cin>>n;
        char s[n];
        if(n==1)
        {
            cin>>a;
            cout<<"YES\n";

        }

        else{
        for(int j=0; j<n; j++)
        {
            cin>> a;
            s[j]=a;
        }
        for(int k=0; k<n; k++)
        {
        
        if(a[j] == 0)
        {
            c++;
        }
        }
        }
        if(c != 0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        }

    }
        

    return 0;
}


/*
int sum=0;
        int p=0;
        count=0;
        cin>>t;
        for(int j=1; j<=t; j++)
        {
            cin>> a;
            sum+=a;
            p=sum/j;
        if(p != a)
        {
            cout<<"YES"<<endl;
            break;
        }
        else{
            continue;
        }
        }
      
        if()sum/t==a{

            cout<<"NO"<<endl;
        }
    }
*/