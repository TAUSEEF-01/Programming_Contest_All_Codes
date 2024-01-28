#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
   
    int a;
  
    int result=0;
   
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
           
            cin>> a;
            if(a == 1)
            {
                result= abs(3-i)+abs(3-j);
            }
           
        }
    }
    cout<< result;
    return 0;
}