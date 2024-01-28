#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,a;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        
        if(a==3 && a!=1) 
        {
            cout << -1 <<endl;
        }
        else if(a!=1 && a%2==0)
        {
            for(int j=0; j<a; j++)
            {
                cout<< a-j<<" " ;
            }
            cout<<"\n";
        }
        else if(a!=1 && a%2!=0)
        {
            for(int k=0; k<a/2; k++)
            {
                cout<< a-k<<" " ;
            }
            for(int l=a/2+2; l<a; l++)
            {
                cout << a-l<<" " ;
            }
            cout<< a/2 <<" ";
            cout<< a/2+1 <<" " <<endl;
            
        }
    }
    return 0;
}