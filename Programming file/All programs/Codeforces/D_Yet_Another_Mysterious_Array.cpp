#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;

const int pr=1e5+10;

vector<bool> isPrime(pr,1);
vector<int> lp(pr,0), hp(pr,0);
      

void solve()
{
    int n; 
    cin>>n;
    ll sum=0;
    set<int> a, store_prime;
    
    for(int i=0; i<n; i++)
    {
        int num; 
        cin>>num;
        a.insert(num);
    }

    vector<int> aa;
    for(auto x: a) aa.push_back(x);
    // for(auto num: aa) cout<<num<<' ';

    int flag=1;
    while(flag)
    {
        flag=0;
        int mark=-1;
        for(auto &num: aa)
        {
            if(num == 1) continue;
            if(num>1) flag=1;

            // int prime_factor;
            // cout<<num<<endl;
            if(mark==-1)
            mark = hp[num];
            // num /= prime_factor;
            if(num%mark==0)
            num /= mark;
        }
        // for(auto num: aa) cout<<num<<' ';
        // cout<<endl;
        if(flag==1)
        sum++;        
    }
  
    // cout<<sum<<endl;

    if(sum&1) cout<<"Alice"<<endl;
    else  cout<<"Bob"<<endl;
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    isPrime[0]= isPrime[1]= false;

    for(int i=2; i<pr; ++i)
    {
        if(isPrime[i]== true)
        {
            lp[i]=hp[i]=i;

            for(int j=2*i; j<pr; j+=i)
            {
                isPrime[j] = false;
                hp[j]=i;
                if(lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}



//   for(auto num: a)
//     {
//         while(num > 1)
//         {
//             int prime_factor =hp[num];
//             while(num % prime_factor == 0)
//             {
//                 store_num.insert(num);
//                 num /= prime_factor;
//                 store_prime.insert(prime_factor);
//             }
//         }
//     }
 
//     // sum=store_prime.size();
//     sum=store_num.size();
//     // cout<<sum<<endl;

//     if(sum&1) cout<<"Alice"<<endl;
//     else  cout<<"Bob"<<endl;



            // map<int, int> prime_factors;
            // while(num > 1)
            // {



                // while(num % prime_factor == 0)
                // {
                //     num /= prime_factor;
                //     break;
                //     // prime_factors[prime_factor]++;
                // }
                // break;
            // }


            // for(auto x: prime_factors) 
            // {
            //     // sum+=x.second;
            //     sum=max(sum, (ll)x.second);
            // }




    // for(auto num: a)
    // {
    //     while(num > 1)
    //     {
    //         ll prime_factor = hp[num];
    //         while(num % prime_factor == 0)
    //         {
    //             num /= prime_factor;
    //             store_prime.insert(prime_factor);
    //         }
    //     }
    // }

    // sum=store_prime.size();