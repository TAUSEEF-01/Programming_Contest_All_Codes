#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(), a.end()
#define reall(a) a.rbegin(), a.rend()
#define vsort(a) sort(all(a))
#define revsort(a) sort(reall(a))
#define vmin(a) *min_element(all(a))
#define vmax(a) *max_element(all(a))
using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<string>;
const ll N = 1e9 + 7, inf = 1e18;
const double pi = acos(-1);
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'


void solve()
{
    int n;
    cin >> n;

    vl a(n+1, -inf), b(n+1, -inf);
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
    }    

    int s=1, sp=n;
    while(a[s]==b[s])
    {
        s++;
    }
    // s--;
    // if(a[0]!=b[0]) s=0;

    int f=s, l=0;
    while(a[sp]==b[sp])
    {
        sp--;
    }
    l=sp+1;
    // if(a[s-1]!=b[sp]) l++;

    for(int i=s; i<sp; i++)
    {
        if(a[i]!=b[sp])
        {
            f=i;
            // sp--;
            break;
        }
        // else
        // {
        //     l--;
        // }
    }
    // l++;
    // l=sp;

    // cout << f << ' ' << l << endl;
    // int ans = l - f;
    if(l<=f)
    {
        cout << 0 << endl;
        return;
    }
    cout << l-f << endl;


    // int ss=1, ssp=n;
    // while(a[s]==b[s])
    // {
    //     s++;
    // }

    // f=ss, l=0;
    // while(a[ssp]==b[ssp])
    // {
    //     sp--;
    // }
    // l=sp;

    // for(int i=ssp; i>ss; i--)
    // {
    //     if(a[i]!=b[sp])
    //     {
    //         l=i;
    //         break;
    //     }
    // }
    // // l++;
    // ans = max(l-f, ans);
    // cout << ans <<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}










    // for(int i=0; i<n; i++)
    // {   
    //     for(int j=i; j<n; j++)
    //     {
    //         if(a[i]==b[j])
    //         {
    //             if(f==-1)
    //             f=i;
    //             // l=i;
    //             // dbg(i);
    //             // cout << i << ' ' << a[i]<< endl;
    //             store.pb(j);
    //             break;
    //         }
    //         else
    //         {
    //             i=j;
    //             break;
    //         }
    //     }
    // }






// #include <bits/stdc++.h>
// using namespace std;

// long long cas, n;
// int main()
// {
//     cin >> cas;
//     for (long long i = 1; i <= cas; i++)
//     {
//         cin >> n;
//         long long a[n];
//         long long b[n];
//         long long c = 0;
//         for (long long j = 0; j < n; j++)
//         {
//             cin >> a[j];
//         }
//         for (long long j = 0; j < n; j++)
//         {
//             cin >> b[j];
//         }
//             long long k=0,st=0;
//         for (long long j = 0; j < n; j++)
//         {
//             for( ; k < n; k++)
//             {
//                 if(a[j] == b[k])
//                 {
//                    k++;
//                     st=k;
//                     c++;
//                     break;
//                 }
//                 if(k == n-1)
//                 {
//                     k=st;
//                     break;
//                 }
//                 if(j==n-1 && k!=n-1)
//                 {
//                     c=0;
//                     break;
//                 }
//             }
//         }
//         cout << "Case " << i << ": " << n-c << endl;
//     }
//     return 0;
// }







    // ll l=1, r= n, ans =inf;
    // for(int i=1; i<n; i++)
    // {
    //     if(a[i]==b[l])
    //     {
    //         for(int j=n; j>=i+1; j--)
    //         {
    //             if(b[j]==a[j])
    //             {
    //                 r=j;
    //                 continue;
    //             }

    //             if(a[i+1]==b[j])
    //             {
    //                 r=j;
    //                 if(r<=l)
    //                 {
    //                     cout << 0 << endl;
    //                     return;
    //                 }
                    
    //                 break;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //     }
    //     if(r>l)
    //     {
    //         ans= min(ans, r-l);
    //     }
        
    // }

    // if(ans == inf)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // cout << ans << endl;















    // int l=1, r=n;
    // while(l<r)
    // {
    //     for(int i=l; i<=n; i++)
    //     {
    //         if(a[i]==)
    //     }
    // }

    // int la=1, ra=n;
    // for(int i=1; i<=n; i++)
    // {
    //     if(a[i]==b[i])
    //     {
    //         la=i;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // for(int i=n; i>=1; i--)
    // {
    //     if(a[i]==b[i])
    //     {
    //         ra=i;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }

    // if(ra<=la)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // else
    // {
    //     // cout << abs(la-ra)<< endl;
    //     for(int i=n; i>0; i--)
    //     {
    //         if(a[i]==b[n-1])
    //     }
    //     return;
    // }


    // int l=1;
    // set<ll> pos;
    // for(int i=1; i<n; i++)
    // {
    //     if(a[i]==b[l])
    //     {
    //         while(a[i+1]!=b[l])
    //         {
    //             l++;
    //         }

    //         if(l > n)
    //         {
    //             if(pos.size()==0)
    //             {
    //                 cout << n << endl;
    //                 return;
    //             }
    //             else
    //             {
    //                 cout << n - i << endl;
    //                 return;
    //             }
    //         }
    //         else 
    //         {
    //             pos.insert(l);
    //         }
    //     }
    // }

    // int sz= pos.size();
    // dbg(sz);
    // if(pos.size()==0) 
    // {
    //     cout << n << endl;
    // }
    // else if(pos.size()==1)
    // {
    //     cout <<"jfjg";
    // }
    // else
    // {
    //     cout << abs(*pos.begin()- *pos.rbegin()) << endl;
    // }




























