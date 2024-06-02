// accepted
// https://codeforces.com/contest/1948/problem/B

/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡔⣻⠁ ⢀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣾⠳⢶⣦⠤⣀⠀⠀⠀⠀⠀⠀⠀⣾⢀⡇⡴⠋⣀⠴⣊⣩⣤⠶⠞⢹⣄⠀⠀⠀
⠀⠀⠀⠀⢸⠀⠀⢠⠈⠙⠢⣙⠲⢤⠤⠤⠀⠒⠳⡄⣿⢀⠾⠓⢋⠅⠛⠉⠉⠝⠀⠼⠀⠀⠀
⠀⠀⠀⠀⢸⠀⢰⡀⠁⠀⠀⠈⠑⠦⡀⠀⠀⠀⠀⠈⠺⢿⣂⠀⠉⠐⠲⡤⣄⢉⠝⢸⠀⠀⠀
⠀⠀⠀⠀⢸⠀⢀⡹⠆⠀⠀⠀⠀⡠⠃⠀⠀⠀⠀⠀⠀⠀⠉⠙⠲⣄⠀⠀⠙⣷⡄⢸⠀⠀⠀
⠀⠀⠀⠀⢸⡀⠙⠂⢠⠀⠀⡠⠊⠀⠀⠀⠀⢠⠀⠀⠀⠀⠘⠄⠀⠀⠑⢦⣔⠀⢡⡸⠀⠀⠀
⠀⠀⠀⠀⢀⣧⠀⢀⡧⣴⠯⡀⠀⠀⠀⠀⠀⡎⠀⠀⠀⠀⠀⢸⡠⠔⠈⠁⠙⡗⡤⣷⡀⠀⠀
⠀⠀⠀⠀⡜⠈⠚⠁⣬⠓⠒⢼⠅⠀⠀⠀⣠⡇⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⡀⢹⠀⠸⡄⠀⠀
⠀⠀⠀⡸⠀⠀⠀⠘⢸⢀⠐⢃⠀⠀⠀⡰⠋⡇⠀⠀⠀⢠⠀⠀⡿⣆⠀⠀⣧⡈⡇⠆⢻⠀⠀
⠀⠀⢰⠃⠀⠀⢀⡇⠼⠉⠀⢸⡤⠤⣶⡖⠒⠺⢄⡀⢀⠎⡆⣸⣥⠬⠧⢴⣿⠉⠁⠸⡀⣇⠀
⠀⠀⠇⠀⠀⠀⢸⠀⠀⠀⣰⠋⠀⢸⣿⣿⠀⠀⠀⠙⢧⡴⢹⣿⣿⠀⠀⠀⠈⣆⠀⠀⢧⢹⡄
⠀⣸⠀⢠⠀⠀⢸⡀⠀⠀⢻⡀⠀⢸⣿⣿⠀⠀⠀⠀⡼⣇⢸⣿⣿⠀⠀⠀⢀⠏⠀⠀⢸⠀⠇
⠀⠓⠈⢃⠀⠀⠀⡇⠀⠀⠀⣗⠦⣀⣿⡇⠀⣀⠤⠊⠀⠈⠺⢿⣃⣀⠤⠔⢸⠀⠀⠀⣼⠑⢼
⠀⠀⠀⢸⡀⣀⣾⣷⡀⠀⢸⣯⣦⡀⠀⠀⠀⢇⣀⣀⠐⠦⣀⠘⠀⠀⢀⣰⣿⣄⠀⠀⡟⠀⠀
⠀⠀⠀⠀⠛⠁⣿⣿⣧⠀⣿⣿⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣴⣿⣿⡿⠈⠢⣼⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠈⠁⠈⠻⠈⢻⡿⠉⣿⠿⠛⡇⠒⠒⢲⠺⢿⣿⣿⠉⠻⡿⠁⠀⠀⠈⠁⠀⠀
⢀⠤⠒⠦⡀⠀⠀⠀⠀⠀⠀⠀⢀⠞⠉⠆⠀⠀⠉⠉⠉⠀⠀⡝⣍⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⡎⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⡰⠋⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⢡⠈⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀
⡇⠀⠀⠸⠁⠀⠀⠀⠀⢀⠜⠁⠀⠀⠀⡸⠀⠀⠀⠀⠀⠀⠀⠘⡄⠈⢳⡀⠀⠀⠀⠀⠀⠀⠀
⡇⠀⠀⢠⠀⠀⠀⠀⠠⣯⣀⠀⠀⠀⡰⡇⠀⠀⠀⠀⠀⠀⠀⠀⢣⠀⢀⡦⠤⢄⡀⠀⠀⠀⠀
⢱⡀⠀⠈⠳⢤⣠⠖⠋⠛⠛⢷⣄⢠⣷⠁⠀⠀⠀⠀⠀⠀⠀⠀⠘⡾⢳⠃⠀⠀⠘⢇⠀⠀⠀
⠀⠙⢦⡀⠀⢠⠁⠀⠀⠀⠀⠀⠙⣿⣏⣀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣧⡃⠀⠀⠀⠀⣸⠀⠀⠀
⠀⠀⠀⠈⠉⢺⣄⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣗⣤⣀⣠⡾⠃⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠣⢅⡤⣀⣀⣠⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠉⠉⠉⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠁⠀⠉⣿⣿⣿⣿⣿⡿⠻⣿⣿⣿⣿⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⠀⠀⠀⠀⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣟⠀⠀⢠⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⠀⠀⢸⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⡏⠀⠀⢸⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⠀⠀⠀⢺⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠈⠉⠻⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⠏
    Dori dori dori dori dori dori
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <set>
#include <bitset>
#include <map>
#include <chrono>
#include <random>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
/*
    ordered_set o_set;
    o_set.order_of_key(store[i]); --> returns index from the begin.
*/

