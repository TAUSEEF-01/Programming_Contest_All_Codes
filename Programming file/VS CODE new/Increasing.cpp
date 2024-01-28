#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    string a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int count=0;
        cin>>t;
        for(int j=0; j<t; j++)
        {
            cin>> a[j];
        }
        for(int k=0; k<t; k++)
        {
            int l=1;
            
            if(a[0]==a[l])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if(count!=0)
        {
            cout<<"NO"<<endl; 
        }
       
        else if(count==0){
            cout<<"YES"<<endl;
                
        }
        
            
            
    }
        
        
       
    return 0;
}
