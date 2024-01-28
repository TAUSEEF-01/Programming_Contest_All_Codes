#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e9+7;


void solve()
{
    string a;
    cin>>a;

    if(a[0]=='0')
    {
        if(a[1]=='0') cout<<"01:10"<<endl;
        else if(a=="01:10") cout<<"02:20"<<endl;
        else if(a=="02:20") cout<<"03:30"<<endl;
        else if(a=="03:30") cout<<"04:40"<<endl;
        else if(a=="04:40") cout<<"05:50"<<endl;
        else if(a=="05:50") cout<<"10:01"<<endl;
        else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<1) cout<<"01:10"<<endl;
        else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<1) cout<<"02:20"<<endl;
        else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<1) cout<<"03:30"<<endl;
        else if(a[1]-'0'<=4 && a[3]-'0'<=4 && a[4]-'0'<1) cout<<"04:40"<<endl;
        else if(a[1]-'0'<=5 && a[3]-'0'<=5 && a[4]-'0'<1) cout<<"05:50"<<endl;
        else cout<<"10:01"<<endl;
    }
    else if(a[0]=='1')
    {
        if(a[1]=='0') cout<<"11:11"<<endl;
        else if(a=="11:11") cout<<"12:21"<<endl;
        else if(a=="12:21") cout<<"13:31"<<endl;
        else if(a=="13:31") cout<<"14:41"<<endl;
        else if(a=="14:41") cout<<"15:51"<<endl;
        else if(a=="15:51") cout<<"20:02"<<endl;
        else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<1) cout<<"11:11"<<endl;
        else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<1) cout<<"12:21"<<endl;
        else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<1) cout<<"13:31"<<endl;
        else if(a[1]-'0'<=4 && a[3]-'0'<=4 && a[4]-'0'<1) cout<<"14:41"<<endl;
        else if(a[1]-'0'<=5 && a[3]-'0'<=5 && a[4]-'0'<1) cout<<"15:51"<<endl;
        else cout<<"20:02"<<endl;
    }
    else
    {
        if(a[1]=='0') cout<<"21:12"<<endl;
        else if(a=="21:12") cout<<"22:22"<<endl;
        else if(a=="22:22") cout<<"23:32"<<endl;
        else if(a=="23:32") cout<<"00:00"<<endl;
        else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<=1) cout<<"21:12"<<endl;
        else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<=1) cout<<"22:22"<<endl;
        else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<=1) cout<<"23:32"<<endl;
        else cout<<"00:00"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    solve();

    return 0;
}



















// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const ll N=1e9+7;


// void solve()
// {
//     string a;
//     cin>>a;

//     if(a=="00:00") cout<<"00:00"<<endl;
//     else if(a[0]=='0')
//     {
//         if(a[1]=='0') cout<<"01:10"<<endl;
//         // else if(a=="01:10") cout<<"02:20"<<endl;
//         // else if(a=="02:20") cout<<"03:30"<<endl;
//         // else if(a=="03:30") cout<<"04:40"<<endl;
//         // else if(a=="04:40") cout<<"05:50"<<endl;
//         // else if(a=="05:50") cout<<"10:01"<<endl;
//         else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<=1) cout<<"01:10"<<endl;
//         else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<=1) cout<<"02:20"<<endl;
//         else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<=1) cout<<"03:30"<<endl;
//         else if(a[1]-'0'<=4 && a[3]-'0'<=4 && a[4]-'0'<=1) cout<<"04:40"<<endl;
//         else if(a[1]-'0'<=5 && a[3]-'0'<=5 && a[4]-'0'<=1) cout<<"05:50"<<endl;
//         else cout<<"10:01"<<endl;
//     }
//     else if(a[0]=='1')
//     {
//         if(a[1]=='0') cout<<"11:11"<<endl;
//         // else if(a=="11:11") cout<<"12:21"<<endl;
//         // else if(a=="12:21") cout<<"13:31"<<endl;
//         // else if(a=="13:31") cout<<"14:41"<<endl;
//         // else if(a=="14:41") cout<<"15:51"<<endl;
//         // else if(a=="15:51") cout<<"20:02"<<endl;
//         else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<=1) cout<<"11:11"<<endl;
//         else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<=1) cout<<"12:21"<<endl;
//         else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<=1) cout<<"13:31"<<endl;
//         else if(a[1]-'0'<=4 && a[3]-'0'<=4 && a[4]-'0'<=1) cout<<"14:41"<<endl;
//         else if(a[1]-'0'<=5 && a[3]-'0'<=5 && a[4]-'0'<=1) cout<<"15:51"<<endl;
//         else cout<<"20:02"<<endl;
//     }
//     else
//     {
//         if(a[1]=='0') cout<<"21:12"<<endl;
//         else if(a=="21:12") cout<<"22:22"<<endl;
//         else if(a=="22:22") cout<<"23:32"<<endl;
//         else if(a=="23:32") cout<<"00:00"<<endl;
//         else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<=2) cout<<"21:12"<<endl;
//         else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<=2) cout<<"22:22"<<endl;
//         else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<=2) cout<<"23:32"<<endl;
//         else cout<<"00:00"<<endl;
//     }
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);


