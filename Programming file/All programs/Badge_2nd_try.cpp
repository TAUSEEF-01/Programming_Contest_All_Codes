//accepted
//https://codeforces.com/contest/1020/problem/B

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
#define ssort(s) sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;
//priority_queue<ll>a;
//string s = "dog:cat";  int pos = s.find(":");  string sub = s.substr(pos + 1);   // Copy substring after pos; -->  String is: cat
//string s1 = "Geeks";   string r = s1.substr(3, 2);   // Copy two characters of s1 (starting from position 3); -->  String is: ks


vector<int> graph[1002];
vector<bool> visited(1002);
int ans=-100;


void DFS(int parent)
{
    visited[parent]=true;
    for(auto &children: graph[parent])
    {
        if(visited[children])
        {
            ans=children;
            return;
        }
        DFS(children);
    }
}

void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int person;
        cin>>person;
        graph[i].push_back(person);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<visited.size(); j++)
        {
            visited[j]=false;
        }
        DFS(i);
        cout<<ans<<' ';
    }
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

    solve();

    return 0;
}










// #include<bits/stdc++.h>
// using namespace std;

// vector<int> arr[1005];
// bool seen[1005];
// int answer=-INT_MAX;

// void depth_first_search(int n)
// {
//     seen[n]=true;
//     for(auto &num: arr[n]){
//         if(seen[num]==true){
//             answer=num;
//             return;
//         }
//         else{
//             depth_first_search(num);
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         int num;
//         cin>>num;
//         arr[i].push_back(num);
//     }
//     for(int i=1; i<=n; i++){
//         answer=-INT_MAX;        
//         memset(seen, false, sizeof(seen));
//         depth_first_search(i);
//         cout<<answer<<" ";
//     }
    
//     return 0;
// }