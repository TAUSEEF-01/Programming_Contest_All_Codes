#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[200];
    char b[200];

    cin>> a>>b;
    int p= strlen(a);
    for(int i=0; i<p; i++)
    {
        if(a[i]>='a' || b[i]>='a')
        {
            a[i] = toupper(a[i]);
            b[i] = toupper(b[i]);
        }
        else{
            continue;
        }

    }

    for(int j=0; j<p; j++)

    {
        if(strcmp(a,b)==0)
        {
            cout<<0<<endl;
            break;
        }

        else if(a[j] > b[j])
        {
            cout<< 1<<endl;
            break;
        }
        else if(b[j] > a[j])
        {
            cout << -1<<endl;
            break;
        }
        else
        {
           continue;
        }
    }
    return 0;
}


