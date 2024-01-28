#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[200];
    cin>>a;
    int n=0, count1=0, count2=0, count3=0, count4=0;
    int p= strlen(a);
    for(int i=0; i<p; i++)
    {

        if(a[i]=='1')
        {
            count1++;
        }
        else if(a[i]=='2')
        {
            count2++;
        }
        else if(a[i]=='3')
        {
            count3++;
        }
        else if(a[i]=='+')
        {
            count4++;
        }

    }
    int q=count1;
    int w=count2;
    int e=count3;
    int r=count4;
    
    for(int j=0; j<q; j++)
    {
        if(count1>1)
        {
        cout<<"1";
        cout<<"+";
        count4--;
        count1--;
        }
        else if( count2!=0 || count3!=0)
        {
            cout<<"1+";
        }
        else{
            cout<<"1";
        }

    }
    for( int m=0; m<w; m++)
    {
        if(count2>1)
        {
        cout<<"2";
        cout<<"+";
        count4--;
        count2--;
        }
        else if( count3!=0)
        {
            cout<<"2+";
        }
        else{
            cout<<"2";
        }
        
    }
    for(int l=0; l<e; l++)
    {
        if(count3>1)
        {
        cout<<"3";
        cout<<"+";
        count4--;
        count3--;
        }
    
        else{
            cout<<"3";
        }
    }


    return 0;
}
