//accepted
//https://codeforces.com/gym/104639/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> inp1, inp2;
    map<int, vector<string>> mp;
    map<string, int> mp_mark1, mp_mark2, mp_mark;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if(mp_mark1[a]==0)
        inp1.push_back(a);
        mp_mark1[a]++;
    }

    for (int i = 0; i < m; i++)
    {
        string a;
        cin >> a;
        if(mp_mark2[a]==0)
        inp2.push_back(a);
        mp_mark2[a]++;
    }

    for(auto &x: inp1)
    {
        mp[l++].push_back(x);
    }
    l=0;
    for(auto &x: inp2)
    {
        mp[l++].push_back(x);
    }
    int p = max(n, m);
    for (int i = 0; i < p; i++)
    {
        for (auto &x : mp[i])
        {
            if (mp_mark[x] == 0)
                cout << x << endl;
            mp_mark[x]++;
        }
    }
}

int main()
{

    solve();

    return 0;
}