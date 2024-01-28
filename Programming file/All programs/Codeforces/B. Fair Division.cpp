//accepted
//https://codeforces.com/contest/1472/problem/B

//  _______  _        _______           _______  _       _________ _______  _______  _______  _______          _________ ______   _______  _______       _______  __   
// (  ____ \( (    /|(  ____ \|\     /|(  ___  )( (    /|\__   __/(  ____ )(  ____ \(  ____ \(  ____ \|\     /|\__   __/(  ___ \ (  ____ \(  ____ \     (  __   )/  \  
// | (    \/|  \  ( || (    \/| )   ( || (   ) ||  \  ( |   ) (   | (    )|| (    \/| (    \/| (    \/| )   ( |   ) (   | (   ) )| (    \/| (    \/     | (  )  |\/) ) 
// | (__    |   \ | || |      | (___) || (___) ||   \ | |   | |   | (____)|| (__    | (_____ | (_____ | |   | |   | |   | (__/ / | (__    | (_____      | | /   |  | | 
// |  __)   | (\ \) || |      |  ___  ||  ___  || (\ \) |   | |   |     __)|  __)   (_____  )(_____  )( (   ) )   | |   |  __ (  |  __)   (_____  )     | (/ /) |  | | 
// | (      | | \   || |      | (   ) || (   ) || | \   |   | |   | (\ (   | (            ) |      ) | \ \_/ /    | |   | (  \ \ | (            ) |     |   / | |  | | 
// | (____/\| )  \  || (____/\| )   ( || )   ( || )  \  |   | |   | ) \ \__| (____/\/\____) |/\____) |  \   /  ___) (___| )___) )| (____/\/\____) |     |  (__) |__) (_
// (_______/|/    )_)(_______/|/     \||/     \||/    )_)   )_(   |/   \__/(_______/\_______)\_______)   \_/   \_______/|/ \___/ (_______/\_______)_____(_______)\____/
//                                                                                                                                                (_____) 




#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define all(a) a.begin(), a.end()
#define asort(a) sort(all(a))
#define amin(a) *min_element(all(a))
#define amax(a) *max_element(all(a))
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}



void resoudre()
{
    int n; cin>>n;
    vi a(n);
    int o=0, t=0, sum=0;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==2) t++;
        else o++;
    }

    if(t==0 && o%2==0)
    {
        cout<<"YES\n";
    }
    else if(o==0 && t%2==0)
    {
        cout<<"YES\n";
    }
    else if(sum%2==0 && (o>0 && t>0)) 
    {
        cout<<"YES\n";
    }
    else 
    {
        cout<<"NO\n";
    }
}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}


