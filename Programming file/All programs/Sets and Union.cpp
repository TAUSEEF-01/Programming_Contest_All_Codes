//accepted
//https://codeforces.com/contest/1882/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check(n, pos)    (n & (1<<(pos)))
#define biton(n, pos)    (n | (1<<(pos)))
#define bitoff(n, pos)   (n & ~(1<<(pos)))

/*

# bitset<66> bits(x); //bitset operation --> converts any number to bits, can mention how many bits we want; here 66 bits that we want
//using the following operation we can convert the bits into string:

    string res="";
    res=bits.to_string();

//using the following operation we can exclude the extra 0's that comes in front of the number:

    reverse(res.begin(), res.end());
    while(res.back()=='0')
    {
        res.pop_back();
    }
    reverse(res.begin(), res.end());

here if 4 -> 000000100  is found using bitset; by using the above method we can get 100 the required bits only.

*/

void answer()
{
    int n; 
    cin>>n;

    ll a[n][60];
    vector<ll> str;
    ll allor=0;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        ll num=0;
        for(int j=0; j<k; j++)
        {
            ll temp;
            cin>>a[i][j];
            temp= (1LL<<a[i][j]);
            num |= temp;
        }
        allor |= num;
        str.push_back(num);
    }
    
    ll emax=0, s=str.size();
    
    for(int i=0; i<51; i++)
    {
        if(allor >> i & 1) //contains i'th bit as 1
        {
            ll num=0;
            for(int j=0; j<s; j++)
            {
                if(~str[j] >> i & 1) //don't contain i'th bit as 1
                {
                    num |= str[j]; //the str[j] is the or of a some numbers but this clearly doesn't contain all the elements 
                    //since we choose those str[j] for which str[j]'s i'th bit is off but allor's i'th bit is on.
                 }
            }
            emax=max(emax, (ll)__builtin_popcountll(num)); //For fixed i, select of all the sets among S1,S2,⋯,Sn
            //which don't contain i. Size of their union will be the maximum size of S such that i∉S.

            //here we are counting 1's for those sets that have at least one 1 less one's than allor.
        }
    }

    cout<<emax<<endl;
    
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

