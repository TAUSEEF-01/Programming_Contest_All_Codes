#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main()
{
    int n,a;
    srand(time(0));
    cin>>n>>a;
    for(int i=0; i<n; i++)
    {
        int p=(rand()%a)+1;
        if(p!=p)
        {
            cout<< p<<endl;
        }
        else{
            continue;
        }

    }

    return 0;
}
