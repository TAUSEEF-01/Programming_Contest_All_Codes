#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


// // Reference:
// // D. Gusfield,
// // Algorithms on Strings, Trees, and Sequences: Computer Science and
// // Computational Biology
// template <class T> vector<int> z_algorithm(const vector<T>& s) 
// {
//     int n = int(s.size());
//     if (n == 0) return {};

//     vector<int> z(n);
//     z[0] = 0;
//     for (int i=1, j=0; i<n; i++) 
//     {
//         int& k= z[i];
//         if(j+z[j] <= i) k= 0;
//         else k= min(j+z[j]-i, z[i-j]);

//         while (i+k < n && s[k] == s[i+k]) k++;
//         if (j+z[j] < i+z[i]) j= i;
//     }
//     z[0]= n;
//     return z;
// }

// vector<int> z_algorithm(const string& s) 
// {
//     int n = int(s.size());
//     vector<int> s2(n);
//     for (int i = 0; i < n; i++) 
//     {
//         s2[i] = s[i];
//     }
//     return z_algorithm(s2);
// }


/**
 * @brief Z-algorithm
 * s[0:]とs[i:]のLCPの長さを各iについて求める 全体でO(N)
 *
 * @tparam It 配列のイテレータ
 * @param begin 配列の開始イテレータ
 * @param end 配列の終了イテレータ
 * @return std::vector<typename std::iterator_traits<It>::value_type> z
 */
template <typename It> vector<int> z_algorithm(It begin, It end) 
{
    int n = end - begin;
    vector<int> z(n);
    z[0] = n;

    for(int i = 1, j = 0; i < n;) 
    {
        // [0, j)と[i, i + j)が一致している
        while(i + j < n && begin[j] == begin[i + j]) j++;
        z[i] = j;
        int k = 1; // [k,)と[i+k,)はLCPが等しいと確定している
        for(; k < j && k + z[k] < j; k++) 
        {
            z[i + k] = z[k];
        }
        i += k;
        if(j) j -= k;
    }
    return z;
}



template <typename R> vector<int> z_algorithm(const R& s) 
{
    return z_algorithm(begin(s), end(s));
}



void solve()
{
    int n;
    cin >> n;
    string t;
    cin >> t;
    
    string a = t.substr(0, n);
    string b = t.substr(n);
    reverse(b.begin(), b.end());
    
    string x = a + b;
    vector<int> za_x = z_algorithm(x);
    za_x.push_back(0);
    
    string y = b + a;
    vector<int> za_y = z_algorithm(y);
    za_y.push_back(0);
    
    for (int i = 0; i <= n; i++) 
    {
        if(za_x[2 * n - i] < i) continue;
        if(za_y[n + i] < n - i) continue;
        cout << t.substr(0, i) + t.substr(n + i) << endl;
        cout << i << endl;
        return;
    }
    
    cout << -1 << endl;
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








// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int maxn=3e6+5;

// int n,t;
// char s[maxn],a[maxn],b[maxn],ans[maxn];
// int cnt;

// int main()
// {
// 	cin>>n>>s;;
// 	for(int i=0;i<n;i++)
//     {
// 		a[i]= s[i];
// 		b[i]= b[i+n]= s[2*n-i-1];
// 	}

// 	ll pos=strstr(b,a)-b;
// 	if(pos<0)
//     {
// 		cout<<-1<<endl;
// 		return 0;
// 	}

// 	pos=n-pos;
// 	for(int i=0;i<pos;i++)
// 		ans[cnt++]=s[i];

// 	for(int i=n+pos;i<2*n;i++)
// 		ans[cnt++]=s[i];

// 	cout<<ans<<endl<<pos<<endl;
    
// 	return 0;
// }


