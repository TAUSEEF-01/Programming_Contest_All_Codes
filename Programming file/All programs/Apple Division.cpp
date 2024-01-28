//accepted
//https://cses.fi/problemset/task/1623/

//sln copied

#include <bits/stdc++.h>
using namespace std;

long long findMinRec(long long arr[], int i, long long sumCalculated, long long sumTotal)
{
	if (i == 0)
	{
        return abs((sumTotal - sumCalculated)- sumCalculated);
    }
	return min(findMinRec(arr, i - 1, sumCalculated + arr[i - 1], sumTotal), findMinRec(arr, i - 1, sumCalculated, sumTotal));
}

long long findMin(long long arr[], int n)
{
	long long sumTotal = 0;
	for (int i = 0; i < n; i++)
	{
        sumTotal += arr[i];
    }
	return findMinRec(arr, n, 0, sumTotal);
}

int main()
{
	int n; 
    cin>>n;
    long long arr[n+10];
    for(int i=0; i<n; i++) 
    {
        cin>>arr[i];
    }
	cout<< findMin(arr, n)<<endl;

	return 0;
}


















/* not real solution, the below code needs to be modified: */

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// #define vsort(a) sort(a.begin(), a.end())
// #define vrev(a) reverse(a.begin(), a.end())
// #define vmin(a) *min_element(a.begin(), a.end())
// #define vmax(a) *max_element(a.begin(), a.end())
// const ll N=1e9+7;


// void solve()
// {
//     int n;
//     cin>>n;
//     ll total=0;
//     vector<ll>a(n);
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         total+=a[i];
//     }
//     ll mini=INT_MAX;
//     // vsort(a);
//     // vrev(a);
//     for(int i=0; i<n; i++)
//     {
//         ll sum=0;
//         for(int j=i; j<n; j++)
//         {
//             sum+=a[j];
//             // cout<<abs(total-2*sum)<<endl;
//             mini=min(mini, abs(total-2*sum));
//         }
//     }
//     cout<<mini<<endl;
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//     // int t;
//     // cin>>t;

//     // while(t--)
//     // {
//         solve();
//     // }

//     return 0;
// }














