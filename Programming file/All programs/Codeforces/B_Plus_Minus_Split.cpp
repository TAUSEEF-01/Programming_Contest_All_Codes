#include<bits/stdc++.h>
using namespace std;
#define ll long long


void answer()
{
    int n;
    cin>>n;
    string a;
    cin>>a;

    int p=0, m=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=='+') p++;
        else m++;
    }

    cout<<abs(m-p)<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }

    return 0;
}
