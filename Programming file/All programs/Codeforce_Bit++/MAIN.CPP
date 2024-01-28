#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p=0;
    string a;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
    }

    for(int i=0; i<n; i++)
    {
    if(a == "++X" || a == "X++")
    {
        p++;
    }
    else if(a == "--X" || a == "X--")
    {
        p--;
    }
    }
    cout<< p;

    return 0;
}
