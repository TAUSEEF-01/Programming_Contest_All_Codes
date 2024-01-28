//accepted
//https://codeforces.com/contest/1837/problem/C


/*
//main sln:

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    char x = '0';
    for (auto& c : s) {
      if (c == '?') c = x;
      x = c;
    }
    cout << s << '\n';
  }
}


*/


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
const double pi= 3.141592653589793238462643383279502884197169399375105820974944;
const ll N=1e9+7;


void solve()
{
    string a;
    cin>>a;
    int flag=0, pos=a.size()-1;
    char x='0';
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='?')
        {
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<a<<endl;
        return;
    }
    else
    {
        string b="";
        char mark=a[0];
        if(a[0]=='?')
        {
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]!='?')
                {
                    pos=i;
                    x=a[i];
                    break;
                }
            }
            for(int i=0; i<=pos; i++)
            {
                b+=x;
            }
            mark=x;
            for(int i=pos+1; i<a.size(); i++)
            {
                if(a[i]=='0')
                {
                    mark='0';
                }
                else if(a[i]=='1')
                {
                    mark='1';
                }
                b+=mark;
            }
        }
        else
        {
            for(int i=0; i<a.size(); i++)
            {
                if(a[i]=='0')
                {
                    mark='0';
                }
                else if(a[i]=='1')
                {
                    mark='1';
                }
                b+=mark;
            }
        }
        cout<<b<<endl;
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