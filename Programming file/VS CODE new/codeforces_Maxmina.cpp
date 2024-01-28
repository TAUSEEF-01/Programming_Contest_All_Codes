#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, t, mark, a;
    
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int sum=0;
        cin>>n>> mark;
        for(int j=0; j<n; j++)
        {
            cin>>a;
            sum+=a;  
        }
        if(sum != 0)
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