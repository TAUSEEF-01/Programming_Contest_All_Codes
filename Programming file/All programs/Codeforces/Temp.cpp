#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    // #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // #endif

    string a;

    while(cin>>a)
    {
        reverse(a.begin(), a.end());
        cout<<a<<' ';
    }

    cout<<endl;

    return 0;
}




/*

#include <iostream>
using namespace std;
...
// numbers
int n;
while (cin >> n)
{
   ...
}
// lines
string line;
while (getline(cin, line))
{
   ...
}
// characters
char c;
while (cin.get(c))
{
   ...
}

*/
















 





//#include<stdio.h>
// #include<math.h>
// #define ll long long
// #define inpi(n) scanf("%d", &n)
// #define inpl(n) scanf("%lld", &n)
// #define inpc(n) scanf("%c", &n)
// #define inpd(n) scanf("%lf", &n)

// char s[100007], k[100007], r[100007];

// int strlen(char a[])
// {
//     int ctr=0;
//     for(int i=0; ; i++)
//     {
//         if(a[i]=='\0')
//         {
//             return ctr;
//         }
//         ctr++;
//     }
// }

// int min(int a, int b)
// {
//     if(a>b) return b;
//     else return a;
// }

// void solve()
// {
//     scanf(" %s", s);
//     scanf(" %s", k);
//     scanf(" %s", r);
    
//     int sz=strlen(s), n=strlen(k), p=strlen(r);

//     for(int i=0; i<sz; i++)
//     {
//         int flag=0;
//         if(s[i]==k[0])
//         {
//             for(int j=0, l=i; j<n; j++, l++)
//             {
//                 if(s[l]!=k[j])
//                 {
//                     flag++;
//                     break;
//                 }
//             }
//             if(flag==0)
//             {
//                 for(int j=0, l=i; j<p; j++, l++)
//                 {
//                     s[l]=r[j];
//                 }
//                 break;
//             }
//         }
//     }
//     printf("%s\n", s);

// }


// int main()
// {
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);

//     solve();

//     return 0;
// }	