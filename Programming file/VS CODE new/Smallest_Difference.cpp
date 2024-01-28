#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>> t;
    
    for(int i=0; i<t; i++)
    {
    cin>> n;
    int count =0;
    int *a= (int*)malloc(n* sizeof(int));
        for(int j=0; j<n; j++)
        {
            cin>> *(a+j);
            
            if(j == 0 )
            {
                continue;
                
            }
            else if( *(a+j)-*(a+j-1) >0 && *(a+j)-*(a+j-1) == 1) 
            {
            count++;
            }

            else{
              continue;
            }
        }
        cout<< count<< endl;
    }
    return 0;
}
