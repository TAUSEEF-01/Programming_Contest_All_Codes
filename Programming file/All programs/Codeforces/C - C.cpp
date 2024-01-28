#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;



void solve()
{
    while(1)
    {
        string a;
        if(!getline(cin, a)) return;
        int n=a.size();

        ll ans=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==' ') ans+=0;
            else if(a[i]=='g') ans+=30;
            else if(a[i]=='Q') ans+=31;
            else if(a[i]=='@') ans+=32;
            else if(a[i]=='.') ans+=4;
            else if(a[i]=='"') ans+=6;
            else if(a[i]==';') ans+=11;
            else if(a[i]=='5') ans+=27;

            else if(a[i]=='M' || a[i]=='R') ans+=28;
            else if(a[i]=='$' || a[i]=='B') ans+=29;
            else if(a[i]=='\''|| a[i]=='`') ans+=3;
            else if(a[i]==':' || a[i]=='_') ans+=8;
            else if(a[i]=='!' || a[i]=='~') ans+=9;
            else if(a[i]=='Y' || a[i]=='=') ans+=14;
            else if(a[i]=='i' || a[i]=='?') ans+=15;
            
            else if(a[i]==',' || a[i]=='-' || a[i]=='^') ans+=7;
            else if(a[i]=='(' || a[i]==')' || a[i]=='|') ans+=12;

            else if(a[i]=='1' || a[i]=='V' || a[i]=='w' || a[i]=='z') ans+=19;
            else if(a[i]=='C' || a[i]=='F' || a[i]=='o' || a[i]=='j') ans+=20;
            else if(a[i]=='+' || a[i]=='v' || a[i]=='r' || a[i]=='x') ans+=13;
            else if(a[i]=='>' || a[i]=='/' || a[i]=='<' || a[i]=='\\') ans+=10;
            else if(a[i]=='&' || a[i]=='#' || a[i]=='A' || a[i]=='y') ans+=24;
            else if(a[i]=='L' || a[i]=='7' || a[i]=='T' || a[i]=='l') ans+=16;
            else if(a[i]=='*' || a[i]=='c' || a[i]=='t' || a[i]=='u') ans+=17;

            else if(a[i]=='4' || a[i]=='K' || a[i]=='k' || a[i]=='h' || a[i]=='s') ans+=21;
            else if(a[i]=='2' || a[i]=='%' || a[i]=='Z' || a[i]=='0' || a[i]=='m') ans+=22;

            else if(a[i]=='8' || a[i]=='3' || a[i]=='P' || a[i]=='e' || a[i]=='a' || a[i]=='U') ans+=23;
            else if(a[i]=='D' || a[i]=='9' || a[i]=='E' || a[i]=='W' || a[i]=='6' || a[i]=='O') ans+=26;

            else if(a[i]=='b' || a[i]=='d' || a[i]=='p' || a[i]=='G' || a[i]=='S' || a[i]=='q' || a[i]=='H' || a[i]=='N') ans+=25;

            else if(a[i]=='J' || a[i]=='I' || a[i]=='X' || a[i]=='[' || a[i]==']' || a[i]=='f' || a[i]=='n' || a[i]=='{' || a[i]=='}') ans+=18;

        }
        cout<<ans<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t=1;
    // cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}


















            // if(a[i]==' ') ans+=0;
            // else if(a[i]=='\'' || a[i]=='`') ans+=3;
            // else if(a[i]=='.') ans+=4;
            // else if(a[i]=='"') ans+=6;
            // else if(a[i]==',' || a[i]=='-' || a[i]=='^') ans+=7;
            // else if(a[i]==':' || a[i]=='_') ans+=8;
            // else if(a[i]=='!' || a[i]=='~') ans+=9;
            // else if(a[i]=='>' || a[i]=='/' || a[i]=='<' || a[i]=='\\') ans+=10;
            // else if(a[i]==';') ans+=11;
            // else if(a[i]=='(' || a[i]==')' || a[i]=='|') ans+=12;
            // else if(a[i]=='+' || a[i]=='v' || a[i]=='r' || a[i]=='x') ans+=13;
            // else if(a[i]=='Y' || a[i]=='=') ans+=14;
            // else if(a[i]=='i' || a[i]=='?') ans+=15;
            // else if(a[i]=='L' || a[i]=='7' || a[i]=='T' || a[i]=='l') ans+=16;
            // else if(a[i]=='*' || a[i]=='c' || a[i]=='t' || a[i]=='u') ans+=17;
            // else if(a[i]=='J' || a[i]=='I' || a[i]=='X' || a[i]=='[' || a[i]==']' || a[i]=='f' || a[i]=='n' || a[i]=='{' || a[i]=='}') ans+=18;
            // else if(a[i]=='1' || a[i]=='V' || a[i]=='w' || a[i]=='z') ans+=19;
            // else if(a[i]=='C' || a[i]=='F' || a[i]=='o' || a[i]=='j') ans+=20;
            // else if(a[i]=='4' || a[i]=='K' || a[i]=='k' || a[i]=='h' || a[i]=='s') ans+=21;
            // else if(a[i]=='2' || a[i]=='%' || a[i]=='Z' || a[i]=='0' || a[i]=='m') ans+=22;
            // else if(a[i]=='8' || a[i]=='3' || a[i]=='P' || a[i]=='e' || a[i]=='a' || a[i]=='U') ans+=23;
            // else if(a[i]=='&' || a[i]=='#' || a[i]=='A' || a[i]=='y') ans+=24;
            // else if(a[i]=='b' || a[i]=='d' || a[i]=='p' || a[i]=='G' || a[i]=='S' || a[i]=='q' || a[i]=='H' || a[i]=='N') ans+=25;
            // else if(a[i]=='D' || a[i]=='9' || a[i]=='E' || a[i]=='W' || a[i]=='6' || a[i]=='O') ans+=26;
            // else if(a[i]=='5') ans+=27;
            // else if(a[i]=='M' || a[i]=='R') ans+=28;
            // else if(a[i]=='$' || a[i]=='B') ans+=29;
            // else if(a[i]=='g') ans+=30;
            // else if(a[i]=='Q') ans+=31;
            // else if(a[i]=='@') ans+=32;