#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> a, b;
        int x[60000]={0};
        int p[n+1];
        int flag=0, mark[60000]={0};
        int mx=0;
        for(int i=0; i<n; ++i)
        {
            flag=0;
            cin >> p[i];
            for(int j=0; j<p[i]; ++j)
            {
                int y;
                cin>> y;
                a.push_back(y);
                mx=max(mx,y);
                mark[y]++;
            }
            a.push_back(-1);
        }  
        for(int i=0; i<=mx; ++i)
        {
            if(mark[i]==1)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1;
        } 
        else
        {
            int f=0;
            for(int i=a.size()-1; i>=0; i--)
            {
                if(a[i]==-1)
                {
                    f=0;
                }
                else if(x[a[i]] == 0 && f==0)
                {
                    b.push_back(a[i]);
                    f++;
                }
                if(a[i]!=-1)
                x[a[i]]++;
            }
            for(int i=b.size()-1; i>=0; i--)
            {
                cout<<b[i]<<' ';
            }
        }


        cout<<endl;
    }
    return 0;
}














        // int flag =0;
        // int y[60000], l=0;
        // for(int i=0; i<n; ++i)
        // {
        //     flag=0;
        //     for(int j=0; j<p[i]; ++j)
        //     {
        //         // cout<<a[i][j]<<" --> "<<x[a[i][j]]<<' ';
        //         if(x[a[i][j]]==1 && flag==0)
        //         {
        //             x[a[i][j]]--;
        //             y[l++]=a[i][j];
        //             flag++;
        //             // break;
        //         }
        //         else
        //         {
        //             x[a[i][j]]--;
        //         }
        //     }
        //     if(flag==0)
        //     {
        //         break;
        //     }
            // cout<<endl;
            
        // }
        // if(flag!=0)
        // {
        //     for(int i=0; i<n; ++i)
        //     {
        //         cout<<y[i]<<' ';
        //     }
        // }
        // else
        // {
        //     cout<<-1;
        // }



















// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ll m;
//         cin >> m;
//         vector<pair<int, int>> x(50000);
//         vector<int>arr(50000, 0);
//         int ind = 0;
//         for (int i = 0; i < m; ++i)
//         {
//             int p;
//             cin >> p;
//             if(i<m-1)
//             {
//                 for (int j = 0; j < p; ++j)
//                 {
//                     int q;
//                     cin >> q;
//                     if(x[q].first!=q)
//                     {
//                         arr[ind++]=q;
//                     }
//                     x[q].first = q;
//                     x[q].second++;
//                 }
//             }
//             else
//             {
//                 for (int j = 0; j < p; ++j)
//                 {
//                     int q;
//                     cin >> q;
//                     if(x[q].first!=q)
//                     {
//                         arr[ind++]=q;
//                     }
//                     x[q].first = q;
//                     x[q].second = 0;
//                 }
//             }
//         }
//         vector<int> y(m);
//         int l = 0;
//         for (int i = 0; i <= ind; ++i)
//         {
//             if (x[arr[i]].second >= 1 && x[arr[i]].second < m)
//             {
//                 y[l++] = arr[i];
//                 if (l == m)
//                     break;
//             }
//         }
//         if (l < m)
//         {
//             cout << -1;
//         }
//         else
//         {
//             for (int i = 0; i < l; ++i)
//                 cout << y[i] << ' ';
//         }

//         cout << endl;
//     }
//     return 0;
// }






















// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<pair<int, int>> a[60000];
//         int x[60000]={0};
//         int p[n+1];
//         for(int i=0; i<n; ++i)
//         {
//             cin >> p[i];
//             for(int j=0; j<p[i]; ++j)
//             {
//                 cin>> a[j].fir
//                 x[a[i][j]]++;
//             }
//         }
//         int flag =0;
//         int y[60000], l=0;
//         for(int i=0; i<n; ++i)
//         {
//             flag=0;
//             for(int j=0; j<p[i]; ++j)
//             {
//                 // cout<<a[i][j]<<" --> "<<x[a[i][j]]<<' ';
//                 if(x[a[i][j]]==1 && flag==0)
//                 {
//                     x[a[i][j]]--;
//                     y[l++]=a[i][j];
//                     flag++;
//                     // break;
//                 }
//                 else
//                 {
//                     x[a[i][j]]--;
//                 }
//             }
//             if(flag==0)
//             {
//                 break;
//             }
//             // cout<<endl;
            
//         }
//         if(flag!=0)
//         {
//             for(int i=0; i<n; ++i)
//             {
//                 cout<<y[i]<<' ';
//             }
//         }
//         else
//         {
//             cout<<-1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


























// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long

// // int main()
// // {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);
// //     cout.tie(0);

// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         ll m;
// //         cin >> m;
// //         vector<pair<int, int>> x(50000);
// //         vector<int>arr(50000, 0);
// //         int ind = 0;
// //         for (int i = 0; i < m; ++i)
// //         {
// //             int p;
// //             cin >> p;
// //             if(i<m-1)
// //             {
// //                 for (int j = 0; j < p; ++j)
// //                 {
// //                     int q;
// //                     cin >> q;
// //                     if(x[q].first!=q)
// //                     {
// //                         arr[ind++]=q;
// //                     }
// //                     x[q].first = q;
// //                     x[q].second++;
// //                 }
// //             }
// //             else
// //             {
// //                 for (int j = 0; j < p; ++j)
// //                 {
// //                     int q;
// //                     cin >> q;
// //                     if(x[q].first!=q)
// //                     {
// //                         arr[ind++]=q;
// //                     }
// //                     x[q].first = q;
// //                     x[q].second = 0;
// //                 }
// //             }
// //         }
// //         vector<int> y(m);
// //         int l = 0;
// //         for (int i = 0; i <= ind; ++i)
// //         {
// //             if (x[arr[i]].second >= 1 && x[arr[i]].second < m)
// //             {
// //                 y[l++] = arr[i];
// //                 if (l == m)
// //                     break;
// //             }
// //         }
// //         if (l < m)
// //         {
// //             cout << -1;
// //         }
// //         else
// //         {
// //             for (int i = 0; i < l; ++i)
// //                 cout << y[i] << ' ';
// //         }

// //         cout << endl;
// //     }
// //     return 0;
// // }