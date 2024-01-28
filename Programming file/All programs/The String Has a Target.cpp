//accepted
//https://codeforces.com/contest/1805/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev(s) reverse(s.begin(), s.end())
#define ssort(s) sort(s.begin(), s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;
//priority_queue<ll>a;
//string s = "dog:cat";  int pos = s.find(":");  string sub = s.substr(pos + 1);   // Copy substring after pos; -->  String is: cat
//string s1 = "Geeks";   string r = s1.substr(3, 2);   // Copy two characters of s1 (starting from position 3); -->  String is: ks



/*my sln:*/

// void solve()
// {
//     int n;
//     cin>>n;
//     string a, b;
//     cin>>a;
//     b=a;
//     ssort(b);
//     if(a[0]!=b[0])
//     {
//         cout<<b[0];
//         int mark=-1;
//         for(int i=n-1; i>=0; i--)
//         {
//             if(a[i]==b[0])
//             {
//                 mark=i;
//                 break;
//             }
//         }
//         for(int i=0; i<n; i++)
//         {
//             if(i==mark)
//             continue;
//             cout<<a[i];
//         }
//     }
//     else
//     {
//         int mark=-1;
//         cout<<b[0];
//         for(int i=n-1; i>=0; i--)
//         {
//             if(a[i]==b[0])
//             {
//                 mark=i;
//                 break;
//             }
//         }
//         for(int i=0; i<n; i++)
//         {
//             if(i==mark)
//             continue;
//             cout<<a[i];
//         }
//     }
//     cout<<endl;
// }



//jiangly sln:

void solve() {
    int n;
    std::cin >> n;
    
    std::string s;
    std::cin >> s;
    
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (s[j] <= s[i]) {
            i = j;
        }
    }
    
    s = s[i] + s.substr(0, i) + s.substr(i + 1);
    std::cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}