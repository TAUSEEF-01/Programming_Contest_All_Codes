// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// #define vsort(a) sort(a.begin(), a.end())
// #define vmin(a) *min_element(a.begin(), a.end())
// #define vmax(a) *max_element(a.begin(), a.end())
// const ll N=1e9+7;
// const double pi=acos(-1);


// int strlen(char a[])
// {
//     int n=0;
//     for(int i=0; ; i++)
//     {
//         if(a[i]=='\0') return n;
//         n++;
//     }
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);

//     char a[1000];	
//     while(scanf(" %s", a)!=EOF)
//     {
//     	int n= strlen(a); 
//     	for(int i=n-1; i>=0; i--)
//     	{
//     		printf("%c", a[i]);
//     	}
//     	printf(" ");
//     }

//     // string a;
//     // while(cin>>a)
//     // {
//     //     reverse(a.begin(), a.end());
//     //     cout<<a<<' ';
//     // }

//     return 0;
// }


























// // #include <stdio.h>

// // // function to get matrix elements entered by the user
// // void getMatrixElements(int matrix[][10], int n)
// // {
// //     for (int i = 0; i < n; ++i)
// //     {
// //         for (int j = 0; j < n; ++j)
// //         {
// //             scanf("%d", &matrix[i][j]);
// //         }
// //     }
// // }

// // // function to multiply two matrices
// // void multiplyMatrices(int first[][10], int second[][10], int result[][10], int n)
// // {

// //     // Initializing elements of matrix mult to 0.
// //     for (int i = 0; i < n; ++i)
// //     {
// //         for (int j = 0; j < n; ++j)
// //         {
// //             result[i][j] = 0;
// //         }
// //     }

// //     // Multiplying first and second matrices and storing it in result
// //     for (int i = 0; i < n; ++i)
// //     {
// //         for (int j = 0; j < n; ++j)
// //         {
// //             for (int k = 0; k < n; ++k)
// //             {
// //                 result[i][j] += first[i][k] * second[k][j];
// //             }
// //         }
// //     }
// // }

// // // function to display the matrix
// // void display(int result[][10], int n)
// // {

// //     printf("\nOutput Matrix:\n");
// //     for (int i = 0; i < n; ++i)
// //     {
// //         for (int j = 0; j < n; ++j)
// //         {
// //             printf("%d  ", result[i][j]);
// //             if (j == n - 1)
// //                 printf("\n");
// //         }
// //     }
// // }

// // int main()
// // {

// //     // freopen("input.txt", "r", stdin);
// //     // freopen("output.txt", "w", stdout);

// //     int first[10][10], second[10][10], result[10][10], n;
// //     scanf("%d", &n);

// //     // get elements of the first matrix
// //     getMatrixElements(first, n);

// //     // get elements of the second matrix
// //     getMatrixElements(second, n);

// //     // multiply two matrices.
// //     multiplyMatrices(first, second, result, n);

// //     // display the result
// //     display(result, n);

// //     return 0;
// // }





// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ull unsigned long long
// #define vsort(a) sort(a.begin(), a.end())
// #define vmin(a) *min_element(a.begin(), a.end())
// #define vmax(a) *max_element(a.begin(), a.end())
// const ll N=1e9+7;
// const double pi=acos(-1);


// void binarynum(int n)
// {
//     if(n==0)
//     {
//         cout<<"0";
//         return;
//     }
//     if(n==1)
//     {
//         cout<<"1";
//         return;
//     }

//     binarynum((n>>1));

//     cout<<(n%2);
// }


// void solve()
// {
//     int n;
//     cin>>n;

//     binarynum(n);
// }    


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // #endif


//     int t=1;
//     // cin>>t;

//     for(int i=1; i<=t; i++)
//     {
//         // cout<<"Case "<<i<<": ";
//         solve();
//     }

//     return 0;
// }
