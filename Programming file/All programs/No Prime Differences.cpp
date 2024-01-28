//accepted
//https://codeforces.com/contest/1838/problem/C

//sln watched

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vl = vector<ll>;
using vul = vector<ull>;



vector<bool> prime(1010, true);
int arr[1010][1010];

void prime_check()
{
    prime[0]=prime[1]=false;
    for(int i=2; i<1010; i++){
        if(prime[i]){
            for(int j=2*i; j<1010; j+=i){
                prime[j]=false;
            }
        }
    }
}


void print_for_m(int &n, int &m)
{
    int cnt=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j]=cnt++;
        }
    }
}



void print_for_n(int &n, int &m)
{
    int cnt=1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr[j][i]=cnt++;
        }
    }
}



void print_for_both(int &n, int &m)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j]= i*m + (i+j)%m + 1;
        }
    }
}



void print_array(int &n, int &m)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]<=9) cout<<' ';
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}



void gosh()
{
    int n, m;
    cin>>n>>m;

    if(prime[m]==false){
        print_for_m(n, m);
    } else if(prime[n]==false){
        print_for_n(n, m);
    } else{
        print_for_both(n, m);
    }

    print_array(n, m);
    cout<<endl;
}


//this is provided solution:
void solution()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<n; ++i) {
        for(int j=0; j<m; ++j) {
            if(i%2==0) cout << (n/2 + i/2) * m + j + 1 << ' ';
            else cout << (i/2) * m + j + 1 << ' ';
        }
        cout << '\n';
    }
    cout<<endl;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    // prime_check();

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        // gosh();
        solution();
    }

    return 0;
}


































// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// using vi = vector<int>;
// using vl = vector<ll>;
// using vul = vector<ull>;


// vector<bool> prime(1010, true);
// int arr[1010][1010];

// void prime_check()
// {
//     prime[0]=prime[1]=false;
//     for(int i=2; i<1010; i++){
//         if(prime[i]){
//             for(int j=2*i; j<1010; j+=i){
//                 prime[j]=false;
//             }
//         }
//     }
// }


// void print_for_m(int &n, int &m)
// {
//     int cnt=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             arr[i][j]=cnt++;
//         }
//     }
// }



// void print_for_n(int &n, int &m)
// {
//     int cnt=1;
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             arr[j][i]=cnt++;
//         }
//     }
// }



// void print_for_both(int &n, int &m)
// {
//     for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 arr[i][j] = i * m + (i + j) % m + 1;
//             }
//         }
//     // int cnt=1;
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<m; j++){
//     //         arr[i][j]=cnt++;
//     //     }
//     // }

//     // // int sp=1;
//     // for(int i=0; i<n/2; i++)
//     // {
//     //     swap(arr[i], arr[i+2]);
//     //     i++;
//     // }

//     // vi odd, even, all;
//     // int m_copy=m;
//     // while(m_copy<=n*m){
//     //     odd.push_back(m_copy);
//     //     if(m_copy+1<=n*m)
//     //     even.push_back(m_copy+1);
//     //     m_copy+=m*2;
//     // }

//     // for(int i=0; i<even.size(); i++)
//     // {
//     //     if(i%2==0){
//     //         all.push_back(odd[i]);
//     //         all.push_back(even[i]);
//     //     } else{
//     //         all.push_back(even[i]);
//     //         all.push_back(odd[i]);
//     //     }
        
        
//     // }
//     // all.push_back(odd[odd.size()-1]);
//     // // for(int i=odd.size()-1; i>=0; i--) all.push_back(odd[i]);
//     // // for(int i=even.size()-1; i>=0; i--) all.push_back(even[i]);
    
//     // int pos=0;
//     // int cnt=1;

//     // for(int i=0; i<n; i++){
//     //     arr[i][0]=all[pos++];
//     //     for(int j=1; j<m; j++){            
//     //         arr[i][j]=cnt++;
//     //     }
//     //     if(i%2==0) cnt+=2;
//     // }
// }



// void print_array(int &n, int &m)
// {
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j]<=9) cout<<' ';
//             cout<<arr[i][j]<<' ';
//         }
//         cout<<endl;
//     }
// }



// void gosh()
// {
//     int n, m;
//     cin>>n>>m;
    // if(prime[m]==false){
    //     print_for_m(n, m);
    // } else if(prime[n]==false){
    //     print_for_n(n, m);
    // } else{
    //     print_for_both(n, m);
    // }

//     // print_array(n, m);

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             arr[i][j]= i*m + (i+j)%m + 1;
//         }
//     }
//     print_array(n, m);
//     cout<<endl;
// }



// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0); cout.tie(0);

//     prime_check();

//     int t;
//     cin>>t;

//     for(int i=0; i<t; i++)
//     {
//         gosh();
//     }

//     return 0;
// }

