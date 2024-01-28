// accepted
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>> t;
    char a[8][8];
    for(int i=0; i<t; i++)
    {
        int c=0;
        for(int j=0; j<8; j++)
        {
            for(int k=0; k<8; k++)
            {
                cin>> a[j][k];
            }
        }

        for(int j=0; j<8; j++)
        {
            for(int k=0; k<8; k++)
            {
                if(a[j][k]=='R')
                {
                    c++;
                }
            }
            if( c!=8)
            {
                c=0;
            }
            else
            {
                
                break;
            }
        }
        if(c==8)
        {
            cout<< "R"<< endl;
        }
        else
        {
            cout<< "B"<< endl;
        }
        
    }
    return 0;
}