using ll = long long;
using ull = unsigned long long;
using vb = vector<bool>;
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vs = vector<string>;
#define all_in(a)     \
    for (auto &x : a) \
        cin >> x;
#define pb push_back
#define pb push_back

#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define asort(vec) sort(all(vec))
#define rasort(vec) sort(rall(vec))

#define vec_min(vec) *min_element(all(vec))
#define vec_max(vec) *max_element(all(vec))

#define ub(vec, x) upper_bound(all(vec), x)
#define lb(vec, x) lower_bound(all(vec), x)
#define bins(a, n) binary_search(a.begin(), a.end(), n) // returns true or false value

#define lower_case(a) transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper_case(a) transform(a.begin(), a.end(), a.begin(), ::toupper)

#define total_sum(a) accumulate(a.begin(), a.end(), 0) // total_sum initializing with 0; //this fnc gives the total sum of all numbers in the array

#define get_bit(n, pos) (bool)(n & (1 << pos)) // returns bool value --> 0 or 1;
#define set_bit(n, pos) (n | (1 << pos))
#define clear_bit(n, pos) (n & (~(1 << pos)))
#define update_bit(n, pos, value) ((clear_bit(n, pos)) | (value << pos))

#define mem(a, x) memset(a, x, sizeof(a))

#define nxp(v) next_permutation(v.begin(), v.end()); // generates all possible permutations

const double pi = acos(-1);
const ll MOD = 1e9 + 7;
#define dbg(a) cerr << __LINE__ << ": " << #a << " = " << a << '\n'

/*
# deque //both
# stack //LIFO
# queue //FIFO
*/

/*
    int a[n + 1] = {};
    sort(a, a + n + 1);
    partial_sum(a, a + n + 1, a); // returns prefix sum and size of the array becomes n+1
*/

// string s = "dog:cat";  int pos = s.find(":");  string sub = s.substr(pos + 1);   // Copy substring after pos; -->  String is: cat
// string s1 = "Geeks";   string r = s1.substr(3, 2);   // Copy two characters of s1 (starting from position 3); -->  String is: ks

/*
    int rotate_by=k%(n+1);
    rotate(a.begin(), a.end() - rotate_by, a.end());
*/

