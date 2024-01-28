//accepted
//https://codeforces.com/gym/104639/problem/L

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, t, k = 2, mx = -1;
    cin >> n >> t;
    while(n--)
    {
        int temp;
        cin >> temp;
        mx = max(mx, temp);
    }
    int temp = (int)ceil(((double)mx/(double)t));
    //int temp = (((mx+t-1)/t));
    cout << ((temp>=2)?temp:2) << endl;

    return 0;
}






/*

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, t, k = 2, mx = -1;
    cin >> n >> t;
    while(n--)
    {
        int temp;
        cin >> temp;
        mx = max(mx, temp);
    }
    int temp = (((mx+t-1)/t));
    cout << ((temp>=2)?temp:2) << endl;

    return 0;
}

*/