#include<bits/stdc++.h>
using namespace std;
#define ll long long


void tesla()
{
    int a, b;
    cin>>a>>b;

    if(a>b){
        swap(a,b);
    }

    if(b<=3){
        cout<<-1<<endl;
        return;
    }
    else{
        if(b%2==0){
            cout<<b/2<<' '<<b/2<<endl;
            return;
        }
        else{
            if(abs(a-b)>=1){
                cout<<(b-1)/2<<' '<<(b-1)/2<<endl;
                return;
            }
            else{
                for(int i=3; i<=sqrt(a); i++){
                    if(a%i==0){
                        cout<<a/i<<' '<<a-a/i<<endl;
                        return;
                    }
                }
                cout<<-1<<endl;
            }
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
        tesla();
    }

    return 0;
}