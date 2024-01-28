//accepted
//https://atcoder.jp/contests/abc170/tasks/abc170_c?lang=en

/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x , n ; 
    cin>> x >> n ; 
    vector<int> v ; 
    for(int i = 0 ; i< n ; i++)
    {
        int x ; 
        cin>> x ; 
        v.push_back(x); 
    }
    sort(v.begin() , v.end()); 
    int r = x ;
    int l = x;
    while(true )
    {
        if(binary_search(v.begin() , v.end() , l)== false )
        {
            cout<<l<<endl;
            break;
        }
        else if(binary_search(v.begin() , v. end() , r)== false)
        {
            cout<<r<<endl;
            break ;
        }   
        else{
            r++;
            l--;
        }
    }
}

*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, n;
    cin>>x>>n;
    vector<int>a(n), b(1000,0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[a[i]]=-1;
    }
    int ans1=101, ans2=0;
    for(int i=x; ; i++)
    {
        if(b[i]==0)
        {
            ans1=i;
            break;
        }
    }
    for(int i=x; ; i--)
    {
        if(b[i]==0)
        {
            ans2=i;
            break;
        }
    }
    if(n==0)
    cout<<x<<endl;
    else if(abs(x-ans1)==abs(x-ans2))
    cout<<min(ans1,ans2)<<endl;
    else if(abs(x-ans1)>abs(x-ans2))
    cout<<ans2<<endl;
    else
    cout<<ans1<<endl;

    return 0;
}