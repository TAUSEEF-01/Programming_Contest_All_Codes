#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;

    for(int i=0; i<n; i++)
    {
        char str[200];
        cin>> str;
        int p= strlen(str);
    //}
   // for(int j=0; j<n; j++)
    //{
    //char str[200];

    if(p<=10)
    {
        cout<<str<<endl;
    }
    else
    {
        cout<<str[0]<<strlen(str)-2<<str[strlen(str)-1]<<endl;
    }
    }

    return 0;
}
