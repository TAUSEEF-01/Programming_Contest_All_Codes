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

    if(a == "++X" || a == "X++")
    {
        p=p+1;
    }
    else if(a == "--X" || a == "X--")
    {
        p=p-1;
    }
    }
    cout<< p;

    return 0;
}
