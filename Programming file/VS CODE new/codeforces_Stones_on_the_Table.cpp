#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, c=0;
    scanf("%d",&n);
    //cin>>n;
    char a[n];
    scanf("%s",a);
    //cin>>a;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
    }

    cout<< c;

    return 0;
}
