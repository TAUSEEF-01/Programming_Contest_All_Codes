//accepted
//https://www.codechef.com/problems/VOWMTRX?tab=statement

//sln watched 

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


void solve()
{
    int n, k;
    cin>>n>>k;
    string a;
    cin>>a;
    ll ans=1, vowel=0, consonant=0;
    vector<ll> x;
    for(int i=0; i<n; i++)
    {
        if(vowel==k)
        {
            if(!(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'))
            {
                consonant++;
            }
            else
            {
                vowel=1;
                x.push_back(consonant);                
                consonant=0;
            }
        }
        else if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            vowel++;
        }

    }
    for(int i=0; i<x.size(); i++)
    {
        ans=(ans*(x[i]+1LL))%N;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
