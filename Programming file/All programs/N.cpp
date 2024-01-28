#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // vector<bool> isPrime(1000000, true);
    // vector<int> hp(1000000, 0), lp(1000000, 0), a;

    // isPrime[0]=isPrime[1]=false;

    // for(int i=2; i<1000000; i++)
    // {
    //     if(isPrime[i])
    //     {
    //         lp[i]=hp[i]=i;
    //         for(int j=i*2; j<1000000; j+=i)
    //         {
    //             isPrime[j]=false;
    //             hp[j]=i;
    //             if(lp[j]==0)
    //             {
    //                 lp[j]=i;
    //             }
    //         }
    //     }
    // }

    // a.push_back(1);
    // for(int i=2; i<100000;i++)
    // {
    //     int num=i;
    //     int flag=0;
    //     while(num > 1)
    //     {
    //         ll int prime_factor =hp[num];
            
    //         if(prime_factor!=2 && prime_factor!=3 && prime_factor!=5) 
    //         {
    //             // cout<<prime_factor<<" ";
    //             flag++;
    //             // break;
    //         }
    //         while(num % prime_factor ==0)
    //         {
    //             num /= prime_factor;
    //         }
    //         // cout<<prime_factor<<' ';
    //     }
    //     // cout<<endl;
    //     // cout<<flag<<' ';
    //     if(flag==0) a.push_back(i);
    //     if(a.size()>1501) break;
    // }

    // // vector<ll> a;
    // // a.push_back(1);
    // // for(int i=2; i<10000; i++)
    // // {
    // //     if(i%2==0 || i%3==0 || i%5==0)
    // //     a.push_back(i);
    // // }
    // // for(auto &x: a) cout<<x<<' ';
    // cout<<a.size()<<endl;

    vector<int> a;
    a.push_back(1);
    for(int i=2; ; i++)
    {
         
        
    }
    cout<<"The 1500'th ugly number is "<<a[1500]<<"."<<endl;
    

    return 0;
}
