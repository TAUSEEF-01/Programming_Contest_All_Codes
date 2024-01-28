// accepted
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string a, b;
    cin >> a >> b;
    if(a[a.size() - 1] == b[b.size() - 1])
    {
        cout << "YES\n";
        cout << "*" << a[a.size() - 1] <<endl;
        return;
    }
    else if(a[0] == b[0])
    {
        cout << "YES\n";
        cout << a[0] << "*" <<endl;
        return;
    }
    else 
    {
        int c = 0;
        char x, y, mark;
        for(int i = 0; i < a.size(); ++i)
        {
            for(int j = 0; j < b.size(); ++j)
            {
                if(a[i] == b[j]  && a[i + 1] == b[j + 1])
                {
                    c++;
                    mark = i;
                    break;
                }
            }
        }
        if(c == 0)
        {
            cout << "NO\n";
            return;
        }
        else
        {
            cout << "YES\n";
            cout << "*" << a[mark] << a[mark + 1] << "*" <<endl;
            return;
        }
    }
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