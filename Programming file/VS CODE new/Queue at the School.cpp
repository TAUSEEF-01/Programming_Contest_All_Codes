#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int n,t;
    cin>>n>>t;
    char a[100], s[100];
    cin>>a;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]=='B')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
                else if(a[j]=='G'){
                s[j]='G';
            }
        
            else if(a[n-1]=='B')
            {
                s[n]='B';
            }
            else{
                s[n-1]=='G';
            }
        }
            
        for(int k=0; k<n; k++)
        {
            a[k]=s[k];
        }

    }
    cout<< a;
    return 0;
}
