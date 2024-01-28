//accepted
//https://codeforces.com/contest/1826/problem/A

//sln watched

#include<bits/stdc++.h>
using namespace std;
#define ll long long 


void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        int ctr=0;
        for(int j=0; j<n; j++)
        {
            if(i<a[j]) //here i --> mean I'm assuming i no of liars are there 
            ctr++;
        }
        if(i==ctr) //if my assumption is correct i'll print it --> because no of people liars will match i if there is an ans
        {
            cout<<ctr<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}