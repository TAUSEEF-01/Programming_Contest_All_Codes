#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)
#define srev reverse(s.begin(), s.end())
#define ssort sort(s.begin(),s.end())
#define smax(a) *(a.rbegin()) //1st check this condition --> if (!a.empty())  
#define smin(a) *a.begin() //1st check this condition --> if (!a.empty())  
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    string a,b,c;
    cin>>a>>b>>c;
    int flagx=0, flagy=0, flagz=0;
    
    if((a[0]==a[1] && a[1]==a[2] && a[0]=='X') || (b[0]==b[1] && b[1]==b[2] && b[0]=='X') || (c[0]==c[1] && c[1]==c[2] && c[0]=='X') || 
    (a[0]==b[0] && b[0]==c[0] && a[0]=='X') || (a[1]==b[1] && b[1]==c[1] && a[1]=='X') || (a[2]==b[2] && b[2]==c[2] && a[2]=='X') || 
    (a[0]==b[1] && b[1]==c[2] && a[0]=='X') || (a[2]==b[1] && b[1]==c[0] && a[2]=='X'))
    {
        flagx++;
    }
    if((a[0]==a[1] && a[1]==a[2] && a[0]=='O') || (b[0]==b[1] && b[1]==b[2] && b[0]=='O') || (c[0]==c[1] && c[1]==c[2] && c[0]=='O') || 
    (a[0]==b[0] && b[0]==c[0] && a[0]=='O') || (a[1]==b[1] && b[1]==c[1] && a[1]=='O') || (a[2]==b[2] && b[2]==c[2] && a[2]=='O') ||
    (a[0]==b[1] && b[1]==c[2] && a[0]=='O') || (a[2]==b[1] && b[1]==c[0] && a[2]=='O'))
    {
        flagy++;
    }
    if((a[0]==a[1] && a[1]==a[2] && a[0]=='+') || (b[0]==b[1] && b[1]==b[2] && b[0]=='+') || (c[0]==c[1] && c[1]==c[2] && c[0]=='+') || 
    (a[0]==b[0] && b[0]==c[0] && a[0]=='+') || (a[1]==b[1] && b[1]==c[1] && a[1]=='+') || (a[2]==b[2] && b[2]==c[2] && a[2]=='+') ||
    (a[0]==b[1] && b[1]==c[2] && a[0]=='+') || (a[2]==b[1] && b[1]==c[0] && a[2]=='+'))
    {
        flagz++;
    }
    if((flagx==0 && flagy==0 && flagz==0) || (flagx!=0 && flagy!=0 && flagz!=0))
    {
        cout<<"DRAW\n";
    }
    else if(flagx!=0 && flagy==0 && flagz==0)
    {
        cout<<"X\n";
    }
    else if(flagx==0 && flagy!=0 && flagz==0)
    {
        cout<<"O\n";
    }
    else
    {
        cout<<"+\n";
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

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}