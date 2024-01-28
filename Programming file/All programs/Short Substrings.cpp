//accepted
//https://codeforces.com/contest/1367/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long


void air()
{
    string a;
    cin>>a;
    if(a.size()<=2)
    {
        cout<<a<<endl;
    }
    else
    {
        if(a.size()%2==0)
        {
            a.push_back(a[a.size()-1]);
            for(int i=0; i<a.size(); i++)
            {
                if(i%2==0)
                cout<<a[i];
            }
            cout<<endl;
        }
        else
        {
            for(int i=0; i<a.size(); i++)
            {
                if(i%2==0)
                cout<<a[i];
            }
            cout<<endl;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        air();
    }

    return 0;
}
