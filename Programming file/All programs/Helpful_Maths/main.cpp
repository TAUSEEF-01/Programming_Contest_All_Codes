#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[200], b[200];
    int n=0;
    cin>>a;

    int p= strlen(a);
    for(int i=0; i<p; i=i+2)
    {
        int count1=0;
        for(int i=0; i<p; i=i+2)
        {
            if(a[n]==a[i])
            {
                count1++;
            }
            else
            {
                continue;
            }
        }
        if(count1!=0)
        {
            b[n]=a[i];
        }

        for(int i=1; i<p/2; i=i+2)
        {
            b[n]=a[i];
        }
        n+=2;


    }
    cout<< b;

    return 0;
}
