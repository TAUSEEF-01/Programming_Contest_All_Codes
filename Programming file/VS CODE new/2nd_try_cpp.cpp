#include <iostream>

using namespace std;

int main()
{
    int t,n;
    //int count =0;
    cin>> t;
    for(int i=0; i<t; i++)
    {
    cin>> n;
    
   
        for(int j=0; j<n; j++)
        {
            int a[j];
            cin>> a[j];
        }    
  //  }

        int count =0; 
        for(int j=1; j<n; j++)
        {
            
            int a[j];
        
        
        //    if(a[j] == a[0] )//|| a[j]==a[j-1])
        //         {
        //             continue;
        //             //count =0 ;
        //         }
            if( (a[j])-(a[j-1]) <= 1) // (a[j]-a[j--]) >0 &&
                {
                count++;
                }
             else
                {
                continue;
                }
           // cout<< count<< endl;
         }
        cout<< count<< endl;
    //  }
    }
    return 0;
}
