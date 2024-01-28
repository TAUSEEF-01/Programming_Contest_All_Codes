#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	unordered_map<int,int>a;
    int n = sizeof(arr) / sizeof(arr[0]);

	for(int i=0; i<n; ++i)
	{
        a[arr[i]]++;
	}
    for(auto &p : a)
    {
        cout<<p.first<<' '<<p.second<<endl;
    }
	return 0;
}