#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int a[200];
    int c=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {

        cin>>a[i];
    }
    for(int j=1; j<=n; j++ )
    {

    if(a[j] >= a[k] && a[j]!=0)
    {
        c++;
    }

    }
    cout<< c;

    return 0;
}
