#include <bits/stdc++.h>
using namespace std;

struct pupil
{
    string name;
    int roll;
    string phn;
    int x;
    vector<double> mark;
};

int main()
{

    int n;
    cin >> n;
    vector<pupil> st(n);
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].roll >> st[i].phn >> st[i].x;
        st[i].mark.resize(st[i].x);
        for (int j = 0; j < st[i].x; j++)
        {
            cin >> st[i].mark[j];
        }
    }
    string y;
    cin >> y;
    for (int i = 0; i < st.size(); i++)
    {
        int flag = st[i].name.find(y);
        if (flag != string::npos)
        {
            double sum = 0.0;
            for (double mark : st[i].mark)
            {
                sum += mark;
            }
            double average = sum / st[i].x;

            cout << st[i].name << " " << st[i].roll << " " << st[i].phn << " ";

            printf("%.2lf\n", average);
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// void answer()
// {
//     int n;
//     cin>>n;

//     vector<string> a(n);
//     unordered_map<string, double> mp;
//     for(int i=0; i<n; i++)
//     {
//         string s;
//         cin>>s;
//         int roll;
//         cin>>roll;
//         s+=' ';
//         s+=(roll+'0');

//         string contact;
//         cin>>contact;

//         s+=' ';
//         s+=contact;

//         int k;
//         cin>>k;
//         int kk=k;
//         double sum=0;
//         while(kk--)
//         {
//             double marks;
//             cin>>marks;
//             sum+=marks;
//         }

//         sum=sum/(double)k;
//         a[i]=s;
//         mp[s]=sum;
//     }

//     string p;
//     cin>>p;

//     for(int i=0; i<n; i++)
//     {
//         if (a[i].find(p) != std::string::npos)
//         {
//             // if(mp[a[i]]>=10)
//             cout<<a[i]<<' '<<std::fixed<<setprecision(2)<<mp[a[i]]<<endl;
//             // else
//             // cout<<a[i]<<' '<<setprecision(3)<<mp[a[i]]<<endl;
//             // printf("%s %.2lf\n", a[i], mp[a[i]]);
//             // cout<<endl;
//         }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//     int t=1;
//     // cin>>t;

//     for(int i=0; i<t; i++)
//     {
//         answer();
//     }

//     return 0;
// }