// #include <bits/stdc++.h>
// using namespace std;
// stack<long long> reverse_stack(stack<long long> s, long long n){
//     stack<long long> ans;
//     for(int i = 0; i < n; i++){
//         ans.push(s.top());
//         s.pop();
//     }
//     return ans;
// }
// long long cas, n;
// int main()
// {
//     cin >> cas;
//     for (long long i = 1; i <= cas; i++)
//     {
//         cin >> n;
//         stack<long long> a;
//         stack<long long> b;
//         for (long long j = 0; j < n; j++)
//         {
//             long long x;
//             cin >> x;
//             a.push(x);
//         }
//         a=reverse_stack(a,n);
//         for(long long j = 0; j < n; j++)
//         {
//             long long x;
//             cin >> x;
//             b.push(x);
//         }
//         b=reverse_stack(b,n);
//         long long c = 0;
//         for(long long j = 0; j < n; j++)
//         {
//             if(a.top() == b.top())
//             {
//                 a.pop();
//                 b.pop();
//                 c++;
//             }
//             else
//             {
//                 b.pop();

//             }
//             if(b.empty())
//             {
//                 break;
//             }
//             //cout<<a.top()<<" "<<b.top()<<endl;
//         }
//         c = n-c;
//         cout << "Case " << i << ": " << c << endl;
//     }
//     return 0;
// }










// #include <bits/stdc++.h>
// using namespace std;

// long long cas, n;
// int main()
// {
//     cin >> cas;
//     for (long long i = 1; i <= cas; i++)
//     {
//         cin >> n;
//         long long a[n];
//         long long b[n];
//         long long c = 0;
//         for (long long j = 0; j < n; j++)
//         {
//             cin >> a[j];
//         }
//         for (long long j = 0; j < n; j++)
//         {
//             cin >> b[j];
//         }
//         long long k=0,st=0;
//         for (long long j = 0; j < n; j++)
//         {
//             for( ; k < n; k++)
//             {
//                 if(a[j] == b[k])
//                 {
//                     k++;
//                     st=k;
//                     c++;
//                     break;
//                 }
//                 if(k == n-1)
//                 {
//                     k=st;
//                     break;
//                 }
//                 if(j==n-1 && k!=n-1)
//                 {
//                     c=0;
//                     break;
//                 }
//             }
//         }
//         cout << "Case " << i << ": " << n-c << endl;
//     }
//     return 0;
// }