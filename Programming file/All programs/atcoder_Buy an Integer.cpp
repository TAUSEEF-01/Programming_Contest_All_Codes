#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

void solve()
{
    ll a, b, x;
    cin>>a>>b>>x;
    ll aa=a, bb=b;
    ll xx=x;
    ll p=ceil(log10(xx));
    if(a+b>x)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        ll maxi=0;
        while(p>0)
        {
            //if(((ll)(ceil(((x-b*p)/a)))*a)+b*(ll)(log10((ll)ceil(((x-b*p)/a))))<=xx)
            //if(((ll)(ceil(((x-b*p)/a)))*a)+b*(ll)(log10((ll)ceil(((x-b*p)/a))))<=xx)
            if(((ll)(((x-b*p)/a)*a)+b*(ll)(ceil(log10((((x-b*p)/a)))))) <= xx)
            {
                maxi=max(maxi, (ll)((((x-b*p)/a))));
            }
            else
            {
                break;
            }
            p--;
        }

        ll ans=maxi;
        //if((ll)(aa*(ans))+(ll)(bb*(ll)ceil((log10(ans))))-xx>0)
        if(((aa*ans)+(bb*(ll)(ceil(log10(ans)))))-xx>0)
        {
            for(int i=1; ; i++)
            {
                //if((ll)(aa*(ans-i))+(ll)(bb*(ll)(log10(ans-i)))<=xx)
                ////if((ll)(aa*(ans-i))+(ll)(bb*(ll)(log10(ans-i)))<=xx)
                if(((aa*(ans-i))+(ll)(bb*(ceil((log10((ans-i))))))) <= xx)
                {
                    ans=ans-i;
                    break;
                }
            }
        }
        else if(((aa*ans)+(bb*(ll)(ceil(log10(ans)))))-xx<0)
        {
            for(int i=1; ; i++)
            {
                if(((aa*(ans+i))+(ll)(bb*(ceil((log10((ans+i))))))) <= xx)
                {
                    ans=maxi+i;
                }
                else
                {
                    break;
                }
            }
        }
        

        maxi=ans;
        if(maxi>1000000000)
        {
            cout<<1000000000<<endl;
            return;
        }
        cout<<maxi<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}








     /*
        ll ans=maxi;
        // cout<<(aa*(ans))+(bb*(ll)ceil((log10((double)ans))))-xx<<endl;
        if((aa*(ans))+(bb*(ll)ceil((log10((double)ans))))-xx>0)
        {
            for(int i=1; ; i++)
            {
                if((ll)(aa*(ans-i))+(ll)(bb*(ll)ceil((log10((double)(ans-i)))))<=xx)
                {
                    ans=ans-i;
                    break;
                }
            }
        }*/



// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long


// void solve()
// {
//     double a, b, x;
//     cin>>a>>b>>x;
//     ll aa=a, bb=b;
//     ll xx=x;
//     ll p=log10(xx);
//     if(a+b>x)
//     {
//         cout<<0<<endl;
//         return;
//     }
//     else
//     {
//         ll maxi=0;
//         // p=20;
//         while(p>=0)
//         {
//             // ll ans=((ll)(ceil((x-b*p)/a))*a)+(ll)(b*(ll)(log10((ll)ceil((x-b*p)/a))));
//             // cout<<xx-(ll)(a*ans+b*log10(ans))<<endl;
//             if(((ll)(ceil(((x-b*p)/a)))*a)+b*(ll)(log10((ll)ceil(((x-b*p)/a))))<=xx)
//             // if(xx-(ll)(a*ans+b*log10(ans))<0)
//             {
//                 maxi=max(maxi,(ll)ceil(((x-b*p)/a)));
//             }
//             else
//             {
//                 break;
//             }
//             p--;
//         }
//         ll ans=maxi;
//         // cout<<floor((log10(ans)))<<endl;
//         // cout<<(ll)(aa*(ans))+(ll)(bb*(ll)floor((log10(ans))))-xx<<endl;
//         if((ll)(aa*(ans))+(ll)(bb*(ll)ceil((log10(ans))))-xx>0)
//         {
//             for(int i=1; ; i++)
//             {
//                 if((ll)(aa*(ans-i))+(ll)(bb*(ll)(log10(ans-i)))<=xx)
//                 {
//                     ans=ans-i;
//                     break;
//                 }
//                 // else
//                 // break;
//             }
//         }
//         maxi=ans;
//         if(maxi>1000000000)
//         {
//             cout<<1000000000<<endl;
//             return;
//         }
//         cout<<maxi<<endl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
    
//     return 0;
// }



/*

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll a, b, x;
    cin>>a>>b>>x;
    if(a+b>x)
    {
        cout<<0<<endl;
        return;
    }

    ll p=log10(x);
    ll q=1;
    ll n;//=(x-b*q)/a;
    while(1)
    {
        n=pow(10,q);
        if(a*n+b*q>x)
        {
            break;
        }
        else
        {
            q++;
            // if(log10(n)>p || a*n+b*(log10(n))>x)
            // {
            //     break;
            // }
        }
    }
    q--;
    n=pow(q,10);
    cout<<n<<endl;
}

int main()
{
    solve();

    return 0;
}

*/