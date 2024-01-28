#include<bits/stdc++.h>
using namespace std;
using ll = long long;


bool compare_function(pair<int, int> &a, pair<int, int> &b)
{
    if(a.first != b.first) return a.first < b.first;
    else if(a.second != b.second) return a.second > b.second; 
    return false;
}


void color_the_fence()
{
    int n;
    cin>>n;
    vector<pair<int, int>> color;
    vector<int> store;
    map<int, int> mp, mp2;
    for(int i=1; i<=9; i++)
    {
        int x;
        cin>>x;
        color.push_back({x, i});
        store.push_back(x);
        mp[x]=i;
        mp2[i]=x;
    }

    sort(color.begin(), color.end(), compare_function);
    sort(store.begin(), store.end(), greater<int>());

    int loop= n/color[0].first;
    if(loop==0)
    {
        cout<<-1<<endl;
        return;
    }

    string s="", ss="";
    while(loop--)
    {
        ss+=(char)(color[0].second+'0');
        s+=(char)(color[0].second+'0');
    }

    int extra=n-(n/color[0].first)*color[0].first;
    loop= n/color[0].first;

    int pos=0, next=0;
    while(pos<9)
    {
        if(store[pos]-color[0].first<=extra && next<loop)
        {
            s[next++]=(char)(mp[store[pos]]+'0');
            extra=extra-(store[pos]-color[0].first);
            if(extra<=0)
            break;
        }
        else
        {
            pos++;
        }
    }

    cout<<max(ss, s)<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    color_the_fence();

    return 0;
}



































// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;


// bool compare_function(pair<int, int> &a, pair<int, int> &b)
// {
//     if(a.first != b.first) return a.first < b.first;
//     else if(a.second != b.second) return a.second > b.second; 
//     return false;
// }


// void color_the_fence()
// {
//     int n;
//     cin>>n;
//     vector<pair<int, int>> color;
//     vector<int> store;
//     map<int, int> mp;
//     for(int i=1; i<=9; i++)
//     {
//         int x;
//         cin>>x;
//         color.push_back({x, i});
//         store.push_back(x);
//         mp[x]=i;
//     }

//     sort(color.begin(), color.end(), compare_function);
//     sort(store.begin(), store.end(), greater<int>());

//     // for(auto x: color)
//     // {
//     //     cout<<x.first<<' '<<x.second<<endl;
//     // }

//     int loop= n/color[0].first;
//     if(loop==0)
//     {
//         cout<<-1<<endl;
//         return;
//     }

//     string s="";
//     while(loop--)
//     {
//         s+=(char)(color[0].second+'0');
//         // cout<<color[0].second;
//     }

//     int extra=n-(n/color[0].first)*color[0].first;
//     // for(int i=0; i<9; i++)
//     int pos=0, next=0;
//     while(pos<9)
//     {
//         if(store[pos]-color[0].first<=extra)
//         {
//             // cout<<store[pos]<<endl;
//             // cout<<1<<endl;
//             s[next++]=(char)(mp[store[pos]]+'0');
//             extra=extra-(store[pos]-color[0].first);
//             if(extra<=0)
//             break;
//         }
//         else
//         {
//             pos++;
//         }
//     }

//     cout<<s<<endl;
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//     color_the_fence();

//     return 0;
// }
