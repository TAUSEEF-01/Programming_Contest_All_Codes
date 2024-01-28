//accepted
//https://codeforces.com/contest/895/problem/A

//sln watched

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev reverse(s.begin(), s.end())
#define ssort sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;
//priority_queue<ll>a;


void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int mini=INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum+=a[j];
            mini=min(mini, abs(360-2*sum));
        }
    }
    cout<<mini<<endl;
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

    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}








/*
//given sln:


#include <iostream>
#include <algorithm>

using namespace std;

int n;
int sum=0;
int l=0, r=0;
int ans = 360;
int a[360];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	while (r < n)
	{
		sum += a[r];
		while (sum >= 180)
		{
			ans = min(ans, 2 * abs(180 - sum));
			sum -= a[l];
			l++;
		}
		ans = min(ans, 2 * abs(180 - sum));
		r++;
	}
	cout << ans << endl;
}


*/