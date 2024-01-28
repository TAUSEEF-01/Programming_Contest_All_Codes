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
    string a;
    cin>>a;
    int sz=a.size();
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    vector<int> mark(5000, 0);
    for(int i=0; i<sz; i++)
    {
        mark[a[i]]++;
    }
    
    // for(int i='a'; i<='z'; i++)
    // {
    //     cout<<mark[i]<<' ';
    // }

    int ctr=0, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0, f7=0, f8=0, f9=0, f10=0, f11=0, f12=0, f13=0, f14=0, f15=0;
    while(sz--)
    {
        if(mark['r']>0 && mark['e']>0 && mark['d']>0)//red
        {
            ctr++;
            mark['r']--;
            mark['e']--;
            mark['d']--;
        }
        
        if(mark['a']>0 && mark['s']>0 && mark['h']>0)//ash
        {
            ctr++;
            mark['a']--;
            mark['s']--;
            mark['h']--;
        }

        if(mark['b']>0 && mark['l']>0 && mark['u']>0 && mark['e']>0)//blue
        {
            ctr++;
            mark['b']--;
            mark['l']--;
            mark['u']--;
            mark['e']--;
        }

        if(mark['c']>0 && mark['y']>0 && mark['a']>0 && mark['n']>0)//cyan
        {
            ctr++;
            mark['c']--;
            mark['y']--;
            mark['a']--;
            mark['n']--;
        }

        if(mark['g']>0 && mark['r']>0 && mark['e']>=2 && mark['n']>0)//green
        {
            ctr++;
            mark['g']--;
            mark['r']--;
            mark['e']--;
            mark['e']--;
            mark['n']--;
        }

        if(mark['p']>0 && mark['i']>0 && mark['n']>0 && mark['k']>0)//pink
        {
            ctr++;
            mark['p']--;
            mark['i']--;
            mark['n']--;
            mark['k']--;
        }

        if(mark['g']>0 && mark['r']>0 && mark['e']>0 && mark['y']>0)//grey
        {
            ctr++;
            mark['g']--;
            mark['r']--;
            mark['e']--;
            mark['y']--;
        }

        if(mark['g']>0 && mark['o']>0 && mark['l']>0 && mark['d']>0)//gold
        {
            ctr++;
            mark['g']--;
            mark['o']--;
            mark['l']--;
            mark['d']--;
        }

        if(mark['w']>0 && mark['h']>0 && mark['i']>0 && mark['t']>0 && mark['e']>0)//white
        {
            ctr++;
            mark['w']--;
            mark['h']--;
            mark['i']--;
            mark['t']--;
            mark['e']--;
        }

        if(mark['y']>0 && mark['e']>0 && mark['l']>=2 && mark['o']>0 && mark['w']>0)//yellow
        {
            ctr++;
            mark['y']--;
            mark['e']--;
            mark['l']--;
            mark['l']--;
            mark['o']--;
            mark['w']--;
        }
        
        if(mark['e']>0 && mark['u']>0 && mark['p']>=2 && mark['r']>0 && mark['l']>0)//purple
        {
            ctr++;
            mark['p']--;
            mark['u']--;
            mark['r']--;
            mark['p']--;
            mark['l']--;
            mark['e']--;
        }

        if(mark['o']>0 && mark['r']>0 && mark['a']>0 && mark['n']>0 && mark['g']>0 && mark['e']>0)//orange
        {
            ctr++;
            mark['o']--;
            mark['r']--;
            mark['a']--;
            mark['n']--;
            mark['g']--;
            mark['e']--;
        }
        
        if(mark['b']>0 && mark['r']>0 && mark['o']>0 && mark['w']>0 && mark['n']>0)//brown
        {
            ctr++;
            mark['b']--;
            mark['r']--;
            mark['o']--;
            mark['w']--;
            mark['n']--;
        }
        
        if(mark['s']>0 && mark['i']>0 && mark['l']>0 && mark['v']>0 && mark['e']>0 && mark['r']>0)//silver
        {
            ctr++;
            mark['s']--;
            mark['i']--;
            mark['l']--;
            mark['v']--;
            mark['e']--;
            mark['r']--;
        }
        
        if(mark['b']>0 && mark['l']>0 && mark['a']>0 && mark['c']>0 && mark['k']>0)//black
        {
            ctr++;
            mark['b']--;
            mark['l']--;
            mark['a']--;
            mark['c']--;
            mark['k']--;
        }

    }

    cout<<ctr<<endl;

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}





// string s[]={ "blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};
// string x[]={"belu", "eegnr", "ellowy", "der", "elppru", "aegnor", "iknp", "egry", "acny", "bnorw", "ahs", "eilrsv", "dglo", "ehitw", "abckl"};
// string g="abcdeghiklnoprstuvwy";