//     solve();

//     return 0;
// }



    // if(a=="10:01") cout<<"11:11"<<endl;
    // else if(a=="20:02") cout<<"21:12"<<endl;
    // else if(a=="20:01") cout<<"20:02"<<endl;
    // else if(a=="22:22") cout<<"23:32"<<endl;
    // else if(a=="10:00") cout<<"10:01"<<endl;
    // else if(a=="20:00") cout<<"20:02"<<endl;






        // else if(a[1]-'0'<5) cout<<a[0]<<a[1]-'0'+1<<":"<<a[1]-'0'+1<<a[0]<<endl;
        // else if(a[1]-'0'==5 && a[3]-'0'<=4 && a[4]-'0'<=9) cout<<"05:50"<<endl;













// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const ll N=1e9+7;


// void solve()
// {
//     string a;
//     cin>>a;
//     if(a=="10:01") cout<<"11:11"<<endl;
//     else if(a=="20:02") cout<<"21:12"<<endl;
//     else if(a=="20:01") cout<<"20:02"<<endl;
//     else if(a=="22:22") cout<<"23:32"<<endl;
//     else if(a=="10:00") cout<<"10:01"<<endl;
//     else if(a=="20:00") cout<<"20:02"<<endl;
//     else if(a[0]=='0')
//     {
//         if(a[1]-'0'<5) cout<<a[0]<<a[1]-'0'+1<<":"<<a[1]-'0'+1<<a[0]<<endl;
//         else if(a[1]-'0'==5 && a[3]-'0'<=4 && a[4]-'0'<=9) cout<<"05:50"<<endl;
//         else cout<<"10:01"<<endl;
//     }
//     else if(a[0]=='1')
//     {
//         // if(a[1]-'0'<5) cout<<a[0]<<a[1]-'0'+1<<":"<<a[1]-'0'+1<<a[0]<<endl;
//         if(a[1]=='0') cout<<"11:11"<<endl;
//         else if(a=="11:11") cout<<"12:21"<<endl;
//         else if(a=="12:21") cout<<"13:31"<<endl;
//         else if(a=="13:31") cout<<"14:41"<<endl;
//         else if(a=="14:41") cout<<"15:51"<<endl;
//         // else if(a=="15:50") cout<<"15:51"<<endl;
//         else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<1) cout<<"11:11"<<endl;
//         else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<1) cout<<"12:21"<<endl;
//         else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<1) cout<<"13:31"<<endl;
//         else if(a[1]-'0'<=4 && a[3]-'0'<=4 && a[4]-'0'<1) cout<<"14:41"<<endl;
//         else if(a[1]-'0'<=5 && a[3]-'0'<=5 && a[4]-'0'<1) cout<<"15:51"<<endl;
//         // else if(a[1]-'0'<=6 && a[3]-'0'<=3 && a[4]-'0'<3) cout<<"13:31"<<endl;
//         // else if(a[1]-'0'<=7 && a[3]-'0'<=1 && a[4]-'0'<1) cout<<"11:11"<<endl;
//         // else if(a[1]-'0'<=8 && a[3]-'0'<=2 && a[4]-'0'<2) cout<<"12:21"<<endl;
//         // else if(a[1]-'0'<=9 && a[3]-'0'<=3 && a[4]-'0'<3) cout<<"13:31"<<endl;
//         // else if(a=="15:50") cout<<"15:51"<<endl;
//         // else if(a[1]-'0'<=5 && a[3]-'0'<=4 && a[4]-'0'<=9) cout<<"15:51"<<endl;
//         else cout<<"20:02"<<endl;
//     }
//     else
//     {
//         if(a[1]=='0') cout<<"21:12"<<endl;
//         else if(a[1]-'0'<=1 && a[3]-'0'<=1 && a[4]-'0'<=1) cout<<"21:12"<<endl;
//         else if(a[1]-'0'<=2 && a[3]-'0'<=2 && a[4]-'0'<=1) cout<<"22:22"<<endl;
//         else if(a[1]-'0'<=3 && a[3]-'0'<=3 && a[4]-'0'<=1) cout<<"23:32"<<endl;
//         else cout<<"00:00"<<endl;
//     }
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);


//     solve();

//     return 0;
// }










//         // else if(a[1]-'0'<2) cout<<"22:22"<<endl;

//         // else if(a[1]-'0'<3) cout<<"23:32"<<endl;
