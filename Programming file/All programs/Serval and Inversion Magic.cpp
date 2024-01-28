//accepted  
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int c1 = 0, c2 = 0, c3 = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(a[i] != a[n - 1 - i] && c2 == 0)
        {
            c1 = 1;
        }
        else if(a[i] == a[n - 1 - i] && c1 == 0)
        {
            continue;
        }
        else if(a[i] == a[n - 1 - i] && c1 != 0)
        {
            c2 = 1;
        }
        else if(a[i] != a[n - 1 - i] && c1 != 0)
        {
            c3 = 1;
        }
    }
    if(c3 != 0)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }
    return;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}