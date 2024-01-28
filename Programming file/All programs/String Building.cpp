//accepted
//https://codeforces.com/contest/1671/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


void ross()
{
    string a;
    cin>>a;
    int n=a.size();

    if(n==1){
        cout<<"NO\n";
        return;
    }

    if((a[0]=='a' && a[1]=='b') || (a[0]=='b' && a[1]=='a') || 
    (a[n-1]=='a' && a[n-2]=='b') || (a[n-1]=='b' && a[n-2]=='a')){
        cout<<"NO\n";
        return;
    } 
    else{
        for(int i=0; i<n-2; i++){
            if((a[i]=='a' && a[i+1]=='b' && a[i+2]=='a') || (a[i]=='b' && a[i+1]=='a' && a[i+2]=='b')){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
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
        ross();
    }

    return 0;
}
