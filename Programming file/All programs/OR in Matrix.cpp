//accepted
//https://codeforces.com/contest/486/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev(s) reverse(s.begin(), s.end())
#define ssort(s) sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;
//priority_queue<ll>a;


void solve()
{
    int r, c;
    cin>>r>>c;
    int a[102][102], b[102][102];

    //taking input
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }

    //if we find any 0 in a row we fill the whole row with 0s
    //if we find any 0 in a column we fill the whole column with 0s
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(a[i][j]==0)
            {
                for(int k=0; k<c; k++)
                {
                    b[i][k]=0;
                }
                for(int k=0; k<r; k++)
                {
                    b[k][j]=0;
                }
            }
        }
    }

    //checking --> if a[i][j]==1 then, whether there is any 1 in b, in the same row or column
    //if 1 not present in b but present in a then flag++ will result in NO, otherwise YES
    int flag=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            int mark=0;
            if(a[i][j]==1)
            {
                for(int k=0; k<c; k++)
                {
                    if(b[i][k]==1)
                    {
                        mark++;
                        break;
                    }
                }
                for(int k=0; k<r; k++)
                {
                    if(b[k][j]==1)
                    {
                        mark++;
                        break;
                    }
                }
                if(mark==0)
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag!=0)
        {
            break;
        }
    }
    if(flag!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cout<<b[i][j]<<' ';
            }
            cout<<endl;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // int t;
    // cin>>t;

    // while(t--)
    // {
        solve();
    // }

    return 0;
}