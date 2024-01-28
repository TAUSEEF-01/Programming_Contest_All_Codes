#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[150];
    cin>> a;
    
    
    int n=strlen(a);
    int l=n;
    
    for(int i='a'; i<='z'; i++)
    {
        int c=0;
        for(int j=0; j<=n; j++)
        {
        if(i == a[j])
        {
            c++;
        }  
        }
        if(c>1)
        {
        l=l-c+1;
        }

    }
    if(l%2 ==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
    
    return 0;
}