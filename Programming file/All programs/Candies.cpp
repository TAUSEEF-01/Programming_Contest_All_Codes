//accepted
//https://codeforces.com/contest/1810/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<<-1;
        }
        else
        {
            int l=ceil(log2((double(n))));
            vector<int>a;
            for(int i=0; n>1; i++)
            {
                if((((n+1)/2))%2!=0)
                {
                    a.push_back(1);
                    n=(n+1)/2;
                    l--;
                }
                else
                {
                    a.push_back(2);
                    n=(n-1)/2;
                    l--;
                }
                if(n==1)
                {
                    break;
                }
            }
            cout<<a.size()<<endl;
            for(int i=a.size()-1; i>=0; i--)
            cout<<a[i]<<' '; 
        }
        cout<<endl;
    }
    return 0;
}
	