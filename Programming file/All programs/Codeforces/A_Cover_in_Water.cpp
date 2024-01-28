/* precision errors dont occur generally in questions using double and sqrt function, if answer is coming
wrong, check your logic --> 1886B, specially in geometry questions make all possibilities */
 
// REMEMBER --->  1) a^b = (a|b)&(~(a&b))  2) a + b = (a or b) + (a and b)  3) a ^ b ^ c = (~a~bc) | (a~b~c) or (~ab~c) or (abc)  4) a^b = ~ab | a~b  5)If AND and OR for 3 numbers are given then we can find their xor using OR of pair wise numbers and using and of all then doing xor
// check for overflow during multiplication, so prefer division and addition rather than multiplication
// in lowerbound question see edge cases carefully and to find for a range use mid value
// for taking input in tree always remember to take if for n-1 values not for n values

/* 1) While using a decrementing loop check for i--
    2) While adding numbers like 1,2,3.... in variables in ll data type add like 1ll otherwise it may give runtime error 
    3) While solving question having mathematical expression or related to hashing try to reform the expression in some other way.
    4) Sometimes float will cause problem in geometry problems so use Double reference :: >> D. Rudolph and Christmas Tree
    5) In multiset to delete a particular element do it like s.erase(s.find(x))
    6) In multiset we cannt find position of element directly like it - s.begin(). We need to use the function distance(s.begin(),it) to find relatice position of it from s.begin(). It returns the number of elements between them.
    7) With the powers of 2 ie 1,2,4,8 ...  we can make any number
    8) if we have TTTTTFFFFF then use  while(r-l > 1){ ll mid = l + (r-l)/2; if(v[mid] <= x){l = mid;} else{r = mid;}}
    9) if we have FFFFFTTTTT then use  while(r-l > 1){ ll mid = l + (r-l)/2; if(v[mid] >=  x){r = mid;} else{l = mid;}} */

// accepted
// https://codeforces.com/contest/1900/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    // dont use when question is interactive
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;


    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;

        string a;
        cin>>a;

        int cnt=0, flag=0, hash=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='.') 
            {
                cnt++;
            }
            else 
            {
                cnt=0;
                hash++;
            }
            if(cnt==3)
            {
                flag++;
            }
        }

        if(flag)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<n-hash<<endl;
        }
    }

    return 0;
}
