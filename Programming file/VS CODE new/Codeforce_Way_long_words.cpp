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

    if(strlen(str)<=10)
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