/*
# bitset<66> bits(x);
//bitset operation --> converts any number to bits, can mention how many bits we want; here 66 bits that we want
//using the following operation we can convert the bits into string:

    string res="";
    res=bits.to_string();

//using the following operation we can exclude the extra 0's that comes in front of the number:

    reverse(res.begin(), res.end());
    while(res.back()=='0')
    {
        res.pop_back();
    }
    reverse(res.begin(), res.end());

here if 4 -> 000000100  is found using bitset; by using the above method we can get 100 the required bits only.
*/

/*
    auto check = [&](int x1, int y1, int x2, int y2)
    {
        return abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1;
    };
*/

/*
    vector<int> name**(string &a, int &n)
    {
        vector<int> index;

        return index;
    }
*/

/*
    // string to number
    string s;
    num = stoi(s)
*/

/* precision errors dont occur generally in questions using double and sqrt function, if answer is coming
wrong, check your logic --> 1886B, specially in geometry questions make all possibilities */

// REMEMBER --->  1) a^b = (a|b)&(~(a&b))  2) a + b = (a or b) + (a and b)  3) a ^ b ^ c = (~a~bc) | (a~b~c) or (~ab~c) or (abc)  4) a^b = ~ab | a~b  5)If AND and OR for 3 numbers are given then we can find their xor using OR of pair wise numbers and using and of all then doing xor
// check for overflow during multiplication, so prefer division and addition rather than multiplication
// in lowerbound question see edge cases carefully and to find for a range use mid value
// for taking input in tree always remember to take if for n-1 values not for n values

/* 1) While using a decrementing loop check for i--
    2) While adding numbers like 1,2,3.... in variables in ll data type add like 1ll otherwise it may give runtime error
    3) While solving question having mathematical expression or related to hashing try to reform the expression in some other way.
    4) Sometimes float will cause problem in geometry problems so use Double reference :: >> D. Rudolph and Christmas Tree
    5) In multiset to delete a particular element do it like s.erase(s.find(x))
    6) In multiset we cannt find position of element directly like it - s.begin(). We need to use the function distance(s.begin(),it) to find relatice position of it from s.begin(). It returns the number of elements between them.
    7) With the powers of 2 ie 1,2,4,8 ...  we can make any number
    8) if we have TTTTTFFFFF then use  while(r-l > 1){ ll mid = l + (r-l)/2; if(v[mid] <= x){l = mid;} else{r = mid;}}
    9) if we have FFFFFTTTTT then use  while(r-l > 1){ ll mid = l + (r-l)/2; if(v[mid] >=  x){r = mid;} else{l = mid;}}
*/

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void in_out()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

/*
    for(int j = 0; j < 4; j++)
    {
        int num1 = dx[j]*a, num2 = dy[j]*b;
    }
*/

// sort(a.begin(), a.end(), greater<int>());
// vector<vector<int>> a(n, vector<int>(n, 0)), b(n, vector<int>(n, 0));

void get_answer()
{
    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    deque<int> store;
    store.push_back(a[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > store.front())
        {
            int num = a[i];
            while (num > 0)
            {
                store.push_front(num % 10);
                num /= 10;
            }
        }
        else
        {
            store.push_front(a[i]);
        }

        if (!is_sorted(all(store)))
        {
            deque<int> temp;
            while (store.back() > 9)
            {
                temp.push_back(store.back());
                store.pop_back();
            }
            while (!temp.empty())
            {
                int num = temp.back();
                temp.pop_back();
                if (num > 9)
                {
                    store.push_back((num / 10) % 10);
                    store.push_back(num % 10);
                }
                else
                {
                    store.push_back(num);
                }
            }
        }
    }

    if (is_sorted(all(store)))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    FAST_IO();

    // in_out();

    int test = 1;
    cin >> test;

    for (int i = 1; i <= test; i++)
    {
        // cout << "Case " << i << ": ";
        get_answer();
    }

    return 0;
}
