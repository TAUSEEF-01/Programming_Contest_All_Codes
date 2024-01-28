#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[60], b[60];
    int n;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        int p=strlen(a);
        int q=strlen(b);
        if(p==q )
        {
            if(a[p-1]=='S' && b[q-1]=='M')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='M' && b[q-1]=='S')
            {
                cout<< ">"<<endl;
            }
            else if(a[p-1]=='S' && b[q-1]=='L')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='M' && b[q-1]=='L')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='L' && b[q-1]=='M')
            {
                cout<< ">"<<endl;
            }
            else if(a[p-1]=='L' && b[q-1]=='S')
            {
                cout<< ">"<<endl;
            }
            else if(a[p-1]==b[q-1])
            {
                cout<< "="<<endl;
            }

        }

        if((p>q  && (a[0]!='S' || a[0]!='M' || a[0]!='L')))//|| (p<q && (b[0]!='S' || b[0]!='M' || b[0]!='L')))
        {
            if(a[p-1]=='S' && b[q-1]=='M')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='M' && b[q-1]=='S')
            {
                cout<< ">"<<endl;
            }
            else if(a[p-1]=='S' && b[q-1]=='L')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='M' && b[q-1]=='L')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='L' && b[q-1]=='M')
            {
                cout<< ">"<<endl;
            }
            else if(a[p-1]=='L' && b[q-1]=='S')
            {
                cout<< ">"<<endl;
            }
             else if(a[p-1]=='S' && b[q-1]=='S')
            {
                cout<< "<"<<endl;
            }
             else if(a[p-1]=='L' && b[q-1]=='L')
            {
                cout<< ">"<<endl;
            }
        }
        if( (p<q && (b[0]!='S' || b[0]!='M' || b[0]!='L')))
        {
            if(a[p-1]=='S' && b[q-1]=='M')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='M' && b[q-1]=='S')
            {
                cout<< ">"<<endl;
            }
            else if(a[p-1]=='S' && b[q-1]=='L')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='M' && b[q-1]=='L')
            {
                cout<< "<"<<endl;
            }
            else if(a[p-1]=='L' && b[q-1]=='M')
            {
                cout<< ">"<<endl;
            }
            else if(a[p-1]=='L' && b[q-1]=='S')
            {
                cout<< ">"<<endl;
            }
             else if(a[p-1]=='S' && b[q-1]=='S')
            {
                cout<< ">"<<endl;
            }
             else if(a[p-1]=='L' && b[q-1]=='L')
            {
                cout<< "<"<<endl;
            }
        }
    }

    return 0;
}

