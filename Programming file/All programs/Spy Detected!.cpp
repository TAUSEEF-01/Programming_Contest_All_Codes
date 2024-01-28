//accepted
//https://codeforces.com/contest/1512/problem/A


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void jisko()
{
    int n; cin>>n;
    vi a(n), b(110); 
    for(auto &x: a){
        cin>>x; 
        b[x]++;
    }
    int number;
    for(int i=0; i<110; i++){
        if(b[i]==1){
            number=i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==number){
            cout<<i+1<<endl;
            return;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        jisko();
    }

    return 0;
}
